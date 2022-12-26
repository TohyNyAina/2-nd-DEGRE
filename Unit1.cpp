#include<math.h>
#include<stdio.h>
#include<conio.h>

float a,b,c,del,x1,x2;
void main()
{
         printf("a= ");
         scanf("%f",&a);
         printf("b= ");
         scanf("%f",&b);
         printf("c= ");
         scanf("%f",&c);
         printf("\n f(x)= %3.2f x2 + %3.2f x + %3.2f ",a,b,c);
         del=(b*b)-(4*a*c);
         if(del>0)
         {
                   x1=(-b-sqrt(del))/(2*a);
                   x2=(-b+sqrt(del))/(2*a);
                   printf("\n x1 = %3.2f et x2 = %3.2f",x1,x2);
         }
         else
         {
                   if(del=0)
                   {
                       x1=(-b)/(2*a);
                       printf("\n x1 = x2 = %3.2f",x1);
                   }
                   else
                   {
                       printf("\n Pas de solution");
                   }
         }
getch();         
}
