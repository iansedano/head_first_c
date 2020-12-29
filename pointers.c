#include <stdio.h>

int main(){
	int x = 4;
	printf("x lives at %p\n", &x);

	int y = 100;
	int *ptr = &y;

	printf("y lives at %p\n", ptr);

	int val_at_y = *ptr;

	printf("Value of y is %i\n", val_at_y);
}
