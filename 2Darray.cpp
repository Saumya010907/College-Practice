// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter number of rows :";
//     cin>>m;
//     cout<<"enter number of columns:";
//     cin>>n;
//     int arr[10][10];
//     cout<<"enter matrix elements1:\n";
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"matrix is :\n"<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<endl;
//         }
//     }
//     return 0;
// }

//SUM OF ELEMENTS OF MATRIX

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"number of rows and columns:";
//     cin>>m>>n;
    
//     int arr[10][10];
    // cout<<"enter matrix elements:\n";
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }
//     cout<<"sum of elements is \n";
//     int sum=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             sum=sum+arr[i][j];
//         }
//     }
//     cout<<"sum="<<sum<<endl;
//     return 0;

// }

//SUM OF ROW ELEMENTS

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows and column:";
    cin>>m>>n;

    int arr[10][10];
    cout<<"enter matrix elements:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //sum of row elements
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
        cout<<"sum of row elements is="<<sum<<endl;
    }
    return 0;
}






