#include<bits/stdc++.h>
using namespace std;

void countOccurence(int a[], int n, int x, int i, int &ans){
    if(i==n){
        return;
    }
    if(a[i]==x){
        ans++;
    }

    countOccurence(a,n,x,i+1,ans);
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

    int ans=0;
    countOccurence(a,n,x,i,ans);
    cout<<"Total number of X present int the array are: "<<ans<<endl;
    
    


    return 0;
}