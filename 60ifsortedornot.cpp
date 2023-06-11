#include<bits/stdc++.h>
using namespace std;

bool ifSorted(int a[], int n){
    if(n==0 || n==1){
        return true;
    }
    if (a[0]>a[1]){
        return false;
    }
    bool ifsmallsorted = ifSorted(a+1, n-1);
    return ifsmallsorted;
    
}

int main(){
    int n;
    cout<<"Number of elements in the array: ";
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout<<"Your array: ";
    for(int i=0;i<n; i++){
    cout<<a[i]<<" ";
    }
    
    cout<<endl;
    if (ifSorted(a,n)){
        cout<<"This array is SORTED"<<endl;
    }
    else{
        cout<<"This array is NOT SORTED"<<endl;
    }
    


    
    return 0;
}