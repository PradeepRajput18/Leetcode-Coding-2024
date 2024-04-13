class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x<=9) return true;

        long long num=0;
        int temp=x;
        while(temp){
            num=(num*10)+(temp%10);
            temp=temp/10;
            
        }

        return num==x;
    }
};