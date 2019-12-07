#include <stdio.h> 

int main() {
	// Read the number of test cases.
	int T,a,b;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d",&a,&b);
		if(b!=0)
		{
        printf("%d\n",a%b);
		}
	}
	return 0;
}
