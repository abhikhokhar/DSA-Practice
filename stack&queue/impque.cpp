// to find next greater element
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> sufix(n);
        vector<int> prefix(n);

        prefix[0] = height[0];
        for(int i=1;i<n;i++){
            prefix[i] = max(prefix[i-1], height[i]);
        }

        sufix[n-1] = height[n-1];
        for(int i = n-2; i>=0; i--){
            sufix[i] = max(sufix[i+1], height[i]);
        }

        int total = 0;
        for(int i=0; i<n;i++){
            total += min(sufix[i], prefix[i]) - height[i];
        }
        return total;
    }
};

//astroid collision
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(asteroids[i] > 0) st.push(asteroids[i]);
            else{
                while(!st.empty() && st.top()>0 && st.top()< abs(asteroids[i])){
                st.pop();
                }
                if(!st.empty() && st.top() == abs(asteroids[i])){
                    st.pop();
                }
                else if(st.empty() || st.top() < 0){
                    st.push(asteroids[i]);
                }
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};