#include <stdio.h>
#include <signal.h>
#include <string.h>

/* write a program to remove trailing blanks and tabs from each line of input
   and to delete entirely blank lines */

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
	if ( c == ' ' || c == '\t' ) {
	
        } else if ( c == '\n' ) {
            print_line_array(line); 
	    reset_line_array(line);
	    line_length = 0;
	} else {
	    line_length = line_length + 1;
	    line[line_length] = c;
	}
    }
}
