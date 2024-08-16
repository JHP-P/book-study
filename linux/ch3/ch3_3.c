/* 상수를 이용해 파일 종류 검색하기 */
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(){
	struct stat statbuf;
	int kind;

	stat("linux.txt", &statbuf);

	printf("Mode = %o\n", (unsigned int)statbuf.st_mode);
	kind = statbuf.st_mode & S_IFMT;
	printf("Kind = %o\n", kind);

	switch(kind){
		case 5_IFLNK:
			printf("linux.txt: Symbolic Link\n");
			break;
		case 5_IFDIR:
			printf("linux.txt: Directory\n");
			break;
		case 5_IFREG:
			printf("linux.txt: Regular File\n");
			break;
	}
}
