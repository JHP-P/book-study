/* 디렉터리 생성하기 */
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	if(mkdir("han", 0755) == -1) {
		perror("han");
		exit(1);
	}
}

