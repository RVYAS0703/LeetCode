class Solution {
    
long long int binarySearch(int n)
{
    int s=0;
    int e=n;
    long long int ans=-1;
    while(s<=e)
    {
       long long int m=s+(e-s)/2;
        long long int sqr=m*m;
        if(sqr == n)
        {
            return m;
        }
        else if(sqr > n)
        {
            e=m-1;
        }
        else if(sqr <n)
        {
            ans=m;
            s=m+1;
        }
    }
    return ans;
}
public:
    int mySqrt(int x) {
        return binarySearch(x);
    }
};