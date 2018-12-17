class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		for (int i = digits.size() - 1;i >= 0;i--) {
			digits[i]++;
			if(digits[i] == 10) digits[i] = 0;
			else break;
		}
		if (digits[0] == 0) {
            digits.resize(digits.size() + 1);
            for (int i = digits.size() - 1;i >= 0;i--) digits[i + 1] = digits[i];
		    digits[0] = 1;
        }
        return digits;
	}
};
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//     int sz  = digits.size();
//     int sum = 0;
//     std::vector<int> result;
//     std::vector<int>::iterator itb;
//     int remainder = 1;
//     itb = result.begin();    
//     for(int i = sz - 1; i >= 0 ; --i){
//         result.insert(itb,(digits[i] + remainder)%10);
//         itb = result.begin();
//         if(digits[i]+remainder >= 10) remainder = 1;
//         else remainder = 0;
//     }
//     if(remainder){
//        result.insert(itb,remainder);  
//     }
//     return result;
//     }
// };