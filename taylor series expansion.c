#include<math.h>
#define pi 3.142
void main()
int degree,i;
float x,num,den,term,sum=0;
printf("enter the value of degrees\n");
x=(degree*pi)/180;
num=x;
den=1;
i=2;
do
{
    term=num/den;
    sum=sum+term;
    num=-num*x*x;
    den=den*i*(i+1);
    i=i+2;
}while(fabs(term)>0.000001);
printf("sin(%d)= %f without using library function\n",degree,sum);
printf("sin(%d)= %f using library function\n",degree,sin(x));

