//6.

void main()
{
	int a=4;
	if(a%3==0)
	{
	  if(a%5==0)
	  {
		printf("both");
	  }
	  else
		printf("divisible by 3 but not 5");
	}
	else
	{
		if(a%5==0)
		printf("divisible by 5 but not 3");	
	}
	printf("none");
}