#include<iostream>
using namespace std;

int main(){


char c;
     
    cout<<"Enter any character :";
    
    cin>>c;
        
    //checking for vowels	
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
    c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout << c << " is a vowel";  //condition true input is vowel
    }
    else
    {
        cout << c << " is a consonant";  //condition false input is consonant
    }



    return 0;
}