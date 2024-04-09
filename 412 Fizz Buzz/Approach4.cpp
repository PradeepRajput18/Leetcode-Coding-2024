class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for(int i=1;i<=n;i++){
            
           i%15==0?v.push_back("FizzBuzz"):
           i%3==0?v.push_back("Fizz"):
           i%5==0?v.push_back("Buzz"):

           v.push_back(to_string(i));

        }


        return v;
    }
};