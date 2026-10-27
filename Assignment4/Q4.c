//4.print strong number in given range 1to n..

void main()
{
    int n=1000,temp,rem,fact,sum;

    for(int i=1;i<=n;i++)
    {
        temp=i;
        sum=0;

        while(temp>0)
        {
            rem=temp%10;
            fact=1;

            for(int j=1;j<=rem;j++)
            {
                fact=fact*j;
            }

            sum=sum+fact;
            temp=temp/10;
        }

        if(sum==i)
            printf("%d ",i);
    }
}