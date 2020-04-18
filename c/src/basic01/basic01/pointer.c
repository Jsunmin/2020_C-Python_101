// 포인터는 메모리의 주소 값을 가리키는 것
// 포인터를 통해 메모리 접근 가능

// 포인터를 활용한 Call By Reference
void callByRef(int *pa, int *pb) { // 인자는 포인터값!
	*pa += 1;
	*pb += 1;
}

//void main() {
//	int num = 10;
//	char charec = 'a';
//	double doub = 3.14;
//	// 포인터 변수 : 메모리의 주소 값을 저장하고 있는 변수
//	// 주소를 저장하는 포인터변수는 4byte의 크기를 가짐.
//	/*
//	** 앞에 자료형을 붙여야, 포인터가 메모리 주소에 접근해서 얼마만큼의 주소까지 읽어와야하는건지 알 수 있음!
//	** -> 저장된 건 float이지만, int *p로 접근하면, int 메모리만큼 잘라서 읽어옴!
//	*/ 
//	int *pnum = &num; // 자료형 *변수명 ~ & : 주소연산자
//	char *pchar = &charec; 
//	double *pdoub = &doub;
//	// 각 데이터의 포인터
//	printf("int %d: %d, %p // %d, %p\n", num, pnum, num, &num, &num); // %p는 주어진 값을 16진수로 나타낼 뿐임. -> 실제 쓰이는 목표는 메모리 주소를 16진수로 표현하는데 쓰임!
//	printf("char %c: %d, %p\n", charec, pchar, charec);
//	printf("double %.2lf: %d, %p\n", doub, pdoub, doub);
//
//	// 포인터 변수(주소)를 통해, 내장된 데이터를 도출
//	printf("int %d: %d\n", num, *pnum); // *포인터 변수 ~ * : 간접 참조 연산자
//	printf("char %c: %c\n", charec, *pchar);
//	printf("double %.2lf: %lf\n", doub, *pdoub);
//	*pnum = 20; // *포인터 변수를 활용해, 해당 포인터에 위치한 데이터를 바꿈
//	*pchar = 'b';
//	*pdoub = 6.28;
//	printf("int %d: %d\n", num, *pnum);
//	printf("char %c: %c\n", charec, *pchar);
//	printf("double %.2lf: %lf\n", doub, *pdoub);
//
//	// 포인터변수의 주소 변경
//	int a = 10, b = 20;
//	int* p = &a;
//	printf("%d\n", *p);
//	p = &b; // 형이 같기 때문에, 문제없이 데이터를 가져온다!
//	printf("%d\n", *p);
//
//	// 실습
//	int q = 10, w = 20, e = 30, r = 100;
//	int *pq = &q, *pw = &w, *pe = &e, *pr = &r;
//	*pq += *pr;
//	*pw += *pr;
//	*pe += *pr;
//	printf("%d, %d, %d // %d, %d, %d\n", q, w, e, *pq, *pw, *pe);
//	// 배열로 처리하기
//	int qwe[3] = { 10, 20, 30 };
//	int *pqwe = qwe; // & 안붙여도 배열은 바로 메모리주소를 가짐! ( 배열의 0번째 메모리 주소를 갖겠지!! )
//	printf("%d %d %d %d\n", pqwe, pqwe++, pqwe--, *pqwe);
//	// ㄴ 이게 바로 포인터 연산1
//	for (int i = 0; i < sizeof(qwe) / sizeof(qwe[0]); i++) {
//		// 배열의 첫번째 인덱스 메모리 주소 , 메모리주소가 데이터형을 기본유닛으로 더해짐 (int - 4) & 해당 메모리주소에 있는 (배열 각 인덱스의) 데이터
//		printf("%d, %d\n", *(pqwe + i), pqwe + i);
//		// ㄴ 이게 바로 포인터 연산2
//	}
//
//	// 포인터의 이동
//	int arr[] = { 10, 20, 30 };
//	int* parr = arr;
//	for (int i = 0; i < 3; i++) {
//		printf("%d, %d\n", parr, *parr);
//		parr++;
//	}
//	
//	// 실습
//	double arr2[] = { 1.1, 2.1, 3.1 }; // 상수 ( 변경 불가 )
//	double *parr2 = arr2; // 배열 1번째 주소를 갖는 변수 ( 변경 가능 )
//	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
//		printf("%d, %.1f\n", parr, *parr2);
//		parr2++;
//	}
//
//	// 포인터 주소로 값을 바꾸는 걸 활용해 call by reference를 이뤄낼 수 있음!
//	printf("callByRef: %d, %d\n", a, b);
//	callByRef( &a, &b ); // 함수 인자로 메모리 주소를 보내주고! 함수 내에서는 메모리주소를 가지고, 아예 해당 주소의 데이터 값을 바꿔버림!
//	printf("callByRef: %d, %d\n", a, b);
//
//	// 문자열의 포인터
//	char arr3[] = "happy";
//	char *parr3 = arr3;
//	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
//		printf("%c", *(parr3 + i)); // 이러면 '\0'도 찍힘
//	}
//	printf(" == %s\n", arr3); // for 돌면서 '\0' 전까지 출력!
//	// 상수 메모리 주소를 갖는 arr3[]은 바로 변경 못하지만, 메모리 주소를 복사해온 변수 parr3은,
//	parr3 = "sad";
//	printf("parr3: %s\n", parr3); // 이렇게 arr 변경이 가능함!
//
//	// 포인터의 배열 - 주소 값이 저장 가능한 배열 ex) int * 포인터명[3] = { 주소1,주소2,주소3 };
//	// 정수형 포인터를 저장하는 예 
//	int num1 = 10, num2 = 20, num3 = 30;
//	int * pNumArr[3] = { &num1, &num2, &num3 };
//	// 문자열을 포인터를 저장하는 예 
//	char * pStrArr[3] = { "happy", "sad", "angry" };
//
//	// 문자열 배열1
//	char arr4[3][5] = {
//		"hong", // 각 원소 사이즈 5 이하의 문자 배열
//		"kim",
//		"park"
//	};
//	char(*parr4)[5] = arr4; // 포인터 단위 선언 -> parr4 = char[5] ( char 5개로 이루어진 데이터형 )를 데이터 형으로 갖는 포인터
//	for (int i = 0; i < sizeof(arr4) / sizeof(parr4); i++) {
//		printf("%s\n", *(parr4 + i));
//	}
//	// 문자열배열2
//	char *parr44[3] = { "hong", "kim", "park" }; // char 형 포인터 3개가 들어 있는 배열 (읽기 전용!)
//	for (int i = 0; i < 3; i++) {
//		printf("%s\n", *(parr44 + i));
//	}
//
//	// 실습
//	char colors[3][20];
//	// 입력 받기
//	for (int i = 0; i < 3; i++) {
//		printf("input your color ( %d / 3 ) : ", i + 1);
//		// colors의 각 배열 행에 string[]을 넣어줌!
//		//scanf_s("%s", colors[i]);
//		gets(colors[i]); // 각 문자열배열의 주소에 넣어줌
//	}
//	printf("Thanks! check your colors1 : ");
//	// 출력 하기 1
//	for (int i = 0; i < 3; i++) {
//		printf(" %s ", &colors[i]);
//		//puts(colors[i]);
//	}
//	// 출력 하기 2
//	printf("\nThanks! check your colors2 : ");
//	char(*pColor)[20] = colors;
//	for (int i = 0; i < 3; i++) {
//		//printf(" %s ", *(pColor + i)); // 포인터의 이동 ( char[20], 즉 1당 20byte씩 이동 )
//		//puts(colors[i]);
//		// 또는
//		puts(pColor++); // 출력하고, 포인터 한단계 이동
//	}
//}

