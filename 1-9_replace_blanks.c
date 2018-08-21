#include <stdio.h>

/* copies input to output, replacing each string of one or more blanks by a single blank */

main(){

	int c;
	int last_char = 'a';

	while((c = getchar()) != EOF){
		if(c != " "){
			putchar(c);
		}
		if(c == " "){
			if(last_char != " "){
				putchar(c);
			}
		}
		last_char = c;
	}
}