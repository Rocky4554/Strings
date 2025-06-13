#include<bits/stdc++.h>
using namespace std;

 void solve(string input){
    int n=input.size();
    int curr_max=0,o_max=0; string result=" ";
    int i=0;
    unordered_map<char,int> mp;

   while(i<n){
       int j=i+1;
        string wrd=" ";
        curr_max=0;
       while(input[j] !=' ' && j<n){
           wrd +=input[j];   
           mp[input[j]]++;
       }

       for(auto it:mp){
           if(it.second>1){
               curr_max++;
           }
       }
       if(curr_max>o_max){
           o_max=curr_max;
           result=wrd;
       }
       i=j+1;

   }

   
   if(result.empty()){
       cout<<"-1";
   }else{
       cout<<result;
   }

}

int main(){

 string input ="Google is better than Microsoft";

    solve(input);
    return 0;
}