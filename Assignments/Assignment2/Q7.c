//Q7.accept the age and check the person is Child()

void main()
{
	int age=70;
	if(age<12)
		printf(" the child..");
	else if(age>=12 && age<=19)
		printf("the teenager");
	else if(age>=20 && age<=59)
		printf("the adult");
	else
	{
		printf("the senior");
	}
}