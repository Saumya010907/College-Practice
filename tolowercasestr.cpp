#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string:";
    getline(cin,str);
     cout<<str;
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
    }
    cout<<"  lower case   "<<str<<endl;
    return 0;
}
