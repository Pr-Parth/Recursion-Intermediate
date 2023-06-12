#include<bits/stdc++.h>
using namespace std;

bool isPresent(int a[], int n, int x){
    if (n==0)
    {
        return false;
    }
    if (a[0]==x)
    {
        return true;
    }

    return isPresent(a+1, n-1, x);
    

}

int main(){
    int n;
    cout<<"Enter number of elements in the array:";
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

    int x;
    cout<<"Enter the element you want check: ";
    cin>>x;

    if(isPresent(a,n,x)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}