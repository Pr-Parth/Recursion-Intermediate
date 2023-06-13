#include<bits/stdc++.h>
using namespace std;

int firstIndex(int a[], int n, int x, int i){
    if(n==0){
        return -1;
    }
    if(a[i]==x){
        return i;
    }

    return firstIndex(a,n,x,i+1);
}

int main(){
    int n;
    cout<<"Enter the number of elements of Array: ";
    cin>>n;

    int a[n];
    int i=0;
    for (int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }

    cout<<"Your Array is: ";

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    int x;
    cout<<"Enter the element whose index you want to know: ";
    cin>>x;

    
    
    cout<<"The index of x is: "<<firstIndex(a,n,x,i)<<endl;
    


    return 0;
}