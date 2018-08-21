#include <stdio.h>



/* copy input to output, the print value of EOF */

main(){
	int c; 

	c = getchar();
	while ((c = getchar())!= EOF){
		putchar(c);
	}

}
