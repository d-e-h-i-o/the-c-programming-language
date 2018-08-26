#include <stdio.h>

main(){

	int output[1200];
	int c, i, j;

	for(i = 0; i < 1000 && (c = getchar()) != EOF; i++){
		if(c == '\t'){
			//printf("found one");
			output[i] = ' ';
			for(j = 0; j < 3; j++){
				i++;
				output[i] = ' ';
			}

		}
		else{
			//printf("found none");
			output[i] = c;
		}
	}
	output[i+1] = '\0';
	
	for(int k; k < i; k++){
		printf("%c", output[k]);
	}
	printf("\n");

	printf("done");
}