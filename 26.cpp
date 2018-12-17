class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		nums.erase(unique(nums.begin(),nums.end()),v.end());
		return nums.size();
	}
};