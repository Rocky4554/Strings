#include<iostream>
using namespace std;

int rev(int n){
    int sum=0;int a;
    while(n>0){
        a=n%10;
        sum = sum *10 + a;
        n=n/10;

    }
    return sum;
}

int main(){

    cout<<"Enter the no :";
    int n;
    cin>>n;

    int maxi=0; int ans;
    for(int i=n;i>=0;i--){

        int s=rev(i);
        if(s > maxi){
            maxi=s;
            ans=i;
        }

    }
    cout << ans;

    return 0;
}