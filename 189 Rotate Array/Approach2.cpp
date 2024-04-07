class Solution {
public:
    void swap(int& a,int &b){
        a=a+b;
        b=a-b;
        a=a-b;
        return;
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        
        if(k==n) return;
        
        k=k%n;
        for(int i=0;i<n/2;i++){
             swap(nums[i],nums[n-i-1]);
        }

        for(int i=0;i<k/2;i++){
            swap(nums[i],nums[k-i-1]);
        }

        for(int i=k;i<(n+k)/2;i++){
            swap(nums[i],nums[n-(i-k)-1]);
        }

        return;
    }
};