#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int sum_square = 0;
    int square_sum = 0;
    for(i = 0; i < 101; i++) {
        sum_square += i * i;
        square_sum += i;
    }
    square_sum *= square_sum;
    printf("difference is %d\n", sum_square - square_sum);

    return 0;
}
