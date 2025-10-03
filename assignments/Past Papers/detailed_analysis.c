#include <stdio.h>

int main() {
    printf("Detailed analysis of the pattern:\n\n");
    
    // After m=1, sum=8, x changes to 1
    printf("After m=1: sum=8, x=1\n");
    printf("Need 991 more to reach 999\n\n");
    
    int sum_after_8 = 0;
    int m_ranges[][2] = {
        {2, 6},   // x=1, m=2,3,4,5,6 (5 iterations)
        {7, 11},  // x=6, m=7,8,9,10,11 (5 iterations) 
        {12, 16}, // x=11, m=12,13,14,15,16 (5 iterations)
        {17, 21}, // x=16, m=17,18,19,20,21 (5 iterations)
        {22, 26}, // x=21, m=22,23,24,25,26 (5 iterations)
        {27, 31}, // x=26, m=27,28,29,30,31 (5 iterations)
        {32, 36}, // x=31, m=32,33,34,35,36 (5 iterations)
        {37, 41}, // x=36, m=37,38,39,40,41 (5 iterations)
        {42, 46}, // x=41, m=42,43,44,45,46 (5 iterations)
        {47, 51}  // x=46, m=47,... (partial)
    };
    
    int x_values[] = {1, 6, 11, 16, 21, 26, 31, 36, 41, 46};
    
    for (int i = 0; i < 10; i++) {
        int contribution = x_values[i] * 5;
        
        if (sum_after_8 + contribution <= 991) {
            sum_after_8 += contribution;
            printf("m=%d to m=%d: x=%d, add %d×5=%d, running total=%d\n", 
                   m_ranges[i][0], m_ranges[i][1], x_values[i], x_values[i], contribution, sum_after_8);
        } else {
            int remaining = 991 - sum_after_8;
            int steps_needed = remaining / x_values[i];
            int final_addition = steps_needed * x_values[i];
            sum_after_8 += final_addition;
            int final_m = m_ranges[i][0] + steps_needed - 1;
            
            printf("m=%d to m=%d: x=%d, need only %d more\n", 
                   m_ranges[i][0], m_ranges[i][1], x_values[i], remaining);
            printf("  -> add %d×%d=%d, final total=%d\n", steps_needed, x_values[i], final_addition, sum_after_8);
            printf("  -> reaches 999 at m=%d\n", final_m);
            printf("  -> so loop should be m < %d\n", final_m + 1);
            break;
        }
    }
    
    return 0;
}