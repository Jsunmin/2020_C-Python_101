//#include <stdio.h>
//#include <stdbool.h>
//
//// 구조체: 하나 이상의 변수를 묶어서 만든 새로운 자료형
//struct vector {
//	double x;
//	double y;
//	bool isProcessed;
//};
//struct vector getVectorSum(struct vector* a, struct vector* b); // 구조체의 메모리주소를 받는다!
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
//	// 구조체 멤버에 접근하는 방법
//	// 1, studentA.name
//	// 2, (*pStudentA).name
//	// 3, pStudentA->name ( 간접 멤버 연산자 : -> )
//	printf("%s, %s, %s\n", studentA.name, (*pStudentA).name, pStudentA->name);
//	// 참고 (구조체 주소)
//	printf("%d, %d, %d\n", &studentA, pStudentA, &studentA.eng); // 배열과 마찬가지로, 구조체의 메모리 주소는 첫번째 멤버변수의 메모리주소
//	// ( 다음 멤버변수 찍으면, 메모리 주소 20 차이 남 )
//	// student 구조체 안에서 name 앞에 멤버 변수 추가하면, 구조체 메모리주소와 2번째 멤버변수의 주소 차이가 또 달라짐!! ( 순서가 정말 중요하다!! )
//
//	// 구조체로 이루어진 배열
//	struct student studentList[] = {
//		{ "홍길동", 82, 72, 58 },
//		{ "강감찬", 97, 82, 39 },
//		{ "이순신", 42, 62, 29 },
//		{ "장보고", 52, 12, 0 },
//	};
//
//	for (int i = 0; i < sizeof(studentList) / sizeof(studentList[0]); i++) {
//		printf("%s: 영어=%3d 수학=%3d 물리=%3d\n", studentList[i].name, studentList[i].eng, studentList[i].math, studentList[i].phys);
//	}
//
//	// 구조체와 함수
//	// 구조체 또한 call by value로 활용됨 -> call by reference를 위해서는 포인터를 활용해야 한다!
//	struct vector vector1 = { 2.0, 3.0, false };
//	struct vector vector2 = { 5.0, 6.0, false };
//	struct vector vectorSum = getVectorSum( &vector1, &vector2 ); // 구조체의 주소를 넘겨준다
//	printf("vector1: %.2f, %.2f, %d\n", vector1.x, vector1.y, vector1.isProcessed);
//	printf("vector2: %.2f, %.2f, %d\n", vector2.x, vector2.y, vector2.isProcessed);
//	printf("vectorSum: %.2f, %.2f, %d\n", vectorSum.x, vectorSum.y, vectorSum.isProcessed);
//
//	// 공용체: 하나의 메모리 공간을 여러 개의 멤버 변수들이 공유할 수 있게 하는 기능 ~ 메모리 공간을 한정시켜 놔서, 보수적인 프로그래밍 가능
//	// 공용체의 사이즈는 가장 큰 멤버변수의 메모리 사이즈와 똑같아짐 -> 하나의 멤버변수 사이즈가 너무 크면, 다른 멤버 변수 데이터가 깨진다!
//	union example { // 공용체 사이즈는 가장 큰 멤버변수 메모리 사이즈인 4 (int)
//		char a;
//		short b;
//		int c;
//	};
//	union example v;
//	v.a = 'A';
//	printf("v.a:%c  v.b:%d  v.c:%d\n", v.a, v.b, v.c);
//	v.c = 10000;
//	printf("v.a:%c  v.b:%d  v.c:%d\n", v.a, v.b, v.c); // v.a 의 멤버값 파괴됨.. (사이즈 초과)
//	// 공용체의 또다른 용도
//	// 위에서 왜 b, c가 10000으로 나왔을까? -> 공용체는 각 멤버변수로 지렛대로 할당된 메모리 공간을 보는것과 같다!
//	// 즉 멤버변수를 다 다르게 설정하고. 공용체에 하나의 데이터를 넣으면, 그 데이터를 각 데이터 타입에 맞게 출력할 수 있다는 것이다!
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
//	// 열거형: 변수가 가질 수 있는 값을 열거해 둠 ( 변수는 열거형에 정의된 값만을 가짐! )
//	enum days { SUN = 0, MON, TUE = 10, WED = 11, THU =12, FRI = 13, SAT =14 }; // MON = 1 (자동 ++)
//
//	// typedef: 새로운 자료형을 정의하는 툴
//	typedef struct point { int x; int y; } POINT; // 보통 이렇게, 구조체를 하나의 데이터 타입으로 alias 하는데 자주 쓰임!
//	POINT point1 = { 7, 9 };
//	printf("point1: %d, %d\n", point1.x, point1.y);
//
//	return 0;
//}
//
//struct vector getVectorSum(struct vector* a, struct vector* b) {
//	a->isProcessed = true; 
//	(*b).isProcessed = true; // 이렇게 call by reference 가능!!
//	struct vector result = {
//		(*a).x + (*b).x,
//		a->y + b->y,
//		false,
//	};
//	return result; // 이렇게 구조체 리턴도 가능!!
//};