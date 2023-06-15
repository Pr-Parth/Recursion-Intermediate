#include<bits/stdc++.h>
using namespace std;

bool CheckPalindrome(int a[], int s, int e){
    if (s>e){
        return true;
    }
    if(a[s]==a[e]){
        return CheckPalindrome(a,s+1,e-1);
    }
    else{
        return false;
    }
    
    
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
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
    
    int s=0;
    
    int e;
    e=n-1;

    if(CheckPalindrome(a,s,e)){
        cout<<"It is a Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    


    
    return 0;
}