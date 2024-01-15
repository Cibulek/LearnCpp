#include <stdio.h>

int main()  {
    int letter_middle;
    int letter_last;
    int num_division;
    char sym_first;
    char sym_middle;
    char sym_last;

    letter_middle = 1;
    letter_middle ++;
    letter_middle *= 2;

    letter_last = 7;
    letter_last += 1;
    letter_last = letter_last * 50;
    letter_last /= 2;

    num_division = 40;
    num_division = num_division / 2;

    letter_last -= num_division;

    sym_first = 'S';
    sym_middle = 'P';
    sym_last = 'S';

    printf("%c", sym_first);
    printf("%c", sym_middle);
    printf("%d", letter_middle);
    printf("%c", sym_last);
    printf("%d", letter_last);

// SPASIBO

    return 0;
}
