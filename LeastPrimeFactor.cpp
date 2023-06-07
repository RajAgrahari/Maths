//https://practice.geeksforgeeks.org/problems/least-prime-factor5216/1
int find_prime(int n)
   {
        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            if((n%i) == 0)
            {
                return i;
            }
        }
        if (n > 2)
        return n;
       
   }
    vector<int> leastPrimeFactor(int n) 
    {
        vector<int> ans;
    //   vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        for(int i=2;i<=n;i++)
        {
            if((i&1) == 0)
            ans.push_back(2);
            else{
                ans.push_back(find_prime(i));
            }
        }
        return ans;
        
    }
