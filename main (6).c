/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
void input(int arr[],int s);
void merge();
void main()
{    
    int n,m,i;
    printf("Enter size of 1st array\n");
    scanf("%d",&n);
    
    int a[n],b[m];
    printf("Enter  1st array\n");
    input(a,n);
    
    printf("\nArray one is:\n");
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nEnter size of 2nd array\n");
    scanf("%d",&m);
    printf("Enter 2nd array\n");
    input(b,m);
     printf("\nArray two is:\n");
     for(i=0;i<m;i++)
    {
        printf("%d",b[i]);
    }
    
}
void input(int arr[],int s)
{  int i;
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
}


