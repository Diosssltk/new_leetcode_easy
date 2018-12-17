class Solution {
public:
	bool isPalindrome(string s) {
		vector<char> s1;
		for(int i = 0; i < s.size(); i++) {
			if((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
				if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32; 
				s1.push_back(s[i]);
			}
		}
		for(int i = 0; i < s1.size() / 2; i++)
			if(s1[i] != s1[s1.size() - i - 1]) return false;
		return true;
	}
};
//没什么可说的，，，，就是很暴力的算法