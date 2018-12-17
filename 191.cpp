class Solution {
public:
	int hammingWeight(int n) {
		int count = 0;
		while(n != 0) {
			n = n & (n - 1);
			count++;
		}
		return count;
	}
};
//这个方法很神奇 
//x & x - 1每次会把一个二进制位消去