/* 
** 포인터 주의 사항
 1, 포인터 초기화를 안전하게 하자! ( 바로 변수 메모리 주소 || NULL (0) )
  포인터를 초기화 시키지 않고, 바로 값을 넣으면 ( int *p; *p = 20; )
  포인터는 랜덤 메모리 주소를 가짐 -> 중요 데이터를 갈아끼워버릴 수 있음.. -> 매우 위험;;

 2, 포인터의 자료형은 데이터의 자료형과 일치시켜야 함!
  -> 해당 데이터를 잘라 가져오거나, 이웃 데이터를 포함해 긁어옴 || 이웃데이터에 수정/손상을 줄 수 있다!!

** 배열과 포인터의 관계
 a[0] == *a, a[1] == *(a+1) ... a[n] == *(a+n) 

** 함수 포인터
 함수가 시작되는 주소를 가리킴
 포인터로 함수를 호출하려면, 반환형 & 함수 포인터라는 표시 (*pf) & 매개변수, 이렇게 3개를 알려주어야 함
 ex) int (*pf) (int x, int y);

** 문자열 포인터
 char s[] = "HelloWorld"; ( 배열로 문자열 초기화해 저장 )
 char *ps = "HelloWorld"; ( 포인터를 정의하고 문자열의 주소로 포인터를 초기화 )
 -> 둘다 출력은 같음. 그러나,
  1, 전자는 문자열 변경 불가능. 후자의 경우, ps = "ByeWorld"; 가능!
  cf. 데이터 세그먼트 (변수를 위한 메모리) & 텍스트 세그먼트 ( 상수, 코드 등 불변하는 값을 위한 메모리 ~ 읽기 전용 )
   ~ 전자(s[], HelloWorld) & 후자(HelloWorld)는 텍스트 세그먼트에 포함되는 데이터 (변경 불가)
   ~ 후자(*ps)는 데이터 세그먼트에 포함되는 데이터 (변경 가능) --> ps가 다른 문자열을 참조할 수는 있지만, 해당 문자열 원소 수정은 불가능 ( HelloWorld는 텍스트 세그먼트 )

** 하나의 포인터 변수 (int* pnum)은 여러 주소를 필요에 따라 가리킬 수 있음
** 배열도 똑같이 포인터를 가리키지만, 상수임.. (못 바꿈) -> 포인터 변수를 하나 만들어서 다룸! int* parr = arr; ( 포인터 이동 및 연산 등이 가능! )
** 문자열의 포인터 char str[] "happy" ~ 상수형 포인터 // char* pstr = "happy" ~ 읽기 전용 메모리에 올린 포인터 변수

*/