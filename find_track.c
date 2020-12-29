#include <stdio.h>
#include <string.h>

void find_track(char search_term[]){
	
	char tracks[][80] = {
		"I left my heart in Harvard Med School",
		"Newark, Newark - a wonderful town",
		"Dancing with a Dork",
		"From here to maternity",
		"The girl from Iwo Jima"
	};

	for (int i=0; i < 5; i++){
		printf("%s\n", search_term);
		printf("%p\n", strstr(tracks[i], "Dork"));
		if (strstr(tracks[i], search_term)){
			printf("Track %i: '%s'\n", i, tracks[i]);
		}
	}

}

int main(){

	char search_term[80];
	
	while (1){
		printf("Enter search term: ");
		fgets(search_term, 80, stdin);
		printf("Search term is: %s", search_term);
		find_track(search_term);
	}
	return 0;

}
