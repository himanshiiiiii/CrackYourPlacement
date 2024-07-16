class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      map<int,int>m;
        for(auto it:nums)
        {
            m[it]++;
        }
     nums={};
       for(auto i:m)
       {
           nums.push_back(i.first);
       }
        return nums.size();
    }
};