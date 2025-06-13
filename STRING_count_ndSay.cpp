#include<bits/stdc++.h>
using namespace std;

string find(int n){

    if(n==1) return "1";
    if(n==2) return "11";

    string s="11";
    for(int i=3;i<=n;i++){
        string t= "";
        s=s+"&";// adding a deliminator to our string.
        int c=1;
        for(int j=1;j<s.size();j++){// j will run from 1 because we are printing  ans of the previous no,(Ex --11 we are printing 2 and no is 1)
            if(s[j]!=s[j-1]){
            t = t + to_string(c) ;// storing counter in our string by  coverting it in a string
            t = t + s[j-1];
            c=1;// again initializing counter to 1; 
            }
            else{
            c++;// increasing the counter if s[j]==s[j-1]
            }
        }

        s=t;// now our string becomes to string stored in t.
    }

    return s;// finally returning all the string storing it in a string s.

}

int main(){

int n;
cin>>n;

cout<<find(n)<<endl;
return 0;
}