//#include <stdio.h>
//
//#define SIZE1 2 // alias ����! ����ó�� �����Ҵ��� �ƴ϶�, ���ۺ��� S=3���� ����!
//#define SIZE2 5
//int main(void) {
//	printf("2�� �迭\n");
//	// ������ �迭 --> int a[2][3][4].. N���� �迭
//	// �迭�� �迭�� ����. --> int a[2][3];
//	// const int�� ������ �Ҵ��� �Ұ����ϴ�!!!  ( �ڼ��� ���� �ؿ� ���� )
//	int a[SIZE1][SIZE2] = { {1,2,3,4,5}, {6,7,8,9,10} };
//	// a�� ���� (0,0) - 1�� �� �ּҸ� ���� ����. (�޸��ּҴ� 1,2,3,4 ... 10) �������� 4��(int��) ������ ����
//	for (int i = 0; i < SIZE1; i++) {
//		for (int j = 0; j < SIZE2; j++) {
//			printf("%d\n", a[i][j]);
//		}
//	}
//	// ���� ������ ����ؼ� �غ���
//	const int size1 = sizeof(a) / sizeof(a[0]);
//	const int size2 = sizeof(a) / size1 / sizeof(a[0][0]);
//	printf("���� ���: %d, %d, %d\nsize1: %d, size2: %d\n", sizeof(a), sizeof(a[0]), sizeof(a[0][0]), size1, size2); // �����Ͱ� �ٲ���� �Һ�!
//	for (int i = 0; i < size1; i++) {
//		for (int j = 0; j < size2; j++) {
//			printf("%d\n", a[i][j]);
//		}
//	}
//	// ���ڿ�
//	// ���ڿ� ���
//	char string[] = "Is Seoul the capital city of Korea?";
//	printf("%s\n", string);
//	int ind = 0;
//	while (1) {
//		if (string[ind] == '\0') {
//			break;
//		}
//		printf("%c", string[ind]);
//		ind++;
//	}
//	printf("\n");
//	// ���ڿ� ����
//	int stringLength = 0;
//	while (1) {
//		if (string[stringLength] == '\0') {
//			break;
//		}
//		stringLength += 1;
//	}
//	printf("stringLength: %d\n", stringLength);
//	// �ǽ�
//	/*int number = 0;
//	char[] subjects[3] = { "����", "����", "����" };
//	int subjectArrSize = sizeof(subjects) / sizeof
//	while (1) {
//		for 
//		printf("%d�� �л��� ")
//	}*/
//	return 0;
//}

// C�� �����Ҵ�
// �����Ҵ�: �����Ͻÿ� ����� �������־�� ��. & �����Ҵ�: ��Ÿ�ӽÿ� ������ ����
//int s; // �����Ͻ� �۵� ~ ���� ����
//s = 3; // ��Ÿ�ӽ� �۵� ~ �Ҵ� ����
//int a[s] = { ~}; // �����Ҵ��� C�� �����Ͻÿ� ����� �������־�� �ϹǷ�, s�� null�� �� array ���� --> ������ ����!
//const int size1 = 2;
//const int size2 = 5;
//int a[size3][size2] = { {1,2,3,4,5}, {6,7,8,9,10} };

// #define�� ������ �ƴ϶�, alias - ��ü�� ����! ����� �Ҵ��� �Ͼ�� ����!
// �����Ҵ��� ���, #define const int �� �� �����ؼ� �� �� ������, �����Ҵ��� C�� ���, #define�� ���ؼ��ۿ� ���� ���Ѵ�!