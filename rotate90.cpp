#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows and columns:";
    cin>>m>>n;
    int arr[10][10];
    cout<<"matrix element is:";
    for(int i=0;i<m;i++){
        fot(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Array rotate 90 degree:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}