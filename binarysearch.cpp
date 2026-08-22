#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int size=8;
    int found=0;
    int  i,low=0,high=size-1;
    int target=40; 
   
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            found=1;
            cout<<"element found at index"<<mid<<endl;
            break;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
   
    }

    return 0;

}