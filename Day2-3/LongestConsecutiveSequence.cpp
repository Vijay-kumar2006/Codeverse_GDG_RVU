class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            int maxlen=0;
    
            unordered_set<int> number{nums.begin(), nums.end()};
    
            for(int num:number){
                if(number.contains(num-1))
                continue;
                int curr = 0;
                while(number.contains(num++))
                    curr++;
                maxlen = max(maxlen, curr);
            }
            return maxlen;
        }
    };