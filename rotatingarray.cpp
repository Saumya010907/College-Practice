#include<iostream>
using namespace std;
int main(){
    int temp;
    int k=1;  //number of rotation
    int arr[]={1,2,3,4,5,6};
    int length=6;
    temp=arr[length-1];
    for(int i=length-1;i>0;i--){
        
        arr[i]=arr[i-1];
        
    }
       arr[0]=temp;
    cout<<"Array after rotating:"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
    
}
