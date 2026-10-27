//5.Write a menu driven program to take a number for user and perform operations
//Press 1. To check number is even or odd.
//2. To check number is prime or not.
//3. To check number is pallindrome or not.
//4. To check number is positive, negative or zero.
//5. To reverse a number.
//6. To find sum of digits

void main()
{
    int n,ch,i,rem,temp,rev=0,sum=0,count=0;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("1. Even or Odd\n");
    printf("2. Prime or Not\n");
    printf("3. Palindrome or Not\n");
    printf("4. Positive, Negative or Zero\n");
    printf("5. Reverse Number\n");
    printf("6. Sum of Digits\n");

    printf("Enter choice: ");
    scanf("%d",&ch);

    if(ch==1)
    {
        if(n%2==0)
            printf("Even");
        else
            printf("Odd");
    }

    else if(ch==2)
    {
        if(n<=1)
            count=1;

        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                count=1;
                break;
            }
        }

        if(count==0)
            printf("Prime");
        else
            printf("Not Prime");
    }

    else if(ch==3)
    {
        temp=n;

        for(;temp>0;temp=temp/10)
        {
            rem=temp%10;
            rev=rev*10+rem;
        }

        if(n>=0 && n==rev)
            printf("Palindrome");
        else
            printf("Not Palindrome");
    }

    else if(ch==4)
    {
        if(n>0)
            printf("Positive");
        else if(n<0)
            printf("Negative");
        else
            printf("Zero");
    }

    else if(ch==5)
    {
        temp=n;

        for(;temp>0;temp=temp/10)
        {
            rem=temp%10;
            rev=rev*10+rem;
        }

        if(n<0)
            rev=-rev;

        printf("Reverse = %d",rev);
    }

    else if(ch==6)
    {
        temp=n;

        for(;temp>0;temp=temp/10)
        {
            rem=temp%10;
            sum=sum+rem;
        }

        printf("Sum = %d",sum);
    }

    else
        printf("Invalid choice");
}