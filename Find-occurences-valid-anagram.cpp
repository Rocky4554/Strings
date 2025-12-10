// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

vector<int> solve(string query, string str){
    vector<int> result;
    vector<int> hash(26,0);
    vector<int>qhash(26,0);
    
    int window=str.size();
    
    for (char c:str)
    hash[c-'a']++;
    
    for (int i=0;i<window;i++){
        qhash[query[i]-'a']++;
    }
    if(qhash==hash){
        result.push_back(0);
    }
    
    for (int i=window;i<query.size();i++){
        qhash[query[i-window]-'a']--;
        qhash[query[i]-'a']++;
        
        if(qhash==hash){
            result.push_back(i-window +1);
        }
    }
    return result;
    
}
int main() {
    
    string query="abcdebacb";
    string str="abc";
    
    vector<int> ans= solve(query,str);
    
    for(auto it :ans)
    cout<< it<<",";
   
    return 0;
}