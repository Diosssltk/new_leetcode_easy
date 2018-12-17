//很明显的贪心？当初讲过上课选择的问题，选择最多的课程，不可重叠时间线选择
//本题更加简单，因为时间线本身就不重叠，那就可以直接选择有收益的加起来就行了
//画图有益于理解，折线图，绘制价格，你会发现不管如何选择路径，贪心算法都完美解决
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if(prices.size() <= 1) return 0;
		int sum = 0;
		for(int i = 0; i < prices.size() - 1; i++)
			if(prices[i + 1] - prices[i] > 0) 
				sum += (prices[i + 1] - prices[i]);
		return sum;
	}
};