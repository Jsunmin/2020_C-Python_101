#include <stdio.h>

// ��ȣ ��� ���� ( == const PI = 3.141592; )
#define PI 3.141592
//int main(void) {
//	// ���� ����
//	int a;
//	// �� �Ҵ�(����)
//	a = 10;
//	printf("a�� ���� %d\n", a);
//	// �ǽ�) �ΰ��� ������ �̿��� ��Ģ����
//	int b = 10; int c = 20;
//	printf("%d * %d = %d\n", b, c, b*c);
//
//	// ������ ��
//	char d = 'a';
//	printf("���ڴ� %c\n", d); // �Ϲ����� ����
//	printf("���ڴ� %d\n", d); // ASCII �ڵ�� ��ȯ
//	
//	// �Ǽ��� 
//	float e = 3.14159212141; // 4byte ���� 6�ڸ�����
//	double f = 3.14159212141; // 8byte 6�ڸ� �̻� ǥ�� ���� ( ���е� ���� )
//	printf("e: %.15f \n", e); // ���е��� ���� �� �̻�
//	printf("f: %.15f \n", f); // �� ��Ȯ
//
//	// �ǽ�) �� ���� ���ϱ�
//	printf("�������� �Է��Ͻÿ�.");
//	double radius;
//	scanf_s("%lf", &radius); // double�� �޾Ƽ�, radius ��� ������ �����Ѵ�!
//	const float pi = 3.141592;
//	printf("%f, %f", radius * radius * PI, radius * radius * pi);
//
//	// �� �� �Է� �ޱ�
//	int num1, num2; // �̸� ����
//	printf("�� ����?");
//	scanf_s("%d %d", &num1, &num2); // ������ ������ �ּҰ��� ���� 
//	printf("%d, %d\n", num1, num2);
//	printf("num1, num2 �ּ�: %d %d\n", &num1, &num2); //  ������ �޸� ��ġ�� �޾ƿ� ��,
//	printf("num1, num2 �ּ�: %p %p\n", &num1, &num2); //  ������ �޸� ��ġ�� �޾ƿ� ��,
//	printf("%d", &e);
//	return 0;
//}