class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for(int i=1;i<=n;i++){
            
            v.push_back(i%15==0?"FizzBuzz":(i%3==0?"Fizz":(i%5==0?"Buzz":to_string(i))));
        }


        return v;
    }
};