Class Solution{
public:
    int maximumJumps(vector<int>& nums, int target){
        int i = 0, count = 0;
        int n = nums.size() -1 ;
        for(int j =0; j<=n - 1; ){
            if(abs(nums[i] - nums[j]) >= 0 && abs(nums[i] - nums[j]) <= target){
                 i =j;
                 count +=1;
            }
        }

        if (i == n - 1){
            return count;
        }
        else{
            return -1;
        }
    }
};