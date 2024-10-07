#include <stdio.h>

int main() {
	// your code goes here
    int T; 
    scanf("%d", &T);
    while (T--) {
        int A, B, X, Y; 
        scanf("%d %d %d %d", &A, &B, &X, &Y);
        if ((B >= A && (B - A) <= X) || (B <= A && (A - B) <= Y)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}


