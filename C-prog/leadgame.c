int main(void) {
	int p1=0,p2=0,n,i,s,a,b,large=0,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d %d",&a,&b);
	    p1+=a;
	    p2+=b;
	    s=p1-p2;
	    if (s!=0)
	    {
	    if((s>0)&&(s>large))
	    {
	        large=s;
	        f=1;
	    }
	    else if((s<0) &&(-s>large))
	    {
	        large=-s;
	        f=2;
	    }
	    }
	    
	}
	printf("%d %d\n",f,large);
	
	return 0;
}
