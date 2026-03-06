#include<bits/stdc++.h>
using namespace std;

//left rotate an array by d positions
// brute force approach
int leftRotate(int arr[], int n, int d){

    //store in temp array
    int temp[d];
    for (int i=0; i<d; i++){
        temp[i] = arr[i];
    }    

    //shifting of the original array by d places
    for (int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    //put back the temp array
    for (int i=n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }
}

int rightRotate(int arr[], int n, int d){
    int temp[d];
    for (int i=0; i<d; i++){
        temp[i] = arr[n-d+i];
    }

    for (int i=n-1; i>=d; i--){
        arr[i] = arr[i-d];
    }

    for (int i=0; i<d;i++){
        arr[i] = temp[i];
    }
}

//union of two sorted arrays
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n1 = a.size();
        int n2 = b.size();
        vector<int> unionArr;
        int i =0;
        int j=0;
        
        while (i<n1 && j<n2){
            if(a[i] <= b[j]){
                if(unionArr.size() == 0 || unionArr.back() != a[i]){
                    unionArr.push_back(a[i]);
                }
                i++;
            }
            else{
                 if(unionArr.size() == 0 || unionArr.back() != b[j]){
                    unionArr.push_back(b[j]);
                }
                j++;
            }
        }
        while (i<n1){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                    unionArr.push_back(a[i]);
            }
            i++;
        }
        while (j<n2){
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                    unionArr.push_back(b[j]);
            }
            j++;
        }
        return unionArr;
    }
};




int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    //rightRotate(arr, n, d);
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);


    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
