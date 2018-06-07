#include <stdio.h>

void main()
{
    int c;
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;

    printf("Enter a text string then press CTRL+D or CTRL+Z when finished: \n");

    while( (c = getchar()) != EOF) {
        if ( c == ' ' ) {
            blanks++;
	} 

	if ( c == '\t' ) {
	    tabs++;
	}

	if ( c == '\n' ) {
	    newlines++;
	}

    }

    printf("BLANKS: %d, TABS: %d, NEWLINES: %d \n", blanks, tabs, newlines); 

}
