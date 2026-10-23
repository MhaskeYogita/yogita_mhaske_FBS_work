//8.check the number is strong number is not..

void main()
{
	int num=28;
	int sum=0;
	int fact;
	int i;
	int rem,temp;
	temp=num;
	while(num>0)
	{
	  rem=num%10;
	  fact=1; 
	  i=1;
	  while(i<=rem)
	  {
	  	fact=fact*i;
	  	i++;
	  }
	  sum=sum+fact;
	  num=num/10;
	}
	if(sum==temp)
	printf("number is strong");
	else
	printf("number is not strong");
}