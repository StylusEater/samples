#include <stdio.h>
#include <signal.h>
#include <string.h>

/* write a function reverse(s) that reverses the charcter string s. Use it to 
   write a program that reverses its input a line at a time. */

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
}

/* reverse a line of characters and return the result */
char* reverse(char *line) {
    int index = 0;
    int reversed_index = LINE_SIZE - 1;
    char reversed_line[LINE_SIZE];
    char* rl = reversed_line;
    for( index; index < LINE_SIZE - 1; index++) {
	if (index == LINE_SIZE - 1) {
	    reversed_line[index] = '0';
	} else if (index == LINE_SIZE - 2) {
	    reversed_line[index] = '\\';
	} else {
            reversed_line[index] = line[reversed_index];
        }
	if (index < LINE_SIZE) {
            index = index + 1;
	}
	if (reversed_index >= 0) {
            reversed_index = reversed_index - 1;	
        }
    } 

    return rl;
}

void main()
{
    int line_length = 0;
    int c  = 0;
    char line[LINE_SIZE];
    char* _rl;

    /* do this so we don't get random garbage in our array */
    reset_line_array(line);

    while( (c = getchar()) != EOF ) {
	if ( c == ' ' || c == '\t' ) {
            // Do nothing as we do not have a new line yet...
        } else if ( c == '\n' ) {
            _rl = reverse(line);
            print_line_array(_rl);	    
            reset_line_array(_rl);
	    reset_line_array(line);
	    line_length = 0;
	} else {
	    line_length = line_length + 1;
	    line[line_length] = c;
	}
    }
}
