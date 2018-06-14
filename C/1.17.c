#include <stdio.h>
#include <signal.h>

/* print all input lines greater than 80 characters */

/* Assume input lines are not longer than 1000 characters. */
#define LINE_SIZE 1000 

void reset_line_array(char *line) {
    int i = 0;
    for( i; i < LINE_SIZE; i++)
        line[i] = ' ';
        if ( i == LINE_SIZE - 1 )
	    line[LINE_SIZE - 1] = '\0';
}

void print_line_array(char *line) {
    int i = 0;
    printf("\n");
    putchar('a');
    for( i; i < LINE_SIZE; i++)
        putchar( line[i] );
    putchar('b');
    reset_line_array(line);
}

void main()
{

    int line_length,c  = 0;
    char line[LINE_SIZE];

    while( (c == getchar()) != EOF ) {
        line_length = line_length + 1;
	if ( c == '\n' ) {
            print_line_array(line); 
	    line_length = 0;
	} else {
	    line[line_length] = c;
	}
    }
}
