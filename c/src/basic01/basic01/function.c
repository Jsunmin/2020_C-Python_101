#include <stdio.h>
#include "accumulate.h"

// ��������: ��� �Լ����� ���� ���� & �ڵ� �ʱ�ȭ�� ��
// heap ������ ���� �Լ��� ȣ��Ǵ� stack�̶� ���� -> �ֹ� X
// ���α׷� ���۽� �޸� �Ҵ� & ���α׷� ����� �Ҹ�
int globalSum = 0;

// ���ϰ��� �ִ� �Լ�
int add(int a, int b) {
	return a + b;
}
// ���ϰ��� ���� �Լ�
void addVoid(int a, int b) {
	printf("���� %d\n", a + b);
}

int power(int x, int y);
int power(int x, int y, int z);

double divide(unsigned int a, unsigned int b) {
	if (b == 0) {
		return 0;
	}
	return a / (double)b;
}

// ������ �Լ� (void : ����)
//int main(void) {
//	// ���� ����
//	int r = add(100, 25);
//	printf("%d\n", r);
//	// ���� x
//	addVoid(100, 25);
//	// ������
//	double r1 = divide(100, 20);
//	// 2° �ڸ����� �ݿø�
//	printf("%0.2lf\n", r1);
//	// static Ȱ���� �����Լ�
//	accumulate(2);
//	accumulate(3);
//	accumulate(4);
//	accumulate(5);
//
//	// �ǽ�
//	int a = 10, b = 20;
//	printf("a: %d, b: %d\n", a, b);
//	changer(10, 20);
//	printf("a: %d, b: %d\n", a, b);
//	return 0;
//}

int changer(int a, int b) {
	printf("a: %d, b: %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("a: %d, b: %d\n", a, b);
}
// ���� �Լ�
void accumulate(unsigned int a) {
	printf("---------------------------------\n");
	int sum = 0; // �������� ( �Լ� ȣ���� ������, �ֹߵ� )
	// stack ������ ���� ( �Լ� �ϳ��ϳ� ���ÿ� ���� ) ~ �Լ�( ��� { }) �� ������ �ڵ� �Ҹ�
	sum += a;
	printf("��������: %d\n", sum);
	globalSum += a; // ���������� ����, �Լ� ȣ�� ���Ŀ��� ���� ����ִ�!
	printf("��������: %d\n", globalSum);

	static int staticSum = 0; // �������� ( ��������ó�� �Լ� �������� Ȱ�� ���� )
	// ȣ��� ó�� �ѹ��� �ʱ�ȭ! ( �̹� �����ϸ� �������� ����)
	// �׷��� ��������ó�� heap ������ ����
	// -> ���������� ���� ����, ���⵵ ���.. --> �Լ� ȣ���� ������ ���� & �Լ� �� ���� ���� �ʿ�� ���� ������ Ȱ������!
	staticSum += a;
	printf("��������: %d\n", staticSum);
	
	printf("---------------------------------\n");
}


// static����: ���������� �������� �տ� ���� �� �ְ�.
// ���� �Լ� �������� ���� ���� (�������� ó��)
// �ѹ��� �ʱ�ȭ�ϰ� ���α׷� ����� �Ҹ� (�������� ó��)
// cf ���������� static�� ���̸�, �ش� ���� �������� Ȱ���� �� �ֵ��� ó��

// �������� static������ �����Ϸ��� �����, �ڵ� �ʱ�ȭ ���� 0 or null? �׷��� ���������� �ʱ�ȭ ����.