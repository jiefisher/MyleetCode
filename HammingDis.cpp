class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=0;
        x=x^y;
        for(int i=1;i<=32;i++)
        {
            res+=(x>>i)&1;
        }
        return res;
    }
};