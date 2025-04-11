// 2 sum

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for(int i=0;i<nums.size;i++){
                for(int j=0;j<nums.size();j++){
                    return{i,j};
                }
            }
            return{};
            
        }
    };

// Longest Consecutive Sequence

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

    // merge two intervals

    class Solution {
        public:
            vector<vector<int>> merge(vector<vector<int>>& intervals) {
                sort(intervals.begin(), intervals.end());
        
                vector<vector<int>> merge;
        
                for(auto i: intervals){
                    if (merge.empty() or merge.back()[1]< i[0]){
                        merge.push_back(i);
                    }
                    else{
                        merge.back()[1] = max(merge.back()[1], i[1]);
                    }
                }
                return merge;
            }
        };

// Roman to interger

class Solution {
    public:
        int romanToInt(string s) {
            int total = 0;
            int prev = 0;
    
            for (char c:s){
                int cur=0;
                switch(c){
                    case 'I':cur =1;break;
                    case 'V':cur =5;break;
                    case 'X':cur =10;break;
                    case 'L':cur =50;break;
                    case 'C':cur =100;break;
                    case 'D':cur =500;break;
                    case 'M':cur =1000;break;
    
                }
    
                if(cur>prev){
                    total+=(cur-2*prev);
                }
                else{
                    total+=cur;
                }
                prev = cur;
    
            }
            return total;
        }
    };

    // string to integer

    #include <string>
#include <climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, len = s.length();

        while (i < len && s[i] == ' ') {
            i++;
        }

        int sign = 1;
        if (i < len && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        int num = 0;
        while (i < len && isdigit(s[i])) {
            if (num > (INT_MAX - (s[i] - '0')) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            num = num * 10 + (s[i] - '0');
            i++;
        }

        return num * sign;
    }
};


    
    
    
    
    
    
    
    
    
    