#include <stdio.h>

//int main() {
//	// �迭 : ���� Ÿ���� �ټ��� �����͸� �ٷ�µ� Ȱ��Ǵ� ������ ����
//	int a[3]; // ������ ����(4byte) ���� 3���� �ִ� �迭 ����
//	a[0] = 10;
//	a[1] = 20;
//	a[2] = 30;
//	printf("%d\n", a[0]);
//	printf("%d\n", a[1]);
//	printf("%d\n", a[2]);
//	printf("%d\n", &a[0]);
//	printf("%d\n", &a[1]);
//	printf("%d\n", &a[2]);
//	printf("%d\n", a); // a�� �޸� �ּҸ� �����
//	// ��Ȯ���� a �迭�� �����ϴ� ù��° ������ �ּ�! ( == printf("%d\n", &a[0]); )
//	// a�� �ش� �ּҺ��� ������ 12byte���� Ȱ���Ѵ�.
//	printf("---------------------------------\n");
//	double b[3];
//	// ������ ���� (�޸� ũ�⸦ ����)
//	printf("double�� ������: %d\n", sizeof(double)); // 8
//	printf("b ������: %d\n", sizeof(b)); // 24
//	int size = sizeof(b) / sizeof(double); // 3
//	// ������ �迭 ũ��� ������, �̷������� �޸� ��ġ�� ���� �����غ���!
//	for (int i = 0; i < size; i++) {
//		printf("%d\n", &b[i]);
//		b[i] = i + 1.1;
//		printf("%d\n", &b[i]); // �޸� ������ ������ �Ƚ� �ȴ�. ( 3�� ��� ��� ���� )
//	}
//	for (int i = 0; i < 3; i++) {
//		printf("%f\n", b[i]);
//		printf("%d\n", &b[i]);
//	}
//	printf("%d\n", b); // double�� ��� 8byte�� �����ϰ� �ִ�.
//	printf("---------------------------------\n");
//	// �ε��� ��ġ�� �Ѿ�� ������, ������ ������ ���� �ʴ´�. �׷���, ������ ��ǻ�Ͱ� ���� �޸� �ּ� �ٱ����� �����ϴ� ������. ���� ���, ���α׷��� ���߱⵵ �Ѵ�. ( �ش� �޸� �ּ��� ���� ���󰡹Ƿν� )
//	
//	// �迭�� ���� & ���� - �ʱ�ȭ
//	//int c[5] = { 10, 20, 30, 40, 50 }; // 5 ũ��
//	//int c[5] = { 10, 20, 30 }; // 5 ũ�� [ 10, 20, 30, 0, 0 ]
//	int c[] = { 10, 20, 30, 40, 50 }; // 5 ũ�� ( �ʱ�ȭ�� ���� �ڵ� ���� )
//	for (int i = 0; i < 6; i++) {
//		printf("%d, %d\n, %d\n", c[i], &c[i], c);
//	}
//	// 245p ����
//	int scores[3];
//	int sizeOfScores = sizeof(scores) / sizeof(int);
//	printf("%d", sizeOfScores);
//	for (int i = 0; i < sizeOfScores; i++) {
//		printf("���� %d���� ������ ������?", i + 1);
//		scanf_s("%d", &scores[i]);
//	}
//	float sum = 0;
//	printf("array memory address: %d\n", &scores);
//	for (int i = 0; i < sizeOfScores; i++) {
//		sum += scores[i];
//		printf("element memory address1: %d\n", &scores[i]); // �迭�� �޸� �������� ��� 1
//		printf("element memory address2: %d\n", scores + i); // �迭�� �޸� �������� ��� 2 ( �迭�� ���� �ν� (int)�ؼ� i��ŭ �Ѿ --> 1��i = 4, 2��i = 8...
//	}
//	printf("Total array size: %d\n", sizeof(scores));
//	printf("��� ������ %f�Դϴ�.", sum / sizeOfScores);
//	return 0;
//}