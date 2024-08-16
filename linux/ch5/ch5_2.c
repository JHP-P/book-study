/* sysconf() 함수로 시스템 자원 정보 검색하기 */
#include <unistd.h>
#include <stdio.h>

int main() {
	printf("Arg Max : %ld\n", sysconf(_SC_ARG_MAX));
	printf("Clock Tick : %ld\n", sysconf(_SC_CLK_TCK));
	printf("Max Open File : %ld\n", sysconf(_SC_OPEN_MAX));
	printf("Max Login Name Length : %ld\n", sysconf(_SC_LOGIN_NAME_MAX));
}
