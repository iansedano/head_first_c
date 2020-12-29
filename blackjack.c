#include <stdio.h>
#include <stdlib.h>

int main() {

	char card_name[3];
	int count = 0;

	while (card_name[0] != 'X'){
		puts("Enter card name: ");
		scanf("%2s", card_name);
		int val = 0;
		switch(card_name[0]){
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				return 0;
			default:
				val = atoi(card_name);
		}	
		
		if (val >= 3 && val <= 6){
			count ++;		
		} else if (val == 10){
			count --;
		} else {
			printf("Invalid Card Value, try again.\n");
		}

		printf("Count currently stands at %i\n", count);
	}

	return 0;
}
