# include <stdio.h>
int main()
{
int n=0;
printf("enter range of fibonacii series");
scanf("%d",&n);
int a=0;
int b=1;
int c=1;
printf("%d \n",a,b);
int i=1;
for(i=1;i<=n;i++)
{
printf("%d \n",c);
c=a+b;
a=b;
b=c;
}
}
