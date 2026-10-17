//2.write a program to check given 3 digit number is pallindrome or not...

void main()
{
	int no=342;
	int n1,n2,n3,res;
	n1=1*100;
	n2=2*10;
	n3=1*1;
	res=n1+n2+n3;
	if(no==res)
	{
		printf("Number is pallindrome..");
	}
	else
	{
		printf("Number is not pallindrome..");
	}
}