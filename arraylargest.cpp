#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,3,4,6,7,5};
    int largest=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"largest element is"<<largest;
    return 0;
}
