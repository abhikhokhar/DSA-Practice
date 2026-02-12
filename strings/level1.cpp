#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &str){
    sort(str.begin(), str.end());
    string s1 = str[0];
    int i=0;
    string s2 = str[str.size()-1];
    string ans = "";
    while(i<s1.length() && j< s2.length()){
        if(s1[i] == s2[i]){
            ans += s1[i];
            i++;
        }
        else{
            break;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "No. of strings to enter : ";
    cin >> n;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    cout << "longest common prefix : " << longestCommonPrefix(str) << endl;
    
}