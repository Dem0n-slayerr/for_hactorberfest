#include<iostream>
using namespace std;

int main()
{
    int A[4],n,i;
    
    cout<<"Enter the number of elements of array"<<endl;
       cin>>n;
       
    cout<<"The elements of array are:"<<endl;
     for(i=0;i<n;i++)
     {
       cin>>A[i];
     }
     
     cout<<"The Elements of array in Reverse order:"<<endl;
     for(i=n-1;i>=0;i--)
     {
         cout<<A[i];
     }
     
    
    return 0;
}


