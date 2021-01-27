class Solution {
public:
    string decimalToBinary(int n) 
    { 
        string s = bitset<64> (n).to_string(); 
        const auto loc1 = s.find('1'); 
        if(loc1 != string::npos) 
            return s.substr(loc1); 
      return "0"; 
    } 
    
    int concatenatedBinary(int n) {
        
        int ans = 0;
        int mod = 1000000007;
        int val = 0;
        
        for(int i=1;i<=n;i++)
        {
            string binary = decimalToBinary(i);
            for(auto bit:binary)
            {   
                if(bit == '1')
                    val = 1;
                else
                    val = 0;
                ans = (((ans*2)%mod)+val)%mod;
            }
        }
        return ans;
    }
};
