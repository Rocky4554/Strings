#include<bits/stdc++.h>
using namespace std;

// #define ll long long

int distinct(string s){

    int i=0,j=1,ans=INT_MAX,count=0;
    set<char> st;unordered_map<char,int> mp;

    for(char ch : s){
        st.insert(ch);
    }
    int n=st.size();
    mp[s[i]]++;count++;
    while(i<=j and j<s.length()){
        if(count<n){
            if(mp[s[j]==0]) count++;// inserting the char first time in map and increasing the counter
            mp[s[j]]++;j++;
        }
        else if(count==n){
            ans = min(ans,j-i);
            if(mp[s[i]==1])count--;
            mp[s[i]]--;i++;
        }
    }
    while(count==n){
        ans = min(ans,j-i);
        if(mp[s[i]==1])count--;
        mp[s[i]]--;i++;
    }

    return ans;

}


int main(){

    int t;
    cin>>t;

    while(t--){
        string s,t;
        cin>>s;

        cout<<distinct(s)<<endl;
    }
}