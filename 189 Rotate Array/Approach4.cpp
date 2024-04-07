// removed the swap function here any one can update want to improve problem

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        
        if(k==n || k==0) return;
        
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

        return;
    }
};