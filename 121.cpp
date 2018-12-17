// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int profit = -999999;

//         for(int i = 0;i < prices.size() - 1;i++) {
//         	for (int j = i + 1;j < prices.size();j++) {
//         		int temp = prices[j] - prices[i];
//         		if(temp > profit) profit = temp;
//         	}
//         }
//         if(profit <= 0) return 0;
//         return profit;
//     }
// };//超时，，真实，，，

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if(prices.size() < 1) return 0;
		int max = 0;
		int min = prices[0];
		for(int i = 0;i < prices.size();i++) {
			if(prices[i] < min) min = prices[i];
			else {
				if(max < prices[i] - min) max = prices[i] - min;
			}
		} 
		return max;
	}
};

//这个应该是叫做在线处理，当数组的不断更新买入价格，因为买入价格只要是比之前低，那么无论如何也比之前好
//若没有之前低，那看看当前的价格与之前的最低价差值是不是最大，如果变大就更新这个最大值