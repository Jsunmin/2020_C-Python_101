#include <stdio.h>
#include <string.h>

void characterOutput() {
	// ���� ��ǲ ���
	char input;
	printf("���� �ϳ� �Է�!\n");
	scanf_s("%c", &input);
	printf("����1: %c\n", input);

	char enter = getchar();

	// ���� ���� �Լ�
	char input2 = getchar();
	putchar(input2);
}

void string101() {
	// ���ڿ� ����
	char s[] = "hello";
	printf("%s\n", s);
	char s1[6];
	int sizeOfS1 = sizeof(s1) / sizeof(char);
	//s1 = "hello"; ~ �Ұ�: s1�� �ּҸ� �����ϰ� �ִ� �����
	for (int i = 0; i < sizeOfS1 - 1; i++) {
		//s1[i] = s[i];
		s1[i] = 'a';
		printf("%d, %c\n", i, s1[i]);
	}
	s1[sizeOfS1 - 1] = '\0'; // ���ڿ��� ��
	printf("%s\n", s1);

	//int s3[3] = { 1, 2, 3 };
	//s3[] = { 3, 4, 5 }; // �迭�� �缱�� �Ұ���!
	//printf("%s\n", s1);
}

void stringOutput() {
	// ����ڿ��� ���ڿ� �Է¹ޱ�
	char name[20]; // 19byte ���� �Է� ����
	scanf_s("%s", name, sizeof(name)); // �迭�� �̸��� �ּ�
	// ���� �Ұ� ( scanf�� ���а����� �νĵ� )
	printf("�̸��� %s\n", name);
	
	char enter = getchar();

	// ���ڿ� ���� �Լ�
	char name1[20];
	gets(name1); // ���� �Է� ���� ( scanf�� ���� �Է� �Ұ����ߴ�! )
	puts(name1);

	// ���ڿ� ����
	char source[] = "hello";
	char dest[20];
	int sourceSize = sizeof(source) / sizeof(source[0]);
	// d = s; ~ �̹� ������� ���ڿ��� ������ �ٸ� �޸� �Ҵ� �Ұ���! ( ������ Ȱ���ؾ� ��! )
	// ���� ���̺귯�� Ȱ��
	// params = ( ���系���� ���� ���, �����ؿ��� ��� ������ + 1, �����ؿ��� ���)
	strcpy_s(dest, sourceSize + 1, source); // source ������ + '/0'
	printf("%s", dest);
}
void practice() {
	// call by reference ~ ���� ���ڴ� 17��
	char s[20]; // �˳��ϰ�~
	gets(s);
	puts(s);
	for (int i = 0; i < 20; i++) {
		printf("%d, %c\n", i, s[i]); // 18°�� ���� '\0'�� ����Ű�� �ִ�!
	}
	printf("str length: %d", strlen(s)); // 20 ĭ���� �������, gets�� �ڵ� ������ �������� ���ֳ� ��
}
//int main() {
//	characterOutput();
//	string101();
//	stringOutput();
//	practice();
//	return 0;
//}