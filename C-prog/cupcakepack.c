#include <stdio.h>
#define size 1000

int main(void) {
	int i,t,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    printf("%d\n",(n/2)+1);
	}
	return 0;
}
