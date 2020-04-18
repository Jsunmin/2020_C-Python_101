#include <stdio.h>

// 기호 상수 선언 ( == const PI = 3.141592; )
#define PI 3.141592
//int main(void) {
//	// 변수 선언
//	int a;
//	// 값 할당(대입)
//	a = 10;
//	printf("a의 값은 %d\n", a);
//	// 실습) 두개의 정수를 이용해 사칙연산
//	int b = 10; int c = 20;
//	printf("%d * %d = %d\n", b, c, b*c);
//
//	// 데이터 형
//	char d = 'a';
//	printf("문자는 %c\n", d); // 일반적인 문자
//	printf("문자는 %d\n", d); // ASCII 코드로 반환
//	
//	// 실수형 
//	float e = 3.14159212141; // 4byte 보통 6자리까지
//	double f = 3.14159212141; // 8byte 6자리 이상 표현 가능 ( 정밀도 증가 )
//	printf("e: %.15f \n", e); // 정밀도가 낮아 값 이상
//	printf("f: %.15f \n", f); // 값 정확
//
//	// 실습) 원 면적 구하기
//	printf("반지름을 입력하시오.");
//	double radius;
//	scanf_s("%lf", &radius); // double을 받아서, radius 라는 변수에 대입한다!
//	const float pi = 3.141592;
//	printf("%f, %f", radius * radius * PI, radius * radius * pi);
//
//	// 두 수 입력 받기
//	int num1, num2; // 미리 선언
//	printf("두 수는?");
//	scanf_s("%d %d", &num1, &num2); // 선언한 변수의 주소값을 맵핑 
//	printf("%d, %d\n", num1, num2);
//	printf("num1, num2 주소: %d %d\n", &num1, &num2); //  인자의 메모리 위치를 받아올 때,
//	printf("num1, num2 주소: %p %p\n", &num1, &num2); //  인자의 메모리 위치를 받아올 때,
//	printf("%d", &e);
//	return 0;
//}