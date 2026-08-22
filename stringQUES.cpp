// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter a string:";
//     cin>>str;
//     for(int i=0;i<str[i];i++){
//         cout<<str[i]<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string S1="\\n";  //using escape character
//     string S2="\\0";
//     cout<<S1<<endl;
//     cout<<S2;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    string str;
    int vowel=0,consonant=0;
    cout<<"enter a string:";
    cin>>str;
    for(int i=0;i<str[i];i++){
        cout<<str[i]<<endl;
    }
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
        ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            vowel++;
        }else if((ch >= 'a'&& ch <= 'z')||(ch >= 'A'&& ch <= 'Z')){
            consonant++;
        }
    }
    cout<<"vowel ="<<vowel<<endl;
    cout<<"consonant="<<consonant<<endl;
    return 0;
}

