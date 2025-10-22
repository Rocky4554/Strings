#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int checkSubstr(string str, string ptr){
    int n=str.size();
    int m =ptr.size();
   

    if(m>n){
        return 0;
    }

    for(int i=0;i<=n-m;i++){    
        int j;
        for(j=0;j<m;j++){
        if(str[i+j]!=ptr[j]){
            break;
        }
    }
       if(j==m) return i;
}

   return 0;
}

int main(){
    string str="I AM Raunak";
    string ptr="AM";

    cout<<checkSubstr(str,ptr);
    return 0;
}

