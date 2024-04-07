
// Extra space approach
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        
        if(k==n) return;
        
        k=k%n;


        vector<int> ans(n,0);
        int j=0;
        for(int i=n-k;i<n;i++,j++){
             ans[j]=nums[i];
        }

        for(int i=0;i<n-k;i++,j++){
            ans[j]=nums[i];
        }

        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }

        return;
    }
};