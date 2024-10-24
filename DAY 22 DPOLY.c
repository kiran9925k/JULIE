#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int a[n];
	    int count = 0;
	    for(int i = 0; i < n; i++)
	    {
	        scanf("%d", &a[i]);
	        if(a[i] != 0)
	        {
	            count = i;
	        }
	    }
	    printf("%d\n", count);
	}
	return 0;
}



