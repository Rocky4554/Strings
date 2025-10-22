// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

void solve(string str){
    int len=str.size();
    string pt;
    unordered_map<char,int> m;

    for(int i=0;i<len;i++){
    m[str[i]]++;
    }

    for(auto it : m){
      cout<<it.first<<"="<<it.second<<endl;; 
    }

}

int main() {

string str="raunakkumar";
solve(str);
  
    return 0;
}