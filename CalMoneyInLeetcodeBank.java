class Solution {
    public int totalMoney(int n) {
        int a = 28;
        int rem = (n%7);
        int q = (n/7);
        int ans = q*(2*a + (q-1)*7);
        ans = ans/2;
        a = q+1;
        ans += (rem*(2*a + (rem-1)))/2;
        return ans;
    }
}
