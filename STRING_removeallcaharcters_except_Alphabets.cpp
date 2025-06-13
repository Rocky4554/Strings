#include<bits/stdc++.h>
using namespace std;

int solve(string str,int n){
    string temp="";int sum=0;
    for(int i=0;i<n;i++){
        if(str[i]>='0'&& str[i]<='9'){
            temp +=str[i];

        }
        else{
            sum += atoi(temp.c_str());
            temp="";
        }
    }
    return  sum + atoi(temp.c_str());

    
}

int main(){

    string str="12abc20yz68";
    int n=str.size();
    cout<<solve(str,n);

    return 0;
}