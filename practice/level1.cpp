#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){
    int largest = arr[0];
    int sLargest = -1;
    for (int i=0; i<n; i++){
        if (largest < arr[i]){
            sLargest = largest;
            largest = arr[i];
        }
        if (largest > arr[i] && sLargest < arr[i]){
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int sSmallest = INT_MAX;    
    for (int i=0; i<n; i++){
        if (smallest > arr[i]){
            sSmallest = smallest;
            smallest = arr[i];
        }
        if(smallest < arr[i] && sSmallest > arr[i] ){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}
int main(){
    // //print largest element of an array
    // int arr[] = {3,2,1,5,7};
    // int largest = arr[0];
    // for (int i=0; i<5; i++){
    //     if (largest < arr[i]){
    //         largest = arr[i];
    //     }
    // }
    // cout << largest;
    // //TC= O(N), which is better than O(NlogN)

    //Print second largest and second smallest element of an array
    //tc= O(n)
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // int sLargest = secondLargest(arr, n);
    // cout << "second largst element is : " << sLargest << endl;
    // int sSmallest = secondSmallest(arr,n);
    // cout << "second smallest element is : " << sSmallest;

    //left rotate an array by one position
    //tc O(n)
    //sc O(n)-  space we are using in the algorithm
    //sc O(1)- extra space we are using
    int arr[] = {3,5,7,2,8};
    int temp = arr[0];
    for (int i=1; i<5;i++){
        arr[i-1] = arr[i];
    }
    arr[4] = temp;
    for(int i=0; i<5;i++){
        cout << arr[i] << " ";
    }
}
 