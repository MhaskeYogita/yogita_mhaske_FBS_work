//4. check the given number is prime or not..
void main()
{
	int num=8;
	int i=2;
	while(i<num && num%i!=0)
	{
	    i++;
	}
	if(i==num)
	printf("number is prime..");
	else
	{
		printf("number is not prime..");
	}
}