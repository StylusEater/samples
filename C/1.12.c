#include <stdio.h>

void main() {
    int character, INSIDE_WORD, OUTSIDE_WORD;

    while( (character = getchar() ) != EOF ) {
	INSIDE_WORD = 1;
	OUTSIDE_WORD = 0;

	if ( character == ' ' )
	{
	    OUTSIDE_WORD = 1;
	    INSIDE_WORD = 0;
	    putchar('\n');
        }
	if (character == '\t' || character == '\b' || character == '\n' )
	{
	    // do nothing 
	} else {
	    INSIDE_WORD = 1;
	    putchar(character);
	}
    }	    
}
