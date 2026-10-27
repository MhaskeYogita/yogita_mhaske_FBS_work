//1.check given number is armstrong number or not using for loop...

void main()
{
	int n=500;
	int sum;
	int rem,i;
	int temp;
	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
		    sum=sum+rem*rem*rem;
		    temp=temp/10;
		}
		if(sum==i)
    	printf("%d ",i);
	}
	
}