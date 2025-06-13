#include<bits/stdc++.h>
using namespace std;

int solve(string str,string str1){
    int n=str.size();
    int m=str1.size();

    for(int i=0;i<n;i++){
        int temp=i;
        int j=0;
        for(j=0;j<m;j++){
            if(str[temp]!=str1[j]){
                break;
            }
            temp++;

        }
        if(j==m){
            return i;
        }
    }
    return -1;

}

int main(){

string str;
cout<<"Enter the string"<<endl;
getline(cin,str);
string str1;
cout<<"Enter the substring"<<endl;
getline(cin,str1);

cout<<solve(str,str1);

return 0;

}