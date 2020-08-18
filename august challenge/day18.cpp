class Solution {
public:
    vector<int>ans;
    string value;
    int k,n;
    void backtrack(int digit,int cur,int value){
        
        if(digit > n)
            return;
        if(digit == n){
            ans.push_back(value);
            return ;
        }
        
        for(int i=0;i<10;i++){
            if(i==0 && digit ==0)
                continue;
            
            if(abs(cur-i) == k){
                value = value*10 + i;
                backtrack(digit+1,i,value);
                value/=10;
            }
        }
    }
    
    vector<int> numsSameConsecDiff(int N, int K) {
        value = "";
        k = K; n = N;
        ans.clear();
        for(int i=1;i<=9;i++)
            backtrack(1,i,i);
        if(n==1)
            ans.push_back(0);
        return ans;
    }
};
