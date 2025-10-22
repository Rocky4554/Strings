// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>// stroes value sin sorted way 
#include<string>
using namespace std;

string solve(string str){
    int len=str.size();
    string pt;
   map<char,int> m;


    for(int i=0;i<len;i++){
    m[str[i]]++;
    }

    for(auto it :m){// way to traverse over map;
        if(it.second==1){
            pt+=it.first;
        }
    }

  return pt;

}

int main() {

string str;
getline(cin,str);
cout<<solve(str);
  
    return 0;
}