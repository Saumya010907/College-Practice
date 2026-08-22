#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter element to insert:";
    cin>>x;
    int pos;
    cout<<"enter position:";
    cin>>pos;
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=x;
    n++;
    cout<<"Array after insertion:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}