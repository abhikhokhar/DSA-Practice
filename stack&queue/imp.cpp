//sum ofsubarray minimun and maximum elements
// sum of subarray ranges
class Solution {
public:
    vector<int> findnge(vector<int> &arr){
        int n = arr.size();
        vector<int> nge(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            nge[i] = st.empty()? n: st.top();
            st.push(i);
        }
        return nge;

    }
    vector<int> findpge(vector<int> &arr){
        int n = arr.size();
        vector<int> pge(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] < arr[i]){
                st.pop();
            }
            pge[i] = st.empty()? -1: st.top();
            st.push(i);
        }
        return pge;

    }
    long long sumSubarrayMax(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge = findnge(arr);
        vector<int> pge = findpge(arr);
        long long total = 0;
        int mod = 1e9 + 7;
        for(int i =0;i<n;i++){
            int left = i - pge[i];
            int right = nge[i] - i;
            total = (total + (1LL * left * right * arr[i]));
        }   
        return total;
    }
    vector<int> findnse(vector<int> &arr){
        int n = arr.size();
        vector<int> nse(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            nse[i] = st.empty()? n: st.top();
            st.push(i);
        }
        return nse;

    }
    vector<int> findpse(vector<int> &arr){
        int n = arr.size();
        vector<int> pse(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            pse[i] = st.empty()? -1: st.top();
            st.push(i);
        }
        return pse;

    }
    long long sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse = findnse(arr);
        vector<int> pse = findpse(arr);
        long long total = 0;
        int mod = 1e9 + 7;
        for(int i =0;i<n;i++){
            int left = i - pse[i];
            int right = nse[i] - i;
            total = (total + (1LL * left * right * arr[i]));
        }   
        return total;
    }
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMax(nums) - sumSubarrayMins(nums);        
    }
};