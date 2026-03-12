#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    float b = 7.5;
    cout << &a <<endl;
    cout << &b <<endl;
    int *ptr = &a;
    float *ptr2 = &b;
    cout << ptr << endl;
    cout << ptr2 << endl;

    // we can use *ptr to actually access the value stored on the address pointed to ptr
    // dereference pointer  
    cout << *ptr << endl;

    a = 23;
    cout << *ptr << endl;

    *ptr = 45;
    cout << *ptr << endl;
    

}