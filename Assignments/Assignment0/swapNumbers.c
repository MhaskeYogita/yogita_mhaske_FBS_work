//4.Write a C program to swap two numbers using a temporary third variable...

void main()
{
	int a=10;
	int b=20;
	int c;
	c=a;
    a=b;
    b=c;
	printf("After swapping a is %d and b is %d",a,b);	
}