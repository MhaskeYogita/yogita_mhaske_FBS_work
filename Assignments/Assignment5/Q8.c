// 8. print a pattern of star in diamond shape
//      *
//     * * 
//    * * * 
//   * * * * 
//  * * * * *
//  * * * * *
//   * * * * 
//    * * * 
//     * * 
//      *

void main()
{
	int i,j,n=4;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
    	}
		for(j=1;j<=i;j++)
		{
			  printf("* ");
		}
		printf("\n");	
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=n-i+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}	
} 