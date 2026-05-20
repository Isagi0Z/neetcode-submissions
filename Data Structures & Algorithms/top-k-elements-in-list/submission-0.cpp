class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int>mp;
     vector<int> ans;
     for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
     }  
     priority_queue<pair<int,int>> pq;
     for(auto ele:mp){
        pq.push({ele.second,ele.first});
     }
     while(k!=0){
        int val=pq.top().second;
        ans.push_back(val);
        pq.pop();
        k--;
     }
     return ans;
    }
};
