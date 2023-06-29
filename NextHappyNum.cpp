//https://practice.geeksforgeeks.org/problems/next-happy-number4538/1
bool isHappy( int N )
    {
        if( N <= 9 && N != 1 && N != 7 ) return false ;
        
        if( N == 1 ) return true ;
        
        int sum = 0 ;
        
        while(N)
        {
            int r = N%10 ;
            N /= 10 ;
            sum = sum + r*r ;
        }
        
        return isHappy(sum) ;
    }
    int nextHappy(int N){
        // code here
        
        N++ ;
        
        while(!isHappy(N)) N++ ;
        
        return N ;
    }
