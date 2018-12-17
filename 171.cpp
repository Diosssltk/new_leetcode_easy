class Solution {
public:
	int titleToNumber(string s) {
		int interesting = 0;
		for(int i = s.size() - 1; i >= 0; i--) {
			if(i < s.size() - 1) interesting += ((int)(s[i] - 'A') + 1) * pow(26,s.size() - i - 1);
			else interesting += (int)(s[i] - 'A') + 1;
		}
		return interesting;
	}
};