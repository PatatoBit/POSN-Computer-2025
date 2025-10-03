#include <stdio.h>

int main() {
    printf("Breaking down the 9×5 = 45 calculation:\n\n");
    
    printf("After initial sum=8, you need 991 more.\n");
    printf("You calculated 9 complete cycles × 5 steps each = 45 steps\n\n");
    
    printf("What those 45 steps represent:\n");
    int step_count = 0;
    int x_values[] = {1, 6, 11, 16, 21, 26, 31, 36, 41};
    
    for (int cycle = 0; cycle < 9; cycle++) {
        printf("Cycle %d (x=%d): ", cycle + 1, x_values[cycle]);
        for (int i = 0; i < 5; i++) {
            step_count++;
            if (i == 4) {
                printf("step %d (x changes to %d)", step_count, x_values[cycle] + 5);
            } else {
                printf("step %d, ", step_count);
            }
        }
        printf("\n");
    }
    
    printf("\nAfter 45 steps: x=46 has been SET, but hasn't been USED yet\n");
    printf("Step 46: m=47, sum += 46 (NOW we use x=46)\n\n");
    
    printf("So your calculation breakdown:\n");
    printf("• 9×5 = 45 steps: gets you to the point where x=46\n");
    printf("• +1 step: where x=46 is SET (at m=46)\n");
    printf("• +1 step: where x=46 is USED (at m=47)\n");
    printf("• Total: 45 + 1 + 1 = 47 steps from m=1\n");
    printf("• Since we start from m=-2, final m = -2 + 47 + 2 = 47\n");
    printf("• Loop condition: m < 48\n");
    
    return 0;
}