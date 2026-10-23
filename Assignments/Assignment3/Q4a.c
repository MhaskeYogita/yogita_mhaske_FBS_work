//Q4.2 check thr given number is prime or not..

void main()
{
int no=14;
int i=2,status=0;
while(i<=no/2)
{
	if(no%i==0)
	{
		status=1;
	}
	break;
	i++;
}
if(!status)
printf("prime");
else
{
	printf("not prime");
}
}