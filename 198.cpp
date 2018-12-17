class Solution {
public:
	int rob(vector<int>& nums) {
		if(nums.size() == 0) return 0;
		if(nums.size() == 1) return nums[0];
		vector<int> s;
		s.push_back(nums[0]);
		s.push_back(max_hhh(nums[0], nums[1]));
		for(int i = 2; i < nums.size(); i++) {
			s.push_back(max_hhh(s[s.size() - 1], nums[i] + s[s.size() -2]));
		}
        return s[s.size() -1]; 
	}
	int max_hhh(int a, int b) {
		return a > b ? a : b;
	}
};

//简单的动态规划问题
//每次最值为：当前最值，之前最值加上当前值得出