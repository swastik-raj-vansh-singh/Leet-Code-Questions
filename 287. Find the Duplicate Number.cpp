class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int i=0;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
               return nums[i]; 
            }
        }
        return 0;

        int ans = -1;

        for(int i = 0 ; i<nums.size();i++){
            int index = abs(nums[i]);

            if(nums[index] < 0){
               ans = index;
               break;
            }
            nums[index] *= -1;
        }
        return ans;



// 2nd method
        // sort(nums.begin(),nums.end());

        // for(int i = 0 ; i<nums.size();i++){
        //     if(nums[i] == nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return 0;
        }
};