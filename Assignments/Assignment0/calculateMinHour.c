//7.write a C program to convert given minutes into hours and remaining minutes...

void main()
{
	int total_min=6943;
	int hour;
	int min;
	hour=total_min/60;
	min=total_min%60;
	printf("hours is %d and min is %d",hour,min);
}