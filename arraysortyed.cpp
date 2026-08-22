#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,5,6,8};
  
    int sorted=1;
    for(int i=0;i<5-1;i++){
        if(arr[i]>arr[i+1]){
            sorted=0;
            break;
        }
        }
    if(sorted){
        cout<<"array is sorted"<<"\n";
    }
    else{
        cout<<"array is unsorted"<<"\n";
    }
    
    return 0;
}