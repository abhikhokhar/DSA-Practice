#include<iostream>
using namespace std;

// void pattern1(int n){
//     for (int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void pattern2(int n){
//     for (int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void pattern3(int n){
//     for(int i=1; i<n; i++){
//         for (int j=1; j<=i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void pattern4(int n){
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// void pattern5(int n){
//     for (int i=n-1; i>=0; i--){
//         for(int j=0; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void pattern6(int n){
//     for (int i=n; i>=1; i--){
//         for (int j=1; j<=i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void pattern7(){
//     for (int i=0;i<5;i++){
//         for (int j=5-i-1; j>0; j--){
//             cout << " ";
//         }
//         for (int k=1; k<=2*i+1;k++){
//             cout << "*";            
//         }
//         for (int l=5-i-1; l>0; l--){
//             cout << " "; 
//         }
//         cout << endl;
//     }
// }
// 

int main(){
    for (int i=1; i<=9; i++){
        int stars= i;
        if (i>5) stars = 10-i;
        for (int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}