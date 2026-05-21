class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        
        int val;

      
        sort(nums.begin(),nums.end());
      if(n == 0)
            return 0;
      int current=1;
      int longest=1;
      for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            continue;
        }
        else if(nums[i]+1==nums[i+1]){
            current++;
        }
        
        else{
            current=1;
        }
        longest=max(current,longest);
       
      }  
      return longest;
    }
};
