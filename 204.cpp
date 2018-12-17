// class Solution {
// public:
// 	int countPrimes(int n) {
// 		if(n <= 1) return 0;
// 		int sum = 0;
// 		for(int j = 2; j < n; j++)
// 			if(isPrime(j))
// 				sum++;
// 		return sum;
// 	}

// 	// bool isPrime(int t) {
// 	// 	if(t == 2 || t == 3) return true;
// 	// 	if(t % 6 != 1 && t % 6 != 5) return false;
// 	// 	t = sqrt(t);
// 	// 	for(int i = 5; i <= t; i += 6)
// 	// 		if(t % i == 0 || t % (i + 2) == 0)
// 	// 			return false;
//  //        return true;
// 	// }
// 	bool isprime(int n) {
// 		if (n < 2) return false;
// 		if (n == 2) return true;
// 	    if(n %2 == 0) return false;
// 		int sq = sqrt(n);
// 		int len = prim_vec.size();
// 		for (int index=0; index<len;index++) {
// 	    	int tmp = prim_vec[index];
// 	    	if(tmp > sq) break;
// 			if (n % tmp == 0) return false;
// 	    }
// 		return true;
//     }
// };
class Solution {
public: 
     int countPrimes(int n) {
         int * mask=new int[n]();//能够在这里直接对动态数组进行初始化
         int count=0;
         for(int i=2;i<n;i++)
         {
             if(mask[i]==0)
             {
                 count++;
                 for(int j=2;i*j<n;j++)//这里不能将j初始化成i，否则i*j会溢出
                 {
                     mask[i*j]=1;
                 }
             }

         }
         return count;

     }
};

//没懂，，，，，，，，之前拿错了，，，，头大，不做了，，