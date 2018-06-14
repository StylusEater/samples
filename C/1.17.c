#include <stdio.h>
#include <signal.h>
#include <string.h>

/* print all input lines greater than 80 characters */

/* Assume input lines are not longer than 1000 characters. */
#define LINE_SIZE 1000 

/* zero empty our character array */
void reset_line_array(char *line) {
    memset(line,0,LINE_SIZE * sizeof(*line));
}

/* print the contents of the line character array */
void print_line_array(char *line) {
    int i = 0;
    for( i; i < LINE_SIZE; i++)
        putchar( line[i] );
    reset_line_array(line);
}

void main()
{

    int line_length = 0;
    int c  = 0;
    char line[LINE_SIZE];

    /* do this so we don't get random garbage in our array */
    reset_line_array(line);

    while( (c = getchar()) != EOF ) {
        line_length = line_length + 1;
	if ( c == '\n' && line_length >= 80 ) {
            print_line_array(line); 
	    line_length = 0;
	} else if ( c == '\n' && line_length < 80 ) {
	    reset_line_array(line);
	    line_length = 0;
	    printf("Not printing line as it's shorter than 80 characters.\n");
	} else {
	    line[line_length] = c;
	}
    }
}
