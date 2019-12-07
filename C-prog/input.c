// Note that this problem is for testing fast input-output.
#include <stdio.h> 
int main(void) {
    int n,k,i,num,count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
      { 
        scanf("%d",&num);
        if(num%k==0 && k!=0)
            count++;
      }        
    printf("\n%d",count);
	return 0;
}
