#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    cout<<endl;
    cout<<s.substr(0)<<endl;//print all elements form index 0;
    cout<<s.substr(0,1)<<endl;//starting form index 0 print 1 element of string;
    cout<<s.substr(1,1)<<endl;//starting from form index 1 print 1 element of string ;
    
    cout<<endl;
    for(int i=1;i<s.size();i++){
        cout<<s.substr(1,i)<<endl;
        cout<<"second : "<<s.substr(i+1)<<endl;
    }
 
    return 0;
}