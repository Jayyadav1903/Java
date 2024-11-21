/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
int main()
{
    int n,k,i,j; 
 printf("enter size");
 scanf("%d",&n);
 int a[n];
 printf("enter array");
 for(k=0;k<n;k++)
 {
     scanf("%d",&a[k]);
 }
 printf("array is\n");

 for(k=0;k<n;k++)
 {
     printf("%d",a[k]);
 }
 printf("\n");
 for(k=0;k<n;k++)
 {
     for(i=k;i<n;i++)
 {  
    
     for(j=k;j<=i;j++)
 {     
    
     printf("%d",a[j]);
     printf("}");
     
 }
 printf("\n");
 }
 printf("\n");
 }
 getch();
 return 0;
}
 