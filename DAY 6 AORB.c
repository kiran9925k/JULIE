#include <stdio.h>
int main( ) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int j=500-(a*2)+1000-((a+b)*4);
	    int k=1000-(b*4)+500-((a+b)*2);
	    if(j>k)
	    printf("%d\n",j);
	    else
        printf("%d\n",k);
	}
	return 0;
}


