#include<bits/stdc++.h>
using namespace std;

string laststring(string str,int n){

    int i=0,j=1,k=0;
    while(j+k<n){
        if(str[i+k]==str[j+k]){
            k +=1;
            continue;
        }

        if(str[i+k]<str[j+k]){
            i=j;
            j +=1;

        }
        else{
            j=j+k+1;
        }
        k=0;
    }
    cout<< "i ="<<i <<"j ="<< j <<endl;

    return str.substr(i);

}

int main(){
    
    string str;
    cout<<"Enter the string\n";
    cin>>str;
    int n =str.size();

    cout<<laststring(str,n);

    return 0;
}