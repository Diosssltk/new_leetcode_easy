class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t k = 0, num = 1;
        while(num <= 32){
            if(k == 0)
                k = n & 1;
            else
                k = (k << 1) | (n & 1);
            n >>= 1;
            num++;
        }
        return k;
        
    }
};//之前没接触过这种运算，<<, &, |,总之方法很简单就是运算符要知道