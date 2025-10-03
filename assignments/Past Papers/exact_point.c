#include <stdio.h>

int main() {
    printf("Finding exact point where sum reaches 999:\n");
    printf("Starting: sum=8, need 991 more\n\n");
    
    int sum_needed = 991;
    int current_sum = 0;
    int x = 1;
    int cycle = 0;
    
    while (current_sum < sum_needed) {
        cycle++;
        int contribution = x * 5;
        
        if (current_sum + contribution <= sum_needed) {
            current_sum += contribution;
            printf("Cycle %d: x=%d, add %d×5=%d, sum=%d\n", cycle, x, x, contribution, current_sum);
        } else {
            // Partial cycle needed
            int remaining = sum_needed - current_sum;
            int steps_needed = remaining / x;
            int final_addition = steps_needed * x;
            current_sum += final_addition;
            printf("Cycle %d (partial): x=%d, need only %d more, so add %d×%d=%d, final sum=%d\n", 
                   cycle, x, remaining, steps_needed, x, final_addition, current_sum);
            
            // Calculate the corresponding m value
            int m_start = (cycle == 1) ? 1 : (x - 5 + 1);
            int final_m = m_start + steps_needed - 1;
            printf("This corresponds to m=%d (since we need %d steps from the cycle starting point)\n", final_m, steps_needed);
            break;
        }
        x += 5;
    }
    
    printf("\nVerification: 8 + %d = %d\n", current_sum, 8 + current_sum);
    
    return 0;
}