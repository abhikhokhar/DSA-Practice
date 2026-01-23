#include<bits/stdc++.h>
using namespace std;

int main(){
    // Simple Hashing Example: Frequency Count of Numbers in a Given Range
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i=0; i < n; i++){
    //     cin >> arr[i];
    // }

    // pre compute
    // int hash[13] = {0};
    // for (int i=0; i<n; i++){
    //     hash[arr[i]]+=1;
    // }

    // int q;
    // cin >> q;
    // while (q--){
    //     int number;
    //     cin >> number;
    //     //fetch
    //     cout << hash[number] << endl;
    // }

    //frequency count of characters
    // string s;
    // cin >> s;
    
    //this only for lowercase letters
    // pre compute
    // int hash[26] = {0};
    // for (int i=0;i<s.size();i++){
    //     hash[s[i] - 'a']++;
    // }
    // int q;
    // cin >> q;
    // while(q--){
    //     char c;
    //     cin >> c;
    //     //fetch
    //     cout << hash[c - 'a'] << endl;
    // }

    //for all characters
    //pre count 
    // int hash[256] = {0};
    // for (int i=0; i<s.size();i++){
    //     hash[s[i]]++;
    // }

    // int q;
    // cin >> q;
    // while(q--){
    //     char c;
    //     cin >> c;
    //     cout << hash[c] << endl;
    // }

    //Hashing using map
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }    
    //pre compute
    map<int , int> mpp;
    for (int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for (auto it: mpp){
        cout << it.first << "=>" << it.second << endl;
    }

    int q;
    cin >> q;
    while (q--){
        int num;
        cin >> num;
        //fetch
        cout << mpp[num] << endl;
    }

}
