//3.

void main()
{
	int a=5;
	int b=5;
	int c=5;
	if(a==b && b==c)
	{
		printf("triangle is equilateral");
	}
	else
	{
		if(a==b || b==c || a==c)
		{
			printf("triangle is isosceles");
		}
		else
		{
			printf("triangle is scaleane");
		}
	}
}