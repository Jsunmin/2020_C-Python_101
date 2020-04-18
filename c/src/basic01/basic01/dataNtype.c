#include <stdio.h>

//int main(void) {
//	// 연산자 : + - * / %
//	int a = 10; double b = 3; // 만약 b 또한 정수이면, 나누기 값은 정수(몫) & 이를 %f에 할당함으로써 0이 된다.
//	printf("나누기 : %f\n", a / b);
//	int c = 10, d = 3; 
//	printf("c / d : %f\n", (double)c / d); // 정수와 정수의 나누기지만, 강제 형변환을 통해 결과값이 실수에 %f 할당되도록 함
//	printf("c / d 몫 : %d\n", c / d); // 나누기 값은 정수(몫)
//	printf("c %% d 나머지 : %d\n", c % d); // 나누기 값은 정수(나머지)
//
//	// 각각의 자료형 byte 표시
//	printf("%d \n", sizeof(short));
//	printf("%d \n", sizeof(int));
//	printf("%d \n", sizeof(long));
//	printf("%d \n", sizeof(long long));
//	printf("%d \n", sizeof(char));
//
//	// 삼항 연산자
//	int e = 20, f = 10;
//	// 두 수 중에서 큰 수 출력
//	int g = (e > f) ? e : f;
//	printf("큰 값은: %d\n", e);
//	// 참이면 수행 거짓이면 하지 않음!
//	int h = 10;
//	(h > 0) ? printf("양수\n") : printf("음수\n");
//	// 짝/홀수 판별기
//	int i = 7;
//	(7 % 2 == 1) ? printf("홀수\n") : printf("짝수\n");
//
//	// 정밀도 문제
//	float x = 1.234567890123456789;
//	double y = 1.234567890123456789;
//	long double z = 1.234567890123456789;
//	printf("float의 크기 = %d, x = %.25f \n", sizeof(float), x);
//	printf("double의 크기 = %d, y = %.25f \n", sizeof(double), y);
//	printf("long double의 크기 = %d, z = %.25f \n", sizeof(long double), z);
//
//	// 문자 입출력
//	//char initial;
//	//char grade;
//	//printf("영어 이름 첫 글자는 무엇인가요: ");
//	//scanf_s("%c", &initial);
//	//printf("프로그래밍 과목 학점은요? (A-F): ");
//	//scanf_s(" %c", &grade); // 공백을 둠으로써 엔터키를 구분해서 input을 가져온다! ( 공백 없으면, enter가 바로 들어감;; )
//	//// keyboard -> c 오는 과정 중에, inputsteam 생성. 보내기 위한 enter 또한 스트링으로 들어감. -> 이렇게 들어간 enter값 소멸을 위해 " %c" or getchar();
//	//printf("\n");
//	//printf("%c군의 프로그래밍 과목 성적은 %c입니다. \n", initial, grade);
//	char initial2;
//	char grade2;
//	printf("re 영어 이름 첫 글자는 무엇인가요: ");
//	scanf_s("%c", &initial2);
//	char aw = getchar(); // input stream 에서 enter를 뺀다!
//	printf("%c, 체크체크\n", aw);
//	printf("re 프로그래밍 과목 학점은요? (A-F): ");
//	scanf_s("%c", &grade2);
//	printf("\n");
//	printf("re %c군의 프로그래밍 과목 성적은 %c입니다. \n", initial2, grade2);
//
//	// 온도 연산자
//	double f_temp, c_temp;
//	printf("화씨온도를 입력하시오: ");
//	scanf_s("%lf", &f_temp);
//	c_temp = 5 / 9.0 * (f_temp - 32); // c_temp = 5 / 9 * (f_temp - 32); = 0 ~ 5 / 9 정수형 결과는 0이기 때문이다.
//	printf("섭씨온도는 %f입니다. \n", c_temp);
//
//	//교재108page 예제
//	int year, month, day;
//	printf("오늘의 날짜를 입력(YYYY.MM.DD):");
//	//.을 구분자로 해서 입력 ( ' ' , 다 됨! )
//	scanf_s("%dw%dw%d", &year, &month, &day); // int가 바로 안들어가면 튕겨낸다!
//	printf("년 : %d \n", year);
//	printf("월 : %d \n", month);
//	printf("일 : %d \n", day);
//	return 0;
//}