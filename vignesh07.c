#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e;
printf(" Enter the number ");
scanf("%d",&a);
b=a\1000;
c=(a-(1*100))\10;
d=(a-(1*100+c*10));
e=(d*100+c*10+b*1);
if(a==e)
printf("%d its palindrome");
else 
printf(" it not palindrome");
return 0;
}
