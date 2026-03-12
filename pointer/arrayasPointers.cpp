#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3] = {2,6,8};
    int *ptr = &arr[0];
    cout << ptr << arr << *ptr << *arr << endl;   
    cout<< *(arr+0) << " "<< *(arr+1) << " " << *(arr+2)<< endl;
     
}