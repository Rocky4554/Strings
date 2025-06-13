#include<bits/stdc++.h>
using namespace std;


void convert(string str){
    int n =str.size();
    for(int i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;//changing to uppercase
        }
    }

    cout<<str<<endl;
     for(int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] += 32;//changing to lowercase
        }
     }
    cout<<str<<endl;

}

int main(){
    cout<<"Enter the string\n";
    string str;
    getline(cin,str);// best to way to string input
    
    convert(str);


    return 0;
}