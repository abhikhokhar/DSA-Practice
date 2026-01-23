#include<bits/stdc++.h>
using namespace std;

//count digit
// void countDigit(int n){
//     int count = 0;
//     while(n>0){
//         int lastDigit = n % 10;
//         count = count+1;
//         n= n/10;
//     }
//     cout << count;
// }

//reverse a number
// void reverseNumber(int n){
    //   int revNum = 0;

    //     while (n != 0) {
    //         int digit = n % 10;
    //         n /= 10;

    //         // overflow check
    //         if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
    //             return 0;

    //         revNum = revNum * 10 + digit;
    //     }

    //     cout << revNum;

// }

// bool isPalidrone(int n){
//     int revNum = 0;
//     int originalNo = n;

//         while (n != 0) {
//             int digit = n % 10;
//             n /= 10;

//             // overflow check
//             if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
//                 return false;

//             revNum = revNum * 10 + digit;
//         }
//         if (revNum == originalNo) return true;
//         return false;
// }

// void isArmstrong(int n){
//     int sum = 0;
//     while (n > 0){
//         int ld = n%10;
//         n= n/10;
//         sum = sum + (ld*ld*ld);
//     }    
//     cout << "armstrong number is : " << sum;
// }

// void divisors(int n){
//     vector <int> ls;
//     for (int i=1; i*i<=n;i++){
//         if  (n%i == 0){
//             ls.push_back(i);
//             if (n/i != i){
//                 ls.push_back(n/i);
//             }
//         }
//     }
//     sort(ls.begin(), ls.end());
//     for(auto it: ls){
//         cout << it << " ";
//     }
// }


// void isPrime(int n){
//     int count =0;
//     for (int i=1; i*i <= n; i++){
//         if (n%i == 0){
//             count++;
//             if (n/i != i) count++;
//         }
//     }
//     if ( count == 2) cout << "true";
//     else cout << "false";
// }

void gcd(int a, int b){
    while (a>0, b>0){
        if (a>b) a= a%b;
        else b= b%a;
    }
    if (a==0) cout << b;
    cout << a;
}


int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    gcd(a  , b);
    
}
