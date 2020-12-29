#include <stdio.h>
#include <string.h>


void print_reversed(char *s){
	size_t len = strlen(s);

	char *t = s + len - 1;

	while (t >= s){
	
		printf("%c", *t);
		t = t - 1;
		
	}
	puts("");
}

int main(){

	while (1){
		char input[50]; 
		puts("Enter the string to be reversed:");
		fgets(input, sizeof input, stdin);
		input[strcspn(input, "\n")] = 0;
		puts("Here is your reversed string:");
		print_reversed(input);
	}

	return 0;
}
