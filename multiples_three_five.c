#include <stdio.h>
#include <stdlib.h>

/*
 * Problem:
 * Find the sum of all the multiples of 3 or 5 below 1000
*/

int main() {
    int i;
    int sum = 0;
    for(i = 0; i * 3 < 1000; i++) {
        // Exclude multiples of five so they aren't added twice
        if(i * 3 % 5 != 0) {
            sum += i * 3;
        }
    }

    for(i = 0; i * 5 < 1000; i++) {
        sum += i * 5;
    }

    printf("sum: %d\n", sum);
    return 0;
}
