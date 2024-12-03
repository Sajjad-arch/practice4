#include <stdio.h>
#include <limits.h>


int main(void)


{

    int anInteger;
    float aFloat;
    char aCharacter;
    double aDouble;


    printf("Size of integer : %d bytes\n", sizeof(anInteger));
    printf("Size of Float : %d bytes\n", sizeof(aFloat));
    printf("Size of Character : %d bytes\n", sizeof(aCharacter));
    printf("Size of double : %d bytes\n", sizeof(aDouble));

    printf("\n");

    printf("Max value of int: %d\n", INT_MAX);
    printf("Max value +1 of int: %d\n", INT_MAX + 1);
    printf("Min value of int: %d\n", INT_MIN);
    printf("Min value - 1 of int: %d\n", INT_MIN - 1);


    printf("Max value of char: %d\n", CHAR_MAX);
    printf("Min value of char: %d\n", CHAR_MIN);




    return 0;
}
