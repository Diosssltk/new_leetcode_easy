class Solution {
public:
	bool isValid(string s) {
		if (s.length() == 0) return true;
		if (s.length() < 2 ||s.length() % 2 == 1 || s[0] == '}' || s[0] == ']' || s[0] == ')')
			return false;
		stack<char>v;
		for (int i = 0;i < s.length(); i++) {
			if(s[i] == '(' ||s[i] == '[' || s[i] == '{') v.push(s[i]);
			if (s[i] == ')' || s[i] == '}' || s[i] ==']'){
				char temp = v.top();
				v.pop();
				if ((s[i] == '}' && temp == '{')||(s[i] == ')' && temp == '(') || (s[i] == ']' && temp == '['))
					continue;
				else
					return false;
			}
		}
		return v.empty();
	}
};