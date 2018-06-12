#include <stdio.h>
#include <string.h>

#define NUM_LETTERS 25

void main() {
    // We have 26 letters in the English Alphabet
    int histogram[NUM_LETTERS];
    int index, character, word_size, hash_count = 0;

    // Start using our new formatting approach, much nicer!
    //
    // Oh yeah and zero fill our array.
    for ( index = 0; index <= NUM_LETTERS; index++ )
        histogram[index] = 0;

    while( ( character = getchar() ) != EOF ) {
	// Straight forward but gross
        if ( character == 'a' ) {
	    histogram[0]++;
	} else if ( character == 'b' ) {
	    histogram[1]++;
	} else if ( character == 'c' ) {
	    histogram[2]++;
	} else if ( character == 'd' ) {
	    histogram[3]++;
	} else if ( character == 'e' ) {
	    histogram[4]++;
	} else if ( character == 'f' ) {
	    histogram[5]++;
	} else if ( character == 'g' ) {
	    histogram[6]++;
	} else if ( character == 'h' ) {
	    histogram[7]++;
	} else if ( character == 'i' ) {
	    histogram[8]++;
	} else if ( character == 'j' ) {
	    histogram[9]++;
	} else if ( character == 'k' ) {
	    histogram[10]++;
	} else if ( character == 'l' ) {
	    histogram[11]++;
	} else if ( character == 'm' ) {
	    histogram[12]++;
	} else if ( character == 'n' ) {
	    histogram[13]++;
	} else if ( character == 'o' ) {
	    histogram[14]++;
	} else if ( character == 'p' ) {
	    histogram[15]++;
	} else if ( character == 'q' ) {
	    histogram[16]++;
	} else if ( character == 'r' ) {
	    histogram[17]++;
	} else if ( character == 's' ) {
	    histogram[18]++;
	} else if ( character == 't' ) {
	    histogram[19]++;
	} else if ( character == 'u' ) {
	    histogram[20]++;
	} else if ( character == 'v' ) {
	    histogram[21]++;
	} else if ( character == 'w' ) {
	    histogram[22]++;
	} else if ( character == 'x' ) {
	    histogram[23]++;
	} else if ( character == 'y' ) {
	    histogram[24]++;
	} else if ( character == 'z' ) {
	    histogram[25]++;
	}
    }

// TODO: Need to fix int and 'string' comparisons to get things to compile
    for( index = 0; index <= NUM_LETTERS; index++ ) {
	if ( index == '0' ) {
	    printf("a: ");
	} else if ( index == '1' ) {
	    printf("b: ");
	} else if ( index == '2' ) {
	    printf("c: ");
	} else if ( index == '3' ) {
	    printf("d: ");
	} else if ( index == '4' ) {
	    printf("e: ");
	} else if ( index == '5' ) {
	    printf("f: ");
	} else if ( index == '6' ) {
	    printf("g: ");
	} else if ( index == '7' ) {
	    printf("h: ");
	} else if ( index == '8' ) {
	    printf("i: ");
	} else if ( index == '9' ) {
	    printf("j: ");
	} else if ( index == "10" ) {
	    printf("k: ");
	} else if ( index == '11' ) {
	    printf("l: ");
	} else if ( index == '12' ) {
	    printf("m: ");
	} else if ( index == '13' ) {
	    printf("n: ");
	} else if ( index == '14' ) {
	    printf("o: ");
	} else if ( index == '15' ) {
	    printf("p: ");
	} else if ( index == '16' ) {
	    printf("q: ");
	} else if ( index == '17' ) {
	    printf("r: ");
	} else if ( index == '18' ) {
	    printf("s: ");
	} else if ( index == '19' ) {
	    printf("t: ");
	} else if ( index == '20' ) {
	    printf("u: ");
	} else if ( index == '21' ) {
	    printf("v: ");
	} else if ( index == '22' ) {
	    printf("w: ");
	} else if ( index == '23' ) {
	    printf("x: ");
	} else if ( index == '24' ) {
	    printf("y: ");
	} else if ( index == '25' ) {
	    printf("z: ");
        }

	for( hash_count = 0; hash_count < histogram[index]; hash_count++)
	    putchar('#');

	printf("\n");
	hash_count = 0;

    }

}
