#include<bits/stdc++.h>
using namespace std;

 bool find(string str1,string str2){
    map<char,char> m1;
    map<char,bool> m2;

    if(str1.size()!=str2.size()){
        return false;
    }

    for(int i=0;i<str1.size();i++){
        if(m1.find(str1[i])!=m1.end()){
            if(m1[str1[i]]!=str2[i]){
                return false;
            }
        }
    
    else{
        if(m2.find(str2[i])!=m2.end()){
            return false;
        }
        else{
            m1[str1[i]]=str2[2];
            m2[str2[i]]=false;

        }
    }

    }
    return true;
 }

int main(){

 cout<<"Enter the two string\n";

 string str1,str2;

 getline(cin,str1);
 getline(cin,str2);
 cout<<endl;

 if(find(str1,str2)){
     cout<<"true"<<endl;
 }else{
     cout<<"false"<<endl;
 }

    return 0;
}