int findKthPositive(vector<int>& arr, int k) {
        
        int num = 1,index = 0,n = arr.size();
        while(index < n)
        {
            if(k==0)
                return (num-1);
            if(num == arr[index])
                index++;
            else
                k--;
            num++;
        }
        return (num+k-1);
}
