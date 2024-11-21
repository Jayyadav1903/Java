/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <conio.h>
#include <stdio.h>

int main()
{
    printf("Enter size of array");
    int n,t;
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Enter position in which no. is to be inserted");
     scanf("%d",&t);
     for(int i=0;i<n;i++)
    {
       if(i==t-1)
       {
        for(int i=n+1;i>=t-1;i--)
        {
            arr[i+1]=arr[i];
        }
         printf("Enter no. is to be inserted");
         scanf("%d",&arr[t-1]);
       }
    }
    for(int i=0;i<=n;i++)
    {
       printf("%d",arr[i]);  
    }
    getch();
    return 0;
}