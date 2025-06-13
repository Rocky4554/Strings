#include<iostream>
#include<string.h>
using namespace std;

// trick --if first element is at i=0 then  last will be at [n-i-1]
// second at i=1 then second last at [n-i-1]

string reversal(string str, int n){
    for(int i=0;i<n/2;i++){

        int temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    
    return str;

}

int main(){

    string str;
    cout<<"Enter a string"<<endl;
    cin>>str;
    int n=str.size();

    cout<<"Reversed Sring is :";
    cout<<reversal(str,n);

    return 0;
}