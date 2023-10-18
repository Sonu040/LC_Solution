class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         int n=nums.size();
         sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                long long newtarget=(long long)target-(long long)nums[i]-(long long)nums[j];
                int low=j+1,high=n-1;
                while(low<high){
                    if(nums[low]+nums[high]<newtarget){
                        low++;
                    }
                    else if(nums[low]+nums[high]>newtarget){
                        high--;
                    }
                    else{
                        v.push_back({nums[i],nums[j],nums[low],nums[high]});
                        int a=low,b=high;
                        while(low<high&&nums[a]==nums[low]) low++;
                        while(low<high&&nums[b]==nums[high]) high--;
                    }
                }
                while(j+1<n&&nums[j]==nums[j+1]) j++;
            }
             while(i+1<n&&nums[i]==nums[i+1]) i++;
        }
        return v;
    }
};