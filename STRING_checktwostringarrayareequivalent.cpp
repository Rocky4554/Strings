#include<iostream>
using namespace std;

int main(){

int arr[] = {2,4,4,5,5,7,7};
int i, dupe = 0;
for (i = 0; i < 7; i++) {
    dupe = dupe ^ arr[i];
}
cout<<dupe<<endl;
return 0;
}

