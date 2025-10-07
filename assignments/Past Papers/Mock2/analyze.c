#include <stdio.h>
#include <math.h>

int main()
{
	// Test different scenarios that might give 384
	printf("Testing different scenarios:\n");
	
	// Original: pow(1, 2) + pow(2, 3) = 1 + 8 = 9
	printf("Original: pow(1, 2) + pow(2, 3) = %.0f\n", pow(1, 2) + pow(2, 3));
	
	// What if now = 8?
	printf("If now=8: pow(1, 2) + pow(8, 3) = %.0f\n", pow(1, 2) + pow(8, 3));
	
	// What if multiplication instead of addition?
	printf("If multiplication: pow(1, 2) * pow(2, 3) = %.0f\n", pow(1, 2) * pow(2, 3));
	
	// What if prev starts at different value?
	printf("If prev starts at 2: pow(3, 2) + pow(2, 3) = %.0f\n", pow(3, 2) + pow(2, 3));
	
	// What could give us 384?
	printf("\nLooking for 384:\n");
	printf("8^3 = %.0f\n", pow(8, 3));
	printf("2^8 = %.0f\n", pow(2, 8));
	printf("4^4 = %.0f\n", pow(4, 4));
	printf("16^2 + 128 = %.0f\n", pow(16, 2) + 128);
	
	return 0;
}
