class Solution {
public:
	int lengthOfLastWord(string s) {
		int count = 0;
		int last = 0;
		for (int i = 0;i < s.size();i++) {
			if ((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) last = i;
		}
		for (int i = 0;i < last + 1;i++) {
			if ((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) count++;
			else count = 0;
		}
		return count;
	}
};