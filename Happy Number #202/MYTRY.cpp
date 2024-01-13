class Solution {
public:
    int sum(int n){
        int sum=0;

        while(n){
            int temp=n%10;
            sum+=(temp*temp);
            n=n/10;
        }

        return sum;
    }

    bool isHappy(int n) {
        if(n==7){
            return true;
        }

        while(n>9){
            n=sum(n);
            if(n==7) return true;
        }

        return n==1;
    }
};