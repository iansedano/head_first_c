#include <stdio.h>


void fortune_cookie(char msg[]){
	printf("Message reads: %s\n", msg);
	printf("Message occupies %li bytes in memory.\n", sizeof(*msg));
	printf("The message is stored at %p.\n", msg);
}

int main(){
	char quote[] = "Cookies make you fat";
	fortune_cookie(quote);
}
