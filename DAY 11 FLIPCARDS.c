#include <stdio.h>

int main() {
	// your code goes here
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        int face_down = N - X;
        int result = (X < face_down) ? X : face_down;
        printf("%d\n", result);
    }
    return 0;
}
