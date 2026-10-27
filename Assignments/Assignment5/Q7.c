//Print a Floyd's triangle pattern
//1
//2 3
//4 5 6
//7 8 9 10

void main()
{
	int i,j,n=4,num=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",num++);
		}
			printf("\n");
	}
}