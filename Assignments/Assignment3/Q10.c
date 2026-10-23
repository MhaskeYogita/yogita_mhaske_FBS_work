//10.find the sum of first and last digit of given number..

void main()
{
	int num=12;
	int first, sum=0;
	int last=num%10;
	while(num>=10)
	{
		first=num/10;
		num=first;
	
		
	}
		sum=first+last;
	printf("sum of first and last digit is %d",sum);
}
