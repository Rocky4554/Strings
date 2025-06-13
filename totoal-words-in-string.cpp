#include<iostream>
#include<string.h>
using namespace std;

int words(string str, int len){
    int c=0;
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            c++;
        }
      
    }
    return c;
}

int main(){
    string str;
    cout<<"Enter a string : ";

    getline(cin, str);
 

    cout<<"The total words:"<<endl;
    str=str + ' ';

       int len = str.length();

    cout<<words(str,len)<<endl;

    return 0;
}