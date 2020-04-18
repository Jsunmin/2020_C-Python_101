//#include <stdio.h>
//#include <stdbool.h>
//
//// ����ü: �ϳ� �̻��� ������ ��� ���� ���ο� �ڷ���
//struct vector {
//	double x;
//	double y;
//	bool isProcessed;
//};
//struct vector getVectorSum(struct vector* a, struct vector* b); // ����ü�� �޸��ּҸ� �޴´�!
//
//int main( void ) {
//	
//	struct student {
//		char name[20];
//		int eng;
//		int math;
//		int phys;
//	};
//	struct student studentA = { "abc", 1, 2, 3 };
//	struct student* pStudentA;
//	pStudentA = &studentA;
//	// ����ü ����� �����ϴ� ���
//	// 1, studentA.name
//	// 2, (*pStudentA).name
//	// 3, pStudentA->name ( ���� ��� ������ : -> )
//	printf("%s, %s, %s\n", studentA.name, (*pStudentA).name, pStudentA->name);
//	// ���� (����ü �ּ�)
//	printf("%d, %d, %d\n", &studentA, pStudentA, &studentA.eng); // �迭�� ����������, ����ü�� �޸� �ּҴ� ù��° ��������� �޸��ּ�
//	// ( ���� ������� ������, �޸� �ּ� 20 ���� �� )
//	// student ����ü �ȿ��� name �տ� ��� ���� �߰��ϸ�, ����ü �޸��ּҿ� 2��° ��������� �ּ� ���̰� �� �޶���!! ( ������ ���� �߿��ϴ�!! )
//
//	// ����ü�� �̷���� �迭
//	struct student studentList[] = {
//		{ "ȫ�浿", 82, 72, 58 },
//		{ "������", 97, 82, 39 },
//		{ "�̼���", 42, 62, 29 },
//		{ "�庸��", 52, 12, 0 },
//	};
//
//	for (int i = 0; i < sizeof(studentList) / sizeof(studentList[0]); i++) {
//		printf("%s: ����=%3d ����=%3d ����=%3d\n", studentList[i].name, studentList[i].eng, studentList[i].math, studentList[i].phys);
//	}
//
//	// ����ü�� �Լ�
//	// ����ü ���� call by value�� Ȱ��� -> call by reference�� ���ؼ��� �����͸� Ȱ���ؾ� �Ѵ�!
//	struct vector vector1 = { 2.0, 3.0, false };
//	struct vector vector2 = { 5.0, 6.0, false };
//	struct vector vectorSum = getVectorSum( &vector1, &vector2 ); // ����ü�� �ּҸ� �Ѱ��ش�
//	printf("vector1: %.2f, %.2f, %d\n", vector1.x, vector1.y, vector1.isProcessed);
//	printf("vector2: %.2f, %.2f, %d\n", vector2.x, vector2.y, vector2.isProcessed);
//	printf("vectorSum: %.2f, %.2f, %d\n", vectorSum.x, vectorSum.y, vectorSum.isProcessed);
//
//	// ����ü: �ϳ��� �޸� ������ ���� ���� ��� �������� ������ �� �ְ� �ϴ� ��� ~ �޸� ������ �������� ����, �������� ���α׷��� ����
//	// ����ü�� ������� ���� ū ��������� �޸� ������� �Ȱ����� -> �ϳ��� ������� ����� �ʹ� ũ��, �ٸ� ��� ���� �����Ͱ� ������!
//	union example { // ����ü ������� ���� ū ������� �޸� �������� 4 (int)
//		char a;
//		short b;
//		int c;
//	};
//	union example v;
//	v.a = 'A';
//	printf("v.a:%c  v.b:%d  v.c:%d\n", v.a, v.b, v.c);
//	v.c = 10000;
//	printf("v.a:%c  v.b:%d  v.c:%d\n", v.a, v.b, v.c); // v.a �� ����� �ı���.. (������ �ʰ�)
//	// ����ü�� �Ǵٸ� �뵵
//	// ������ �� b, c�� 10000���� ��������? -> ����ü�� �� ��������� ������� �Ҵ�� �޸� ������ ���°Ͱ� ����!
//	// �� ��������� �� �ٸ��� �����ϰ�. ����ü�� �ϳ��� �����͸� ������, �� �����͸� �� ������ Ÿ�Կ� �°� ����� �� �ִٴ� ���̴�!
//	union ip_address {
//		unsigned long num;
//		unsigned char ch[4];
//	};
//	union ip_address addr;
//	addr.ch[0] = 0x1;
//	addr.ch[1] = 0x0;
//	addr.ch[2] = 0x0;
//	addr.ch[3] = 0x7f;
//	printf("%x\n", addr.num);
//
//	// ������: ������ ���� �� �ִ� ���� ������ �� ( ������ �������� ���ǵ� ������ ����! )
//	enum days { SUN = 0, MON, TUE = 10, WED = 11, THU =12, FRI = 13, SAT =14 }; // MON = 1 (�ڵ� ++)
//
//	// typedef: ���ο� �ڷ����� �����ϴ� ��
//	typedef struct point { int x; int y; } POINT; // ���� �̷���, ����ü�� �ϳ��� ������ Ÿ������ alias �ϴµ� ���� ����!
//	POINT point1 = { 7, 9 };
//	printf("point1: %d, %d\n", point1.x, point1.y);
//
//	return 0;
//}
//
//struct vector getVectorSum(struct vector* a, struct vector* b) {
//	a->isProcessed = true; 
//	(*b).isProcessed = true; // �̷��� call by reference ����!!
//	struct vector result = {
//		(*a).x + (*b).x,
//		a->y + b->y,
//		false,
//	};
//	return result; // �̷��� ����ü ���ϵ� ����!!
//};