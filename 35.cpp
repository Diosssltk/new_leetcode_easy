class Solution {
public:
	int searchInsert(vector<int>& nums,int target) {
        int i;
        if (nums.size() == 1) {
        	if (nums[0] >= target) return 0;
        	else return 1;
        }
		for (i = 0;i < nums.size() - 1; i++) {
			if (nums[i] >= target) return 0;
			else if (nums[i] < target && nums[i+1] > target) return i + 1;
			if (nums[i] == target) return i;
			else if (nums[i+1] == target) return i + 1;
		}
		return i + 1;
	}
};