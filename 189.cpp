class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k==0)
            return ;
            
        reverseString(nums,0,n-k-1);
        reverseString(nums,n-k,n-1);
        reverseString(nums,0,n-1);
    }
    void reverseString(vector<int>& nums,int from,int to)
    {
        while(from<to)
        {
            int temp=nums[from];
            nums[from++]=nums[to];
            nums[to--]=temp;
        }
    }
};

//思路很简单，三步反转//时间复杂度是O(n)