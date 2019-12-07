#include <stdio.h>

int main(void) {
    int t,s;
    long a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(((a>=b)&&(b>=c))||((c>=b)&&(b>=a)))
            s=b;
        else if(((a>=c)&&(c>=b))||((b>=c)&&(c>=a)))
            s=c;
        else   
            s=a;   
        printf("%d\n",s);    
        
    }
	return 0;
}
