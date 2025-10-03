#include <stdio.h>

int main() {
    printf("Analyzing the pattern after m=1:\n");
    printf("At m=1: sum=8, need 991 more\n\n");
    
    // Values of x when m%5==1 (starting from m=6)
    int x_values[] = {1, 6, 11, 16, 21, 26, 31, 36, 41, 46};
    int sum_after_8 = 0;
    
    printf("Pattern analysis:\n");
    printf("m=1 to m=6: x=1 added 5 times = %d\n", 1*5);
    sum_after_8 += 1*5;
    
    for (int i = 1; i < 10; i++) {
        int contribution = x_values[i] * 5;
        sum_after_8 += contribution;
        printf("m=%d to m=%d: x=%d added 5 times = %d (total so far: %d)\n", 
               x_values[i], x_values[i]+5, x_values[i], contribution, sum_after_8);
    }
    
    printf("\nTotal sum after initial 8: %d\n", sum_after_8);
    printf("Final sum: 8 + %d = %d\n", sum_after_8, 8 + sum_after_8);
    
    // Now let's verify your arithmetic sequence formula
    printf("\n=== Arithmetic Sequence Analysis ===\n");
    printf("The x values form: 1, 6, 11, 16, 21, 26, 31, 36, 41, 46, ...\n");
    printf("This is arithmetic with a1=1, d=5\n");
    
    // Each term contributes itself * 5 to the sum
    printf("\nContributions: 1×5, 6×5, 11×5, 16×5, 21×5, 26×5, 31×5, 36×5, 41×5, 46×5\n");
    printf("Which is: 5×(1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 + 41 + 46)\n");
    
    int arithmetic_sum = 0;
    for (int i = 0; i < 10; i++) {
        arithmetic_sum += x_values[i];
    }
    printf("Sum of arithmetic sequence (n=10): %d\n", arithmetic_sum);
    printf("Total contribution: 5 × %d = %d\n", arithmetic_sum, arithmetic_sum * 5);
    
    // Using formula: Sn = n/2 * (2*a1 + (n-1)*d)
    int n = 10;
    int a1 = 1;
    int d = 5;
    int formula_sum = n * (2 * a1 + (n - 1) * d) / 2;
    printf("Using formula Sn = n/2(2a1 + (n-1)d) with n=10: %d\n", formula_sum);
    
    return 0;
}