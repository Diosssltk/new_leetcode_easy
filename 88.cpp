class Solution {
public:
	void merge (vector<int>& nums0, int m, vector<int>& nums1, int n) {
		vector<int> nums;
        int i = 0, j = 0, s0 = m, s1 = n;
        while(true) {
            if (s1 == 0) break;
            else if (s0 == 0) {
                for (int s = 0;s < s1;s++) nums0[s] = nums1[s];
                break;
            }
            if (nums0[i] <= nums1[j]) {
                nums.push_back(nums0[i]);
                i++;
                m--;
            }
            else if (nums0[i] > nums1[j]) {
                nums.push_back(nums1[j]);
                j++;
                n--;
            }
            if (m == 0) {
                while(n) {
                    nums.push_back(nums1[j]);
                    j++;
                    n--;
                }
            }
            else if (n == 0) {
                while (m) {
                    nums.push_back(nums0[i]);
                    i++;
                    m--;
                }
            }
            if (m == 0 && n == 0) {
                for (int s = 0;s < nums.size();s++) nums0[s] = nums[s];
                break;
            }
        }
	}
};