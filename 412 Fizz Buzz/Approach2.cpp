class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        int fizz=0;
        int buzz=0;
        for(int i=1;i<=n;i++){
            fizz++;
            buzz++;
            if(fizz==3 and buzz==5){
                v.push_back("FizzBuzz");
                fizz=buzz=0;
            }else if(fizz==3){
                v.push_back("Fizz");
                fizz=0;
            }else if(buzz==5){
                v.push_back("Buzz");
                buzz=0;
            }else{
                v.push_back(to_string(i));
            }
        }


        return v;
    }
};