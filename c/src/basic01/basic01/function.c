#include <stdio.h>
#include "accumulate.h"

// 전역변수: 모든 함수들이 접근 가능 & 자동 초기화가 됨
// heap 영역에 생성 함수가 호출되는 stack이랑 무관 -> 휘발 X
// 프로그램 시작시 메모리 할당 & 프로그램 종료시 소멸
int globalSum = 0;

// 리턴값이 있는 함수
int add(int a, int b) {
	return a + b;
}
// 리턴값이 없는 함수
void addVoid(int a, int b) {
	printf("합은 %d\n", a + b);
}

int power(int x, int y);
int power(int x, int y, int z);

double divide(unsigned int a, unsigned int b) {
	if (b == 0) {
		return 0;
	}
	return a / (double)b;
}

// 진입점 함수 (void : 없다)
//int main(void) {
//	// 리턴 제공
//	int r = add(100, 25);
//	printf("%d\n", r);
//	// 리턴 x
//	addVoid(100, 25);
//	// 나눗셈
//	double r1 = divide(100, 20);
//	// 2째 자리까지 반올림
//	printf("%0.2lf\n", r1);
//	// static 활용한 누적함수
//	accumulate(2);
//	accumulate(3);
//	accumulate(4);
//	accumulate(5);
//
//	// 실습
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
// 누적 함수
void accumulate(unsigned int a) {
	printf("---------------------------------\n");
	int sum = 0; // 지역변수 ( 함수 호출이 끝나면, 휘발됨 )
	// stack 영역에 생성 ( 함수 하나하나 스택에 저장 ) ~ 함수( 블록 { }) 이 끝나면 자동 소멸
	sum += a;
	printf("지역변수: %d\n", sum);
	globalSum += a; // 전역변수를 쓰면, 함수 호출 이후에도 값이 살아있다!
	printf("전역변수: %d\n", globalSum);

	static int staticSum = 0; // 정적변수 ( 지역변수처럼 함수 내에서만 활용 가능 )
	// 호출시 처음 한번만 초기화! ( 이미 존재하면 실행하지 않음)
	// 그러나 전역변수처럼 heap 영역에 생성
	// -> 전역변수를 많이 쓰면, 복잡도 상승.. --> 함수 호출이 끝나도 유지 & 함수 내 접근 변수 필요시 정적 변수를 활용하자!
	staticSum += a;
	printf("정적변수: %d\n", staticSum);
	
	printf("---------------------------------\n");
}


// static변수: 전역변수나 지역변수 앞에 붙일 수 있고.
// 선언 함수 내에서만 접근 가능 (지역변수 처럼)
// 한번만 초기화하고 프로그램 종료시 소멸 (전역변수 처럼)
// cf 전역변수에 static을 붙이면, 해당 파일 내에서만 활용할 수 있도록 처리

// 전역변수 static변수는 컴파일러가 선언시, 자동 초기화 해줌 0 or null? 그러나 지역변수는 초기화 없다.