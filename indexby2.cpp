#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,6,9,11,10};
    for(int i=0;i<5;i++){
        arr[i]=arr[i]+2;
        cout<<arr[i]<<endl;
    }
return 0;
}