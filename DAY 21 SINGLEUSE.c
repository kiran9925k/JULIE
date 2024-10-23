#include <stdio.h>

int main() {
	// your code goes here
    int t, x, y, h, after_special_attack;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &h, &x, &y); 
        after_special_attack=h-y;
        if(after_special_attack%x==0) 
        printf("%d\n", 1+(after_special_attack/x));
        else 
        printf("%d\n", 2+(after_special_attack/x));
    }
    return 0;
}    


