#include<bits/stdc++.h>
using namespace std;

// print all the subsequences of the given array
void printf(int ind, vector<int> &ds, int arr[], int n){
    if(ind == n){
        for(auto it:ds){
            cout << it << " ";
        }
        if(ds.size() == 0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    ds.push_back(arr[ind]);
    printf(ind+1, ds, arr,n);
    ds.pop_back();
    printf(ind+1, ds, arr, n);
}

//print all the subsequences of the given array whose sum is equal to k
void printSum(int i, vector<int> &ds, int arr[], int n, int sum, int s){
    if(i == n){
        if(s == sum){
            for(auto it:ds){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    printSum(i+1, ds, arr, n, sum,s);

    ds.pop_back();
    s -= arr[i];
    printSum(i+1, ds, arr, n, sum, s);
}

//count the number of subsequences of the given array whose sum is equal to k
int printCount(int i, int arr[], int n, int sum, int s){
    if(i == n){
        if(s == sum){
            return 1;
        }
        else return 0;
    }
    s += arr[i];
    int l = printCount(i+1, arr, n, sum,s);

    s -= arr[i];
    int r = printCount(i+1, arr, n, sum, s);

    return l+r;
}


int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    cout << printCount(0, arr, n ,sum,0);
}