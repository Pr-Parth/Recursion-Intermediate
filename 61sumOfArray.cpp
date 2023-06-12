#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int a[],int n){
    if (n==0)
    {
        return 0;
    }

    return a[0]+ sumOfArray(a+1, n-1);
    
}

int main(){
    int n;
    cout<<"Enter the number of Elements in the array: ";
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<"Your array is: ";

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl; 

    cout<<"Your Sum of Array is: "<<sumOfArray(a,n)<<endl;
    
    
    return 0;
}