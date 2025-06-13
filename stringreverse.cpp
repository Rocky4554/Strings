#include<bits/stdc++.h>
using namespace std;

int main(){
 string st,rev;
 cout<<"Enter the string"<<endl;
 cin>>st;

 for(int i=st.size()-1;i>=0;i--){
     rev=rev+st[i];
 }
    cout << rev;
 return 0;
 
}