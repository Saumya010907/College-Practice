#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    for(int i=0;i<size-1;i++){
        if(arr[i+1]>arr[i]){
        cout<<"array is rotated sorted"<<endl;}
    
    else{
    cout<<"Array not  rotated sorted"<<endl;
        }
    }
    return 0;
}