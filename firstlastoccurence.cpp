#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    int low=0,high=size-1;
    int target;
    int found=0;
    cout<<"enter size of an array:";
    cin>>n;
    cout<<"enter elements of an array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
   while(low<=high){
    int mid=low+(high -low)/2;
     if(arr[mid]==target){
            found=1;
            cout<<"element found at index"<<mid<<endl;
            break;
        }
     else if(target>arr[low])&&(target<arr[mid]{
        high=mid-1;

    }
    else{
        low=mid+1;
    }

   }
   return 0;
}