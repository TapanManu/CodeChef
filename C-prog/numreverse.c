#include <stdio.h>

int main(void) {
	int t,num,rev,d;
	scanf("%d",&t);
	while(t--)
	{   rev=0;
	    scanf("%d",&num);
	    while(num!=0)
	    {
	        d=num%10;
	        rev=(rev*10)+d;
	        num/=10;
	    }
	    printf("%d\n",rev);
	}
	return 0;
}
