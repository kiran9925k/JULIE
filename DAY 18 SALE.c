#include <stdio.h>

int main() {
    // Function to calculate the price Chef needs to pay
int calculate_price(int A, int B, int C) {
    // Find the minimum price among A, B, C
    if (A <= B && A <= C) {
        return B + C;  // A is the smallest, so B and C are paid
    } else if (B <= A && B <= C) {
        return A + C;  // B is the smallest, so A and C are paid
    } else {
        return A + B;  // C is the smallest, so A and B are paid
    }
}
	// your code goes here
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int A, B, C;
        // Input the prices of the three items
        scanf("%d %d %d", &A, &B, &C);

        // Output the amount Chef needs to pay
        printf("%d\n", calculate_price(A, B, C));
    }

    return 0;
}

