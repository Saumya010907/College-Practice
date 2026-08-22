#include<iostream>
using namespace std;
int main(){
    int sum=0,product=1;
    int arr[]={2,3,4,6,7,5};
    for(int i=0;i<6;i++){
        if (i%2==0){
            sum=sum+arr[i];
        }
        else{
            product=product*arr[i];
        }
        
    }

cout<<"sum is"<<sum<<"\n";
cout<<"product is"<<product<<"\n";
return 0;
} 