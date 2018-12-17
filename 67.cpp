class Solution {
public:
	string addBinary(string a, string b) {
		bool flag = false;
		int a_size = a.size();
		int b_size = b.size();
		string new_string = ""; 
		int l_size;
		a_size > b_size ? l_size = a_size : l_size = b_size;
		if (a_size == 1 && b_size == 1) {
			if (a[0] == '1' && b[0] == '1') return "10";
			else if (a[0] == '0' && b[0] == '0') return "0";
			else return "1";
		}
		for (int i = 0;i < l_size;i++) new_string += "0";
		for (int i = 0,j = a_size - 1;j >= 0;i++,j--) 
			new_string[l_size - i - 1] += (a[j] - '0');
		for (int i = 0,j = b_size - 1;j >= 0;i++,j--) 
			new_string[l_size - i - 1] += (b[j] - '0');
		for (int i = l_size - 1;i >= 0;i--) {
			if (new_string[i] > '1') {
				new_string[i] = ((new_string[i] - '0') % 2) + '0';
				if (i != 0) new_string[i - 1]++;
				else flag = true;
			}
		}
		if (flag) {
			new_string += "0";
			for (int i = new_string.size() - 2;i >= 0;i--) 
				new_string[i + 1] = new_string[i];
			new_string[0] = '1';
		}
		return new_string;
	}
};