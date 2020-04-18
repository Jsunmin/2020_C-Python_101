/*
main 함수에 인자 전달
프로그램 실행시 인자 전달

int main(int argc, char* argv[]) { // 1인자가 인자 수 & 2인자가 인자들의 배열 ( 해당 인자들은 포인터로 들어오게 됨 )
  // ex basic01 i like c -> argc: 4 / argv (length 4) [ basic01의 포인터, i의 포인터, like의 포인터, c의 포인터 ] = ex [ 100, 108, .. ]
  
  // argument 값 출력
  for(int i = 0; i < argc; i++) {
    printf("%s", argv[i]); // basic01 i like c
  }
  
  return 0;
}
*/

/*
전처리기: 본격적인 컴파일에 앞서, 소스 파일의 지시자( #~~ )를 처리하는 일종의 컴파일러
 #define: 매크로 정의
 #include: 파일 포함 - <stdio.h>: 컴파일러가 제공하는 라이브러리 헤더 파일, "mylib.h": 사용자가 만든 헤더 파일
 #define: 매크로 정의 - 기호 상수에 상수 리터럴 저장 ( #define PI 3.14 ... r * PI ... )
	- 간단한 함수도 저장 가능 
	  ex1. #define SQUARE(x) ((x) * (x))
	  ex2. #define SWAP = ( (t) = (x), (x) = (y), (y) = (t) )
	 ~ 어떤 자료형에도 활용 가능!!
 #ifdef, endif ...
/*
 메모리 구분
 ROM - 읽기전용 메모리 공간 / 비휘발 공간
  - Text segment: 프로그램 코드와 초기 상수 (읽기 전용 데이터) 들이 들어 있는 공간.

 RAM - 읽기 쓰기 가능 메모리 공간 ~ heap, stack / 휘발 공간
  - Data segment: 프로그램 실행시 필요로 하는 전역, 정적 변수
  - stack memory (임시 메모리): main 블록부터 차례대로 쌓이는 공간 ( 함수 선형 흐름에 따라 쌓이고 처리되는 메모리 공간 )
  - heap memory (사용자 메모리): 동적으로 영역 할당하는 저장공간 (사용자가 직접 메모리 공간 만들 때, malloc)
*/


// in 수업
//코드 영역 - 실행할 프로그램 코드 저장
//데이터 영역 - 전역변수, static변수..
//힙 영역 - 프로그래머가 관리하는 메모리
//스택 영역 - 지역변수, 매개변수

#include <stdlib.h> // malloc 함수 포함
int main() {
	// 메모리 동적 할당: 프로그램 실행 도중 동적으로 메모리 할당 받는 것 ( 필요시 사용 & 끝나면 반환 )

	// c는 기본적으로 정적 할당
	int a = 3;
    // int arr[a]; // - c는 정적할당으로 컴파일 하는데. 그 시점에 a는 null임 -> int arr[3] : 정적할당!
	
	// 프로그램 실행 시점에 사용 메모리 크기 결정하기 (동적 할당)
	// malloc(): 힙 영역에 메모리 공간을 할당하는 함수 ( 생성된 동적 메모리 주소를 반환함 )
	void* p1 = malloc(4); // 4byte 할당 & 형은 아직 모르니 void
	void* p2 = malloc(8); // 8byte 할당 & 형은 아직 모르니 void
	// 형을 모르면, *p로 데이터 가져올 수도 없음;; 어디까지 긁어올지 모르잖아..
	//-> 형을 같이 선언해줘야 함!

	// int* 형으로 메모리 생성
	// heap에 4byte 가져오는데, 강제 형변환으로 int 타입화!
	int* pInt = (int*)malloc(sizeof(int)); // p는 포인터주소인데, 그 안에 데이터는 int형
	double* pDoub = (double*)malloc(sizeof(double)); // double형
	*pInt = 10;
	*pDoub = 3.14;  // 동적 메모리 사용!
	printf("저장된 값1: %d, %.2f\n", *pInt, *pDoub);
	free(pInt); 
	// printf("저장된 값: %d\n", *pInt); ~ 반납 후, 동적 메모리 활용 불가!
	free(pDoub);
	// 정수 2개 저장
	int* p2Int = (int*)malloc( sizeof(int) * 2 );
	*p2Int = 11;
	*(p2Int+1) = 12;
	printf("size: %d // 저장된 값2: %d, %d\n", sizeof(p2Int), *p2Int, *(p2Int +1));

	// 정수 3개 저장
	int c = 3;
	int* userMem = (int*)malloc(c * sizeof(int)); // 12byte 할당
	*userMem = 20;
	*(userMem + 1) = 30;
	*(userMem + 2) = 40;
	printf("저장된 값3: %d, %d, %d\n", *userMem, *(userMem + 1), *(userMem + 2)); // 이렇게
	printf("저장된 값3: %d, %d, %d\n", userMem[0], userMem[1], userMem[2]); // 또는 이렇게 값 출력
	free(p2Int);
	free(userMem); // 동적 메모리 반납!
	// 동적 메모리 반납이 안되어서 사용가능한 메모리가 점점 줄어드는 현상: 메모리 누수 (memory leak)\

	// 동적 메모리를 통한 배열 사이즈 결정
	int* arr = (int*)malloc(sizeof(int) * 10); // 입력받은 (10) 수만 큼 배열 사이즈 결정
	// 정확히는, 입력받은 수 만큼 메모리 공간 할당 - 이를 배열처럼 활용!

	// realloc() : 기존에 존재하는 동적메모리의 메모리 사이즈를 변경해주는 함수
	return 0;
}
