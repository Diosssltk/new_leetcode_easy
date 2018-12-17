class Solution {
public:
	int singleNumber(vector<int>& nums) {
		for(int i = 0; i < nums.size(); i++) {
			int e = nums[i];
			for(int j = 0; j < nums.size(); j++) {
              	e = e ^ nums[j];
			}
			if(e == 0) return nums[i];
		}
        return 0;
	}
};

//虽然并不是线性复杂度，，但还是解决了问题，，异或蛮好用的，，