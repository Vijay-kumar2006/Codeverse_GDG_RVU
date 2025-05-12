class Solution {
public:
    // void bubblesort(vector<int>&arr){
    //     int n = arr.size();

    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n-i-1;j++){
    //             if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }
    int arrayPairSum(vector<int>& nums) {
        // bubblesort(nums);
        sort(nums.begin(), nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i+=2){
            sum+=nums[i];
        }        
        return sum;
    }
};