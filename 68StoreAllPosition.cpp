#include<bits/stdc++.h>
using namespace std;

void StoreAllPosition(int a[], int n, int x, int i, vector<int> &ans){
    if(i==n){
        return;
    }
    if(a[i]==x){
        ans.push_back(i);
    }

    return StoreAllPosition(a,n,x,i+1,ans);
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

    vector<int> v;
    StoreAllPosition(a,n,x,i,v);
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
    


    return 0;
}