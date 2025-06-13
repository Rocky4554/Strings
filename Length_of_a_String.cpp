#include<bits/stdc++.h>
using namespace std;

//'\0' - the null character (ASCII value 0), which marks the end of a C-style string

int main(){
    char str[50];
    cout<<"Enter a string : ";

    gets(str);
    int count =0;

    for(int i=0;str[i]!='\0';++i){
        count++;
    }

   cout<<"Length of a string is :"<< count << endl;

    return 0;
}