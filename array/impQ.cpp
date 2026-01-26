#include<bits/stdc++.h>
using namespace std;

int main(){
    //longest subbarray with sum k
    //brutte force approach
    int arr[] = {1,2,1,1,1,5,3};
    int k = 3;
    int len =0;
    for (int i=0;i<8;i++){
        int s = 0;
        for (int j=i; j<8; j++){
            s = s+ arr[j];
             
            // for (int k = i; k<=j; k++){
            //     s = s + arr[k];
            // }
            if (s == k){
                len = max(len, j-i+1);
            }
        }
    }
    cout << len;

}