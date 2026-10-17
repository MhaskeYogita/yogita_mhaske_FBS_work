//10.Write a c program to input marks of five subjects,find the total mark

void main()
{
    float sub1=89,sub2=90,sub3=87,sub4=94,sub5=70;
    float sum,percentage;
    sum=sub1+sub2+sub3+sub4+sub5;
    percentage=(sum / 500)*100;
    printf("Total percentage is %f",percentage);
}