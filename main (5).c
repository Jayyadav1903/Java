/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
int main()
{
int n,max,i;
printf("Enter size of array");
scanf("%d",&n);
int a[n];
for( i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0]*a[1]*a[2];
for(i=0;i<n;i++)
{
    if((i+2)!=(n))
    {
        if(max<a[i]*a[i+1]*a[i+2])
        {
            max=a[i]*a[i+1]*a[i+2];
        }
    }
}
printf("max product of 3 consecutive numbers is %d",max);
getch();
return 0;
}