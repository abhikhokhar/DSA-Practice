#include<bits/stdc++.h>
using namespace std;

void swapInt(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int x=10;
    int y=20;
    int *ptrx  = &x;
    int *ptry = &y;
    swapInt(ptrx, ptry);
    cout << x << " " << y;
}