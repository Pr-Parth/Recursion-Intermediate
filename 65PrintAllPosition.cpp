#include<bits/stdc++.h>
using namespace std;

void printAllIndex(int a[], int n, int x, int i){
    if(i==n){
        return;
    }
    if(a[i]==x){
        cout<<i<<" ";
    }

    return printAllIndex(a,n,x,i+1);
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

    
    cout<<"All Index where x is present are: ";
    printAllIndex(a,n,x,i);
    


    return 0;
}