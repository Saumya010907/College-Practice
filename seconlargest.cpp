#include<iostream>
using namespace std;
int main(){
    int arr[8]={2,5,8,6,9,7,12,13};
    int largest=arr[0],secondlargest=arr[0];
    for(int i=1;i<8;i++){
        if(arr[i]>largest){
           secondlargest=largest;
           largest=arr[i];
        }
        else if(arr[i]==largest && arr[i]>secondlargest)
            secondlargest=arr[i];
        }
    
    cout<<"second largest is"<<secondlargest<<endl;
    return 0;
}
 