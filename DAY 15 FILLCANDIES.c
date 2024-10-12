#include <stdio.h>

int main() {
	// your code goes here
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, K, M; // N = number of candies, K = number of pockets, M = max candies per pocket
        scanf("%d %d %d", &N, &K, &M);
        
        // Calculate how many candies can fit in one bag
        int capacity_per_bag = K * M;
        
        // Calculate minimum number of bags needed
        int bags_needed = (N + capacity_per_bag - 1) / capacity_per_bag;
        
        printf("%d\n", bags_needed);
    }
    
    return 0;
}


