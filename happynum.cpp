#include<iostream>
using namespace std;
int main(){
    int n,digit,sum;
    cout<<"Enter a number:";
    cin>>n;
    

    while (n!=1 && n!=4){
        sum=0;
        while(n>0){
        digit=n%10;
        sum=sum+digit*digit;
        n=n/10;
       }
       n=sum;
    }
    if(n==1)
        cout<<"is a Happy Number";
    else
        cout<<"   is not a happy number";
    return 0;
}