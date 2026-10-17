//4.

void main()
{
	int mark=41;
	if(mark>=75)
	{
		printf("Distinction");
	}
	else
	{
		if(mark>=65)
		{
			printf("First Class");
		}
		else
		{
			if(mark>=55)
			{
				printf("Second Class");
			}
			else
			{
				if(mark>=40)
				{
					printf("Pass ");
				}
				else
				{
					printf("Fail");
				}
			}
		}
	}
}