//Day 2
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> a;
        for(int i=0;i<n;i++)
            a[nums[i]]=0;
        for(int i=0;i<n;i++)
        {
            a[nums[i]]+=1;
            if(a[nums[i]]>1)
            return true;
        }
        return false;
    }
};
