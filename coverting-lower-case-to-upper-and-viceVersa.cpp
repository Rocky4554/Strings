#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter a String :";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] =str[i] -32;
        
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i] =str[i] +32;
        }

    }

    cout<<"Converted String is :"<<str<<endl;

    return 0;
}