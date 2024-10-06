#include <stdio.h>

int main() {
	// your code goes here
    int T, X;
    scanf("%d", &T); 
    while (T--) {
        scanf("%d", &X);
        if (X <= 100) {
            // No discount if X <= 100
            printf("%d\n", X);
        } else if (X <= 1000) {
            // Discount of 25 rupees if 100 < X <= 1000
            printf("%d\n", X - 25);
        } else if (X <= 5000) {
            // Discount of 100 rupees if 1000 < X <= 5000
            printf("%d\n", X - 100);
        } else {
            // Discount of 500 rupees if X > 5000
            printf("%d\n", X - 500);
        }
    }

    return 0;
}
