#include <stdio.h>

int main() {
	// your code goes here
	int t,n,s=0,l=0;
	char tag[10];
	scanf("%d",&t);
	while(t!=0)
	{scanf("%d",&n);
	while(n!=0)
	{scanf("%s",tag);
	
	if (tag[0]=='S')
	++s;
	else
	++l;
	    n=n-1;
	}
	printf("%d %d\n",s,l);
	s=l=0;
	    --t;
	}
	return 0;

}

