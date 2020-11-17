/*
* 작성자: 김승주
* 솔루션: Chapter 02
* 프로젝트: project 2-2
* 파일: printf.c
* 내용: 함수 printf()를 이용한 문자열 출력
*/

#include <stdio.h>

int main(void)
{
	//함수printf()는 지정된 문자열 출력
	//문자열 내부 특수문자 '\n'을 넣어 다음 줄로 이동하여 출력

	printf("printf()는 다양한 종류의");
	printf("정보를 출력하는 함수\n");
	printf("새로운 줄에 이동하려면 new line의 특수문자이용\n");
	puts("자바");   puts("C#");
	printf("자바");  printf("C#");
	printf("자바\n");   printf("C#\n");
	return 0;

}