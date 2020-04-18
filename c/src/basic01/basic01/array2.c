//#include <stdio.h>
//
//#define SIZE1 2 // alias 개념! 변수처럼 선언할당이 아니라, 시작부터 S=3으로 규정!
//#define SIZE2 5
//int main(void) {
//	printf("2차 배열\n");
//	// 다차원 배열 --> int a[2][3][4].. N차원 배열
//	// 배열에 배열을 만듦. --> int a[2][3];
//	// const int로 사이즈 할당은 불가능하다!!!  ( 자세한 것은 밑에 설명 )
//	int a[SIZE1][SIZE2] = { {1,2,3,4,5}, {6,7,8,9,10} };
//	// a는 현재 (0,0) - 1이 들어간 주소를 갖고 있음. (메모리주소는 1,2,3,4 ... 10) 형식으로 4씩(int형) 증가할 것임
//	for (int i = 0; i < SIZE1; i++) {
//		for (int j = 0; j < SIZE2; j++) {
//			printf("%d\n", a[i][j]);
//		}
//	}
//	// 직접 사이즈 계산해서 해보기
//	const int size1 = sizeof(a) / sizeof(a[0]);
//	const int size2 = sizeof(a) / size1 / sizeof(a[0][0]);
//	printf("연산 재료: %d, %d, %d\nsize1: %d, size2: %d\n", sizeof(a), sizeof(a[0]), sizeof(a[0][0]), size1, size2); // 데이터가 바뀌더라도 불변!
//	for (int i = 0; i < size1; i++) {
//		for (int j = 0; j < size2; j++) {
//			printf("%d\n", a[i][j]);
//		}
//	}
//	// 문자열
//	// 문자열 출력
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
//	// 문자열 길이
//	int stringLength = 0;
//	while (1) {
//		if (string[stringLength] == '\0') {
//			break;
//		}
//		stringLength += 1;
//	}
//	printf("stringLength: %d\n", stringLength);
//	// 실습
//	/*int number = 0;
//	char[] subjects[3] = { "국어", "영어", "수학" };
//	int subjectArrSize = sizeof(subjects) / sizeof
//	while (1) {
//		for 
//		printf("%d번 학생의 ")
//	}*/
//	return 0;
//}

// C는 정적할당
// 정적할당: 컴파일시에 사이즈가 정해져있어야 함. & 동적할당: 런타임시에 사이즈 결정
//int s; // 컴파일시 작동 ~ 선언 시점
//s = 3; // 런타임시 작동 ~ 할당 시점
//int a[s] = { ~}; // 정적할당인 C는 컴파일시에 사이즈가 정해져있어야 하므로, s가 null일 때 array 생성 --> 컴파일 에러!
//const int size1 = 2;
//const int size2 = 5;
//int a[size3][size2] = { {1,2,3,4,5}, {6,7,8,9,10} };

// #define은 변수가 아니라, alias - 대체명 정도! 선언과 할당이 일어나지 않음!
// 동적할당의 경우, #define const int 둘 다 범용해서 쓸 수 있지만, 정적할당인 C인 경우, #define을 통해서밖에 선언 못한다!