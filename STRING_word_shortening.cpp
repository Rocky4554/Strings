#include<bits/stdc++.h>
using namespace std;
//input--this is bold move to build it
//output--ths s bld mv t bld1 t(remove vowel and if some some is matching differnetiating it adding digit)
string remove_vowel(string s){
string ans="";
for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
            continue;
        }
        else{
            ans = ans + s[i];
        }
}
return ans;
}

int main(){
string s;
getline(cin,s);
s = s + " ";
string w="",v="",result="";
unordered_map<string,int> mp;
int c=0;

for(int i=0;i<s.size();i++){
    if( s[i]>='a' && s[i]<='z'){
        w = w + s[i];
    }
    else{
        cout<<"word :" <<w<<endl;
        v = remove_vowel(w);
        w="";
        // cout<<"vowel removed :"<<v<<endl;
            if(mp.find(v)!=mp.end()){
            // string n = to_string(c);
            v = v + to_string(mp[v]);
            // mp[v]++;
            }
            // else{
            // mp[v]++;
            // }
            mp[v]++;
         result = result + v + " ";   
    }
}
    cout<<result<<endl;
    // cout<<"without vowels :"<<remove_vowel(w);

    return 0;
}