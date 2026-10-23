//9.check the given number is palindrome number or not..

void main()
{
int num=121;
int i,rev=0,rem;
int temp=num;
while(num>0)
   {
	rem=num%10;
	rev=rev* 10 + rem;
	num=num/10;
   }	
   if(rev==temp)
   printf("number is palindrome..");
   else
   printf("number is not palindrome..");
}