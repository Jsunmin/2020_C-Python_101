#include <stdio.h>

//int main(void) {
//	// ������ : + - * / %
//	int a = 10; double b = 3; // ���� b ���� �����̸�, ������ ���� ����(��) & �̸� %f�� �Ҵ������ν� 0�� �ȴ�.
//	printf("������ : %f\n", a / b);
//	int c = 10, d = 3; 
//	printf("c / d : %f\n", (double)c / d); // ������ ������ ����������, ���� ����ȯ�� ���� ������� �Ǽ��� %f �Ҵ�ǵ��� ��
//	printf("c / d �� : %d\n", c / d); // ������ ���� ����(��)
//	printf("c %% d ������ : %d\n", c % d); // ������ ���� ����(������)
//
//	// ������ �ڷ��� byte ǥ��
//	printf("%d \n", sizeof(short));
//	printf("%d \n", sizeof(int));
//	printf("%d \n", sizeof(long));
//	printf("%d \n", sizeof(long long));
//	printf("%d \n", sizeof(char));
//
//	// ���� ������
//	int e = 20, f = 10;
//	// �� �� �߿��� ū �� ���
//	int g = (e > f) ? e : f;
//	printf("ū ����: %d\n", e);
//	// ���̸� ���� �����̸� ���� ����!
//	int h = 10;
//	(h > 0) ? printf("���\n") : printf("����\n");
//	// ¦/Ȧ�� �Ǻ���
//	int i = 7;
//	(7 % 2 == 1) ? printf("Ȧ��\n") : printf("¦��\n");
//
//	// ���е� ����
//	float x = 1.234567890123456789;
//	double y = 1.234567890123456789;
//	long double z = 1.234567890123456789;
//	printf("float�� ũ�� = %d, x = %.25f \n", sizeof(float), x);
//	printf("double�� ũ�� = %d, y = %.25f \n", sizeof(double), y);
//	printf("long double�� ũ�� = %d, z = %.25f \n", sizeof(long double), z);
//
//	// ���� �����
//	//char initial;
//	//char grade;
//	//printf("���� �̸� ù ���ڴ� �����ΰ���: ");
//	//scanf_s("%c", &initial);
//	//printf("���α׷��� ���� ��������? (A-F): ");
//	//scanf_s(" %c", &grade); // ������ �����ν� ����Ű�� �����ؼ� input�� �����´�! ( ���� ������, enter�� �ٷ� ��;; )
//	//// keyboard -> c ���� ���� �߿�, inputsteam ����. ������ ���� enter ���� ��Ʈ������ ��. -> �̷��� �� enter�� �Ҹ��� ���� " %c" or getchar();
//	//printf("\n");
//	//printf("%c���� ���α׷��� ���� ������ %c�Դϴ�. \n", initial, grade);
//	char initial2;
//	char grade2;
//	printf("re ���� �̸� ù ���ڴ� �����ΰ���: ");
//	scanf_s("%c", &initial2);
//	char aw = getchar(); // input stream ���� enter�� ����!
//	printf("%c, üũüũ\n", aw);
//	printf("re ���α׷��� ���� ��������? (A-F): ");
//	scanf_s("%c", &grade2);
//	printf("\n");
//	printf("re %c���� ���α׷��� ���� ������ %c�Դϴ�. \n", initial2, grade2);
//
//	// �µ� ������
//	double f_temp, c_temp;
//	printf("ȭ���µ��� �Է��Ͻÿ�: ");
//	scanf_s("%lf", &f_temp);
//	c_temp = 5 / 9.0 * (f_temp - 32); // c_temp = 5 / 9 * (f_temp - 32); = 0 ~ 5 / 9 ������ ����� 0�̱� �����̴�.
//	printf("�����µ��� %f�Դϴ�. \n", c_temp);
//
//	//����108page ����
//	int year, month, day;
//	printf("������ ��¥�� �Է�(YYYY.MM.DD):");
//	//.�� �����ڷ� �ؼ� �Է� ( ' ' , �� ��! )
//	scanf_s("%dw%dw%d", &year, &month, &day); // int�� �ٷ� �ȵ��� ƨ�ܳ���!
//	printf("�� : %d \n", year);
//	printf("�� : %d \n", month);
//	printf("�� : %d \n", day);
//	return 0;
//}