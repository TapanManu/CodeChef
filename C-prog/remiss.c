#include <stdio.h>

int main(void) {
    int t,a,b,max;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
            max=a;
        else
            max=b;
        printf("%d %d\n",max,a+b);    
    }
	// your code goes here
	return 0;
}
