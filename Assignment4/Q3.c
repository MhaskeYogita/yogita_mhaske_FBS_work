//3.print perfect number in thr given range..

void main()
{
	int n,i,sum;
	for(n=1;n<=500;n++)
	{
		sum==0;
		for(i=1;i<n;i++)
		{
	    	if(n%i==0)
		    {
		      sum=sum+i;
         	}
	    }
	}
	if(sum==n)
    printf("%d ",n);
}
	