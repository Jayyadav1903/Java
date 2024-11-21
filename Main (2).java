/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
public class Main
{
	public  static void main(String[] args) {
		Scanner ob=new Scanner(System.in);
		int n=ob.nextInt();
		int i,f=0,l=n-1;
		int A[]=new int[n];
		for (i=0;i<n;i++)
		{
		    A[i]=ob.nextInt();
		}
	      Quicksort(A,f,l);
		System.out.println("Sorted Array is");
			for (i=0;i<n;i++)
		{
		   System.out.print(" "+A[i]);
		}
		
	}
    static	void Quicksort(int A[],int f,int l)
	{
	    if (f<l)
	    {
	        int q=Partition(A,f,l);
	        Quicksort(A,f,q-1);
	        Quicksort(A,q+1,l);
	    }
	}
	static int Partition(int A[],int f,int l)
	{
	    int x=A[l];
	    int i=f-1;
	    for(int j=f;j<l;j++)
	    {
	        if(A[j]<=x)
	        {   
	            i=i+1;
	            int temp=A[j];
	            A[j]=A[i];
	            A[i]=temp;
	        }
	    }
	    int temp=A[l];
	    A[l]=A[i+1];
	    A[i+1]=temp;
	   
	    return i+1;
	}
	
}