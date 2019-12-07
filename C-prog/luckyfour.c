#include <stdio.h>

int main(void) {
	int t,count,d;
    int n;
	scanf("%d",&t);
	while(t--)
	{   count=0;
	    scanf("%d",&n);
	    while(n!=0)
	    {
	        d=n%10;
	        if(d==4)
	            count++;
	        n/=10;    
	    }
	    printf("%d\n",count);
	}
	return 0;
}
