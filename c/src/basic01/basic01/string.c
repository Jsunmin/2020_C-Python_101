#include <stdio.h>
#include <string.h>

void characterOutput() {
	// 문자 인풋 출력
	char input;
	printf("문자 하나 입력!\n");
	scanf_s("%c", &input);
	printf("문자1: %c\n", input);

	char enter = getchar();

	// 문자 전용 함수
	char input2 = getchar();
	putchar(input2);
}

void string101() {
	// 문자열 저장
	char s[] = "hello";
	printf("%s\n", s);
	char s1[6];
	int sizeOfS1 = sizeof(s1) / sizeof(char);
	//s1 = "hello"; ~ 불가: s1은 주소를 저장하고 있는 상수임
	for (int i = 0; i < sizeOfS1 - 1; i++) {
		//s1[i] = s[i];
		s1[i] = 'a';
		printf("%d, %c\n", i, s1[i]);
	}
	s1[sizeOfS1 - 1] = '\0'; // 문자열의 끝
	printf("%s\n", s1);

	//int s3[3] = { 1, 2, 3 };
	//s3[] = { 3, 4, 5 }; // 배열의 재선언 불가능!
	//printf("%s\n", s1);
}

void stringOutput() {
	// 사용자에게 문자열 입력받기
	char name[20]; // 19byte 까지 입력 가능
	scanf_s("%s", name, sizeof(name)); // 배열의 이름은 주소
	// 띄어쓰기 불가 ( scanf의 구분값으로 인식됨 )
	printf("이름은 %s\n", name);
	
	char enter = getchar();

	// 문자열 전용 함수
	char name1[20];
	gets(name1); // 공백 입력 가능 ( scanf는 공백 입력 불가능했다! )
	puts(name1);

	// 문자열 복사
	char source[] = "hello";
	char dest[20];
	int sourceSize = sizeof(source) / sizeof(source[0]);
	// d = s; ~ 이미 만들어진 문자열에 강제로 다른 메모리 할당 불가능! ( 포인터 활용해야 함! )
	// 복사 라이브러리 활용
	// params = ( 복사내용을 받을 대상, 복사해오는 대상 사이즈 + 1, 복사해오는 대상)
	strcpy_s(dest, sourceSize + 1, source); // source 사이즈 + '/0'
	printf("%s", dest);
}
void practice() {
	// call by reference ~ 실제 글자는 17자
	char s[20]; // 넉넉하게~
	gets(s);
	puts(s);
	for (int i = 0; i < 20; i++) {
		printf("%d, %c\n", i, s[i]); // 18째는 지금 '\0'을 가르키고 있다!
	}
	printf("str length: %d", strlen(s)); // 20 칸으로 잡았지만, gets가 자동 사이즈 조절까지 해주나 봄
}
//int main() {
//	characterOutput();
//	string101();
//	stringOutput();
//	practice();
//	return 0;
//}