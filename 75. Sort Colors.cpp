class Solution {
public:
    void sortColors(vector<int>& nums) {

        int start,mid,end;
        start=0;
        mid=0;
        end = nums.size()-1;

        while(mid <= end){

            if(nums[mid] == 0){
                swap(nums[start],nums[mid]);
                start++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
               swap(nums[mid],nums[end]);
                end --;
        }
        }

        // print the array
        // int countZeros = 0;
        // int countOne = 0;
        // int countTwo = 0;
        // for(int i = 0 ; i< nums.size(); i++){

        //     if(nums[i] == 0){
        //         countZeros++;
        //     }
        //     else if(nums[i] == 1){
        //         countOne++;
        //     }
        //     else if(nums[i]== 2){
        //         countTwo++;
        //     }
        // }

        // //print the answer
        // int i =0;
        // while(countZeros--){
        //     nums[i] = 0;
        //     i++;
        // }
        //  while(countOne--){
        //     nums[i] = 1;
        //     i++;
        // }
        //  while(countTwo--){
        //     nums[i] = 2;
        //     i++;
        // }
    }
};