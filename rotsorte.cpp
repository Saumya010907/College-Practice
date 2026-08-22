#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout<<"enter size of an array:";
    cin>>n;
    cout<<"enter elements of an array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n]){
            count++;
        }
    }
if(count<=1){
    cout<<"array is rotated sorted."<<endl;
}
else{
    cout<<"array not  rotated sorted."<<endl;
}
return 0;
}