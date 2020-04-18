#include <stdio.h>

//int main() {
//	// 배열 : 같은 타입의 다수의 데이터를 다루는데 활용되는 데이터 구조
//	int a[3]; // 정수가 들어가는(4byte) 공간 3개가 있는 배열 생성
//	a[0] = 10;
//	a[1] = 20;
//	a[2] = 30;
//	printf("%d\n", a[0]);
//	printf("%d\n", a[1]);
//	printf("%d\n", a[2]);
//	printf("%d\n", &a[0]);
//	printf("%d\n", &a[1]);
//	printf("%d\n", &a[2]);
//	printf("%d\n", a); // a의 메모리 주소를 출력함
//	// 정확히는 a 배열이 시작하는 첫번째 공간의 주소! ( == printf("%d\n", &a[0]); )
//	// a는 해당 주소부터 시작해 12byte까지 활용한다.
//	printf("---------------------------------\n");
//	double b[3];
//	// 사이즈 설정 (메모리 크기를 통한)
//	printf("double형 사이즈: %d\n", sizeof(double)); // 8
//	printf("b 사이즈: %d\n", sizeof(b)); // 24
//	int size = sizeof(b) / sizeof(double); // 3
//	// 보통은 배열 크기로 하지만, 이런식으로 메모리 위치에 대해 생각해보자!
//	for (int i = 0; i < size; i++) {
//		printf("%d\n", &b[i]);
//		b[i] = i + 1.1;
//		printf("%d\n", &b[i]); // 메모리 공간은 생성때 픽스 된다. ( 3번 출력 모두 같음 )
//	}
//	for (int i = 0; i < 3; i++) {
//		printf("%f\n", b[i]);
//		printf("%d\n", &b[i]);
//	}
//	printf("%d\n", b); // double의 경우 8byte씩 증가하고 있다.
//	printf("---------------------------------\n");
//	// 인덱스 위치를 넘어가는 설정은, 컴파일 에러가 나지 않는다. 그러나, 엄연히 컴퓨터가 정한 메모리 주소 바깥에다 설정하는 것으로. 심한 경우, 프로그램이 멈추기도 한다. ( 해당 메모리 주소의 값이 날라가므로써 )
//	
//	// 배열의 선언 & 정의 - 초기화
//	//int c[5] = { 10, 20, 30, 40, 50 }; // 5 크기
//	//int c[5] = { 10, 20, 30 }; // 5 크기 [ 10, 20, 30, 0, 0 ]
//	int c[] = { 10, 20, 30, 40, 50 }; // 5 크기 ( 초기화에 따른 자동 세팅 )
//	for (int i = 0; i < 6; i++) {
//		printf("%d, %d\n, %d\n", c[i], &c[i], c);
//	}
//	// 245p 문제
//	int scores[3];
//	int sizeOfScores = sizeof(scores) / sizeof(int);
//	printf("%d", sizeOfScores);
//	for (int i = 0; i < sizeOfScores; i++) {
//		printf("게임 %d에서 선수의 득점은?", i + 1);
//		scanf_s("%d", &scores[i]);
//	}
//	float sum = 0;
//	printf("array memory address: %d\n", &scores);
//	for (int i = 0; i < sizeOfScores; i++) {
//		sum += scores[i];
//		printf("element memory address1: %d\n", &scores[i]); // 배열의 메모리 가져오는 방법 1
//		printf("element memory address2: %d\n", scores + i); // 배열의 메모리 가져오는 방법 2 ( 배열의 형을 인식 (int)해서 i만큼 넘어감 --> 1번i = 4, 2번i = 8...
//	}
//	printf("Total array size: %d\n", sizeof(scores));
//	printf("평균 득점은 %f입니다.", sum / sizeOfScores);
//	return 0;
//}