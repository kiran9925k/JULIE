int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X; // N = number of friends, X = cost of one subscription
        scanf("%d %d", &N, &X);
        
        // Calculate the number of subscriptions needed
        int subscriptions_needed = (N + 5) / 6;
        
        // Calculate the total cost
        int total_cost = subscriptions_needed * X;
        
        // Output the result for the current test case
        printf("%d\n", total_cost);
    }
    
    return 0;
    }





	

