#include<bits/stdc++.h>
using namespace std;

int main(){


    cout<<"Enter the String\n";
    char str[100];

    cin.getline(str,100);//first way of taking string input

    cout<<"Your enetered string is =>"<<str<<endl;

    cout<<"Enter string 2\n";   
    string str1;

    getline(cin,str1);//second way of taking a string(best way of taking)



    for(int i=0;i<str1.length();i++){
        cout<<str[i]-'0';// it coverts string to integer
    }

    return 0;
}