//6.check the given number is perfect or not..

void main()
{
	int num =4;
	int sum=0;
	int i=1;
	while(i<num)
	{
		if(num%i==0)
		{
		sum=sum+i;
     	}
     	break;
    i++; 	
	}
	if(sum==num)
	printf("number is perfect..");
	else
	printf("number is not perfecr..");
}