class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x<=9) return true;

        long long num=0;
        int temp=x;
        int k=0;
        while(temp){
            temp=temp/10;
            k++;
        }
        temp=x;
        while(temp){
            int digit=temp%10;
            temp=temp/10;

            num+=(digit*pow(10,k-1));
            k--;
            
        }

        cout<<num;

        return num==x;
    }
};


// done recording