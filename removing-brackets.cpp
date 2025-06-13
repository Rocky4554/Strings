#include<iostream>
#include<string>
using namespace std;

string remove(string str, int len){
    for(int i=0;i<len;i++){
        if(str[i]=='{' || str[i]=='[' || str[i]=='(' || str[i]=='}' || str[i]==']' || str[i]==')'){
            // if opening bracket found
            // shift all characters to left
            for(int j=i;j<len-1;j++){       
                str[j]=str[j+1];
            }
            len--; // decrease length of string
            i--; // stay at the same position to check the new character
        }
 
    }

    return str;

}

int main(){
    string str;
    cout<<"Enter a string : ";

    getline(cin, str);
    int len = str.length();

    cout<<"The resultant string:"<<endl;

    cout<<remove(str,len)<<endl;

    return 0;
}