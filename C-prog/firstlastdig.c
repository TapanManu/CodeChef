#include <stdio.h>

int main(void) {
	int t,num,sum,count,d;
	scanf("%d",&t);
	while(t--)
	{   sum=count=0;
	    scanf("%d",&num);
	    while(num!=0)
	    {   d=num%10;
	        if((!count)||(num/10==0))
	            sum+=d;
	        num/=10;
	        count++;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}

