#include <stdio.h>

#define MAX_WORD 44

void main() {
    // Limit our lengths to 45 as that is 'technically' the longest word in 
    // any major English dictionary per the always 'truthy' Wikipedia... :-)
    int histogram[MAX_WORD];
    int index, character, word_size, hash_count = 0;

    // Start using our new formatting approach, much nicer!
    //
    // Oh yeah and zero fill our array.
    for ( index = 0; index <= MAX_WORD; index++ )
        histogram[index] = 0;

    while( ( character = getchar() ) != EOF ) {
	// If the character is a-z or A-Z we consider it part of a readable
	// word. Maybe this slightly flawed as numbers might be relevant as 
	// well as special characters like hypens and etc. but this is just a 
	// simple program at the moment.
        if ( character != ' ' ) {
	    word_size++;
	} else if ( character == ' ' ) {
	    // If the character is not one of our 'readable' ones then reset 
            // state!
	    histogram[word_size]++;
	    word_size = 0;
	}
    }

    for( index = 0; index <= MAX_WORD; index++ ) {
	printf("%d: ", index);
	for( hash_count = 0; hash_count < histogram[index]; hash_count++)
	    putchar('#');
	printf("\n");
	hash_count = 0;
    }

}
