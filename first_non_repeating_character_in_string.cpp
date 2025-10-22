
#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

int solve(string str){
    int len=str.size();
    string pt;
    unordered_map<char,int> m;

    for(int i=0;i<len;i++){
    m[str[i]]++;
    }

    for(int i=0;i<len;i++){
        if(m[str[i]]==1){
            return i;
        }
    }
    return -1; 
}

int main() {

string str="raunakkumar";
cout<<solve(str);
  
    return 0;
}