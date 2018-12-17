class Solution {
public:
    int climbStairs(int n) {
    	vector<int> s;
    	int methods;
    	methods = climb(n);
    	return methods;
    }
    int climb(int n) {
    	if (n == 1) return 1;
    	if (n == 2) return 2;
    	vector<int> s;
    	s.push_back(1);
    	s.push_back(2);
    	for (int i = 2;i < n;i++) s.push_back(s[i-1]+s[i-2]);
    	return s[s.size() - 1];
    }
};
// class Solution {
// public:
// 	int climbStairs(int n) {
// 		int methods;
// 		methods = climb(n);
// 		return methods;
// 	}
// 	int climb(int n) {
// 		if (n == 1) return 1;
// 		if (n == 2) return 2;
// 		return climb(n - 1) +climb(n - 2);
// 	}
// };