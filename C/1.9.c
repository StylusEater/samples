#include <stdio.h>

void main()
{
    int in;
    int space = 0;

    printf("Enter a text string then press CTRL+D or CTRL+Z when finished: \n");

    while( (in = getchar()) != EOF) {
        if ( in == ' ' ) {
            space = 1; 
	} else {
	    if ( space == 1 ) {
		putchar(' ');
                space = 0;
	    }
	    putchar(in);
	}
    }

}
