#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    while (t--) {
        int count = 0;
        int n;
        scanf("%d", &n);
        int m = 2;
        while (m <= n) {
            m += 7;
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}


