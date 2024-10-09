#include <stdio.h>
#include <stdlib.h>
int main() {
	// your code goes here
    int T;  
    scanf("%d", &T);
    while (T--) {
        int X, Y;  
        scanf("%d %d", &X, &Y);
        if (X == Y) {
            printf("0\n");
        } else {
            printf("%d\n", abs(X - Y) / 1);
        }
    }
    return 0;
}
