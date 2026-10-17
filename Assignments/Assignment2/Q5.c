//5.
void main()
{
	int ch='n';
	double price=600;
	double totalprice;
	if(ch=='y')
	{
		if(price>500)	
		{
				totalprice=price-price*0.20;
		}
		else
		{
			totalprice=price-price*0.10;
		} 
    }
    else
    {
		if(price>600)	
		{
				totalprice=price-price*0.15;
		}
		else
		{
			totalprice=price;
		} 
	}
	printf("total price is %lf",totalprice);
}
	