#include <stdio.h>

void main()
{
    int in;

    printf("Enter a text string then press CTRL+D or CTRL+Z when finished: \n");

    while( (in = getchar()) != EOF) {
        if ( in == '\t' ) {
	    putchar('\\');
	    putchar('t');
	} else if ( in == '\b' ) {
	    putchar('\\');
	    putchar('b');
	} else if ( in == '\\' ) {
	    putchar('\\');
	    putchar('\\');
	} else {
	    putchar(in);
	}
    }

}
