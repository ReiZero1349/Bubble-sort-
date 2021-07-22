#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
  int i,j,n,temp;
  cout<<"Enter n: "<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter numbers:"<<endl;
  for(i=0;i<n;i++)
    {
        cin>>a[i];

    }

     for(i=0;i<n-1;i++)
     {
      for(j=0;j<n-i-1;j++)
       {
          if (a[j]>a[j+1])
             {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1] = temp;
             }
       }
      }
    cout<<"Sorted array is"<<endl;
  for (i=0;i<n; i++)
	{
	   cout<<a[i]<<" ";
	}
  return 0;
}
