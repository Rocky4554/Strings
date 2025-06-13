#include<bits/stdc++.h>
using namespace std;

string maxlen(string str,int n){
    string mx="";

    for(int i=0;i<n;i++){
        mx=max(mx,str.substr(i));
    }

    return mx;
}

int main(){
string str;
cout<<"Enter the string\n";
cin>>str;

int n = str.length();

 cout<<maxlen(str,n);

}
