class Solution {
public:
	int majorityElement(vector<int>& nums) {
		if(nums.size() == 1) return nums[0];
		sort(nums.begin(), nums.end());
		int temp = 1;
		for(int i = 1; i < nums.size(); i++) {
			if(nums[i - 1] == nums[i]) {
				temp++;
				if(temp > nums.size() / 2) return nums[i];
			}
			else {
				temp = 1;
			}
		}
	}
};

//因为假定问题一定有解了，所以不用处理那些特殊情况