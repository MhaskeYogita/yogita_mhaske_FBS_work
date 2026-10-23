//5.check given number is armstrong number or not

void main()
{
	int num=153;
	int sum=0;
	int rem;
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(sum==temp)
	printf("number is armstrong");
	else
	printf("not armstrong");
}