#include<bits/stdc++.h>
using namespace std;
string sortString(string str){
    //tc O(n)
    vector<int> hash(26,0);
    for(int i=0;i<str.size();i++){
        int index = str[i] - 'a';
        hash[index]++;
    }
    int j = 0;
    for(int i=0;i<26;i++){
        while(hash[i]--){
            str[j] = i + 'a';
            j++;
        }
    }
    return str;
}

//check if two strigs are anagram or not
//tc- O(n)
//sc- O(26)- O(1) - constant space
bool isAnagram(string s1, string s2){
    vector<int> hash(26,0);
    if(s1.length() != s2.length()) return false;
    for(int i=0;i<s1.size();i++){
        hash[s1[i] - 'a']++;
        hash[s2[i] - 'a']--;
    }
    for(int i=0;i<26;i++){
        if(hash[i] != 0){
            return false;
        }
    }
    return true;
}
int main(){
    // string str;
    // cin >> str;
    //cout << sortString(str)<< endl;

    string s1, s2;
    cin >> s1 >> s2;
    if(isAnagram(s1,s2)){
        cout << "True";
    }
    else{
        cout <<"false";
    }
}