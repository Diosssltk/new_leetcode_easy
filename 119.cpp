class Solution { 
public: 
    vector<int> getRow(int rowIndex) { 
        vector<int> ans(1,1); 
        for(int k=1;k<=rowIndex;++k) 
            ans.push_back((long long)ans.back()*(rowIndex+1-k)/k); 
        return ans; 
    } 
};
//真是看不懂的操作。。。。。。。可怕