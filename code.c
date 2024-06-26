#include <stdio.h>

// @brief Calculates the square of the input number
// @param n The number to be squared
// @return The square of n
int square(int n) {
    return n * n;
}


int main(){
    int difference, S1 = 0, S2 = 0;
    // iterate through the first 100 numbers
    for (int i = 1; i <= 100; i++){
        S1 += square(i);        // S1 is the sum of squares;
        S2 += i;                // S2 is the sum of numbers that we will square later
    }

    difference = square(S2) - S1;   // calculate the differnce between sums
    printf("the difference between them is:\t%d\n", difference);

    return 0;
}
