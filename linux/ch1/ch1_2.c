/* 라이브러리 함수의 오류 처리하기 */
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

extern int errno;

int main(){
	FILE *fp;

	if((fp=fopen("test.txt", "r")) == NULL ){
		printf("errno=%d\n", errno);
		exit(1);
	}
	fclose(fp);
}
