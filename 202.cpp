class Solution {
public:
    bool isHappy(int n){
        map<int, int> int_map;
        if (n==1) {
            return true;
        }
        int sum = 0;
        while (n != 1) {
            int_map.insert(pair<int , int>(n, n));
            sum = countN(n);
            if (sum ==1) {
                return true;
            }
            if(int_map.count(sum))
                return false;
            n = sum;
        }
        return true;
    }
     int countN(int n){
        int tmp = n;
        int sum = 0;
        while (tmp > 0) {
            int result = tmp % 10;
            sum += result * result;
            tmp = tmp /10;
        }
        return sum;
    }
};

//需要记录下无心循环的 ，，不是很理解这类题目，，