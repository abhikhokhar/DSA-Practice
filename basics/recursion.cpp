#include<iostream>
using namespace std;


// int count = 0;
// void print(){
//     if (count == 5) 
//     return;
//     cout << "Abhi khokhar" << endl;
//     count++;
//     print();
// }

// void printN(int i, int n){
//     if (i > n)
//     return;
//     cout << i << endl;
//     printN(i+1, n);
// }

// void printNto1(int i, int n){
//     if (i==0)
//     return;
//     cout << i << endl;
//     printNto1(i-1, n);
// }

//backtracking- print 1 to n
void printN(int i, int n){
    if (i < 1)
    return;
    printN(i-1, n);
    cout << i << endl;
}
//backtracking- print n to 1
void printNto1(int i, int n){
    if (i>n)
    return;
    printNto1(i+1, n);
    cout << i << endl;
}

//print sum upto n 
void sum(int i, int result){
    if (i<1){
        cout << result;
        return;
    }
    sum(i-1, result+i);
}

//functional recursion to print sum upto n
int sumf(int n){
    if (n==0)
    return 0;
    return n + sumf(n-1);
}

//factorial of  a number
int factorial(int n){
    if (n == 1)
    return 1;
    return n*factorial(n-1);
}

//check if a string is palindrone or not 
//TC O(n/2)
//SC O(n/2)
bool f(int i, string &s){
    if (i > s.size()/2) return true;
    if (s[i] != s[s.size()-i-1])
    return false;
    return f(i+1,s);
}

//fibonacci number
int fibonacci(int n){
    if (n <= 1)
    return n;
    int last= fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last + slast;
}


int main(){
    int n;
    cin >> n;
    //printN(1,n);
    //printNto1(1,n);
    //sum(n, 0);
    //int result = sumf(n);
    //cout << "sum upto n terms is: " << result;
    // 
    // string s = "MADAM";
    // cout << f(0,s);
    int fib = fibonacci(n);
    cout << fib;
    return 0;
    
}