//https://leetcode.com/problems/check-if-it-is-a-straight-line/description/
bool checkStraightLine(vector<vector<int>>& cd) 
    {
        int n = cd.size();
        double dy = double(cd[1][1]-cd[0][1]);
        double dx = double(cd[1][0]-cd[0][0]);
        int f = 0;
        if(dx==0)
        f=1;
        if(dy==0)
        f=2;
        double m;
        if(f==0)
        m = double(cd[1][1]-cd[0][1])/double(cd[1][0]-cd[0][0]);
        
        for(int i=1;i<n;i++)
        {
            double dy1 = double(cd[i][1]-cd[0][1]);
            double dx1 = double(cd[i][0]-cd[0][0]);
            if(f==0)
            {
                if(m != (dy1/dx1))
                return false;
            }
            else if(f==1)
            {
                if(dx1!=0)
                return false;
            }
            else if(f==2)
            {
                if(dy1!=0)
                return false;
            }
            
        }
        return true;

    }
