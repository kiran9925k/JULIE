#include <stdio.h>

int main() {
	// your code goes here
    int T;  // Number of test cases
    scanf("%d", &T);
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);  // Input X and Y

        // Calculate total working hours in a week
        int total_hours = (X * 4) + Y;

        // Output the result
        printf("%d\n", total_hours);
    }

    return 0;
}


