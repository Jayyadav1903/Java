/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <conio.h>
#include <stdio.h>
int main()
{  
    printf("enter dimensions matrix");
int n;int sum=0;
scanf("%d",&n);
int a[n][n];
  printf("enter matrix");
  for(int i=1;i<=n;i++)
  {
   for(int j=1;j<=n;j++)
   {
       scanf("%d",&a[i][j]);
   }
  }
  printf("matrix:\n");
  for(int i=1;i<=n;i++)
  {
   for(int j=1;j<=n;j++)
   {
       printf("%d",a[i][j]);
   }
   printf("\n");
  }
  for(int i=1;i<=n;i++)
  {
   for(int j=1;j<=n;j++)
   {
       if(j>i)
       sum=sum+a[i][j];
   }
  }
  printf("sum is %d",sum);
  
  
    getch();
    return 0;
}