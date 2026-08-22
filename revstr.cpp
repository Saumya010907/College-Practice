#include<iostream>
using namespae std;
int main(){
   string str;
    cout<<"enter a string:";
    getline(cin,str);
    cout<<str;
    string rev;
    for(int i=str.length()-1;i>=0;i--){
        
        rev=rev+str[i];
    }
    return 0;
}


