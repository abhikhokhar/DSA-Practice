#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
    int didswap =0;
    for (int i = n-1; i >= 0; i--){
        for (int j = 0; j<=i-1;j++){
            if( arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        }
        if (didswap == 0) break;
        cout << "run" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bubble(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;

}