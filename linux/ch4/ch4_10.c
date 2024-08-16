/* remove() 함수로 파일 삭제하기 */
#include <stdlib.h>
#include <stdio.h>

int main(){
	int ret;

	ret = remove("tmp.bbb");
	if(ret == -1){
		perror("Remove tmp.bbb");
		exit(1);
	}

	printf("Remove tmp.bbb success!!!\n");
}
