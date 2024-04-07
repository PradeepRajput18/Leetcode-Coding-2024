
// using in built libraries
class Solution {
public:
    void swap(int& a,int &b){
        a=a^b;
        b=a^b;
        a=a^b;
        return;
    }
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