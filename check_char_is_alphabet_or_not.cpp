#include<iostream>
using namespace std;

int main(){

char c;

    cout<<"Enter a character: ";

    cin>> c;

    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        cout<<"It is a Alphabet";
    }
        else{
            cout<<"It is not a Alphabet";
        }

          return 0;
    }

