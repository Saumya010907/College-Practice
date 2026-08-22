#include<iostream>
using namespace std;
int main(){
    int m,n;
       cout<<"enter number of rows and columns :";
    cin>>m>>n;
   
    int arr[10][10];
    cout<<"enter matrix elements1:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Column Major order  is :\n"<<endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    return 0;
}