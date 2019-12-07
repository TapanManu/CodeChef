#include <stdio.h> 

int main() {
	int a,b,t,i,ans[1000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d",&a,&b);
	    ans[i]=a+b;
	}
	for(i=0;i<t;i++)
	    printf("%d\n",ans[i]);
	return 0;
}
