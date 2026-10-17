//1.

void main()
{
	int num1=8;
	int num2=3;
	int op='+';
	int res;
	if(op=='+')
	{
		res=num1+num2;
		printf("%d",res);
	}
	else if(op=='-')
		{
			res=num1-num2;
			printf("%d",res);
		}
		else if(op=='*')
		 	 {
				res=num1*num2;
				printf("%d",res);
			  }
			  else if(op=='/')
			       {
				    res=num1/num2;
			       	printf("%d",res);
			       }
			    else if(op=='%')
			    	{
			    		res=num1%num2;
			    		printf("%d",res);
					}			
}