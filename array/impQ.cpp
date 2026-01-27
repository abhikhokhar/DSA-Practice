

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

    // 2 sum problem
    string read(int n, vector<int> book, int target)

    // Write your code here.
    sort(book.begin(), book.end());
    int left =0;
    int right = book.size()-1;
    while (left < right){
        int sum = book[left] + book[right];
        if( sum == target){
            return "YES";
        }
        else if(sum< target) left++;
        else right--;
    }
    return "NO";
}

//single number in a sorted array
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        for (int i=0; i<nums.size(); i++){
            xorr = xorr^nums[i];
        }        
        return xorr;
    }
};

//maximum consecutive ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 1){
                count++;
                maxi = max(count, maxi);
            }
            else{
                count = 0;
            }
        }
        return maxi;
        
    }
};

//moves zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }   
        if (j==-1) return;
        for(int i=j+1; i<n; i++){
            if (nums[i] != 0){
                swap(nums[j], nums[i]);
                j++;
            }
        }     
    }
};

//majority element
//moore voting algorithm
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int cnt =0;
        int el;
        for (int i=0; i<arr.size();i++){
            if (cnt == 0){
                 cnt=1;
            el = arr[i];
            }
            else if( arr[i] == el){
                cnt++;
            }
            else cnt--;
        }
        int cnt1=0;
        for(int i=0; i< arr.size();i++){
            if(arr[i] == el){
                cnt1++;
            }
        }
        if(cnt1>arr.size()/2){
            return el;
        }
        return -1;
    }
    
};

//sort an array of 0s, 1s and 2s
//dutch national flag algorithm
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int low=0, mid=0, high= arr.size()-1;
        while(mid<=high){
            if(arr[mid] == 0){
                swap(arr[mid], arr[low]);
                mid++;
                low++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};


