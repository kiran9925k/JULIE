#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int a,b,c,d,x,y;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a>b)
	        x=a;
	    else
	        x=b;
	    if(c>d)
	        y=c;
	    else
	        y=d;
	    printf("%d\n",(x+y));      
	        
	    
	}
	return 0;
}


