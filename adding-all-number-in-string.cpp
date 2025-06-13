#include<iostream>
#include<string>
using namespace std;

int adding_Number(string str){
    int sum=0;
    for(int i=0;i<str.size();i++){
        if(str[i]>='0' && str[i]<='9'){
            // if opening bracket found
            // shift all characters to left
          sum = sum + (str[i]-'0');
            }
        // stay at the same position to check the new character
        }
        return sum;
    }

int main(){
    string str;
    cout<<"Enter a string : ";

    getline(cin, str);
    int len = str.length();

    cout<<"The resultant sum:"<<endl;

    cout<<adding_Number(str)<<endl;

    return 0;
}