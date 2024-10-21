#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,count=-1;
	    scanf("%d %d %d",&a,&b,&c);
	    while(a>0){
	        count++;
	        a=a/2;
	        
	    }
	    int s=(b*count)+c*(count-1);
	    printf("%d\n",s);
	}
	return 0;
}
