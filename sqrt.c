#include<stdio.h>
#include<math.h>
double sqrt(double a);
double f(int n,double a);
int main()
{
double a;
scanf("%lf",&a);
printf("%f",sqrt(a));
}
double sqrt(double a)
{
int i=1;
while(fabs(f(i,a)-f(i-1,a))>1e-5)
{
    i++;
}
double m=f(i,a);
return m;
}
double f(int n,double a)
{
    double t;
    if(n>0)
    {
        t=0.5*(f(n-1,a)+a/f(n-1,a));
    }
    if(n==0)t=1;
    return t;
}