#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[2] = {1,19}; 
    int *ptr = &arr[0];
    cout << ptr <<" " << *(ptr+1) << endl;
    cout << (*ptr)++ << endl; //it will first return the value at ptr and then increment the value by 1
    cout << arr[0] << endl;
    cout << *ptr++ <<" "<< endl; //+1 address of ptr after returning the value at ptr address
    cout << *ptr <<endl; //now it will return the value at address (ptr+1) i.e. 19

    int nums[2] = {5,8};
    int *ptr2 = &nums[0];
    cout << ++*ptr2 << endl; //first increment the value at ptr2 and then return the value at ptr2 address
    cout <<*++ptr2 << endl; // first increment the address the return value at (ptr+1)
    
}