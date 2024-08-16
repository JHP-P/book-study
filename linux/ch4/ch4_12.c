/* 문자열 기반 입출력 함수 사용하기 */
#include <stdlib.h>
#include <stdio.h>

int main(){
	FILE *rfp, *wfp;
	char buf[BUFSIZ];

	if ((rfp = fopen("linux.txt", "r")) == NULL){
		perror("fopen: linux.txt");
		exit(1);
	}

	if ((wfp = fopen("linux.out", "a")) == NULL){
		perror("fopen: linux.out");
		exit(1);
	}

	while (fgets(buf, BUFSIZ, rfp) != NULL){
		fputs(buf, wfp);
	}

	fclose(rfp);
	fclose(wfp);
}
