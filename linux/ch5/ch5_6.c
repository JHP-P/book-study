/* getpwnam() 함수로 사용자 정보 검색하기 */
#include <sys/types.h>
#include <pwd.h>
#include <stdio.h>

int main() {
	struct passwd *pw;

	pw = getpwnam("user1");
	printf("UID : %d\n", (int)pw->pw_uid);
	printf("Home Directory : %s\n", pw->pw_dir);
}
