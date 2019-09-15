#include<stdio.h>
#include<math.h>
int main()
{
    /*number will be armstrong ,if summation of n(number of digit in given number) to the power of each digit will be
    equal to original number
    e.g 153=1^3+5^3+3^3 that's why is armstrong number
        154!=1^3+5^3+4^3   not armstrong
        1634=1^4+6^4+3^4+4^4   armstrong  */
     printf("Enter the number ");
     int n;
     scanf("%d",&n);
     int num=n;
     // first we find number of digit in num
     int count=1;
     while(num>9)
     {
         count++;
         num=num/10;
     }
     //summation of count to the power of each digit
     double sum=0;
     num=n;
     while(num>0)
     {
         sum=sum+pow(num%10,count);       // double pow(double a,double b)  return a^b
         num=num/10;
     }
     if ((int)sum==n)   // here we do explicit typecasting for compare
        printf("armstrong");
     else
        printf("Not armstrong");
}
