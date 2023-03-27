class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int sum=0,usum=0;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                sum++;
                usum=max(sum,usum);
                
            }
            else
            {
                sum=0;
            }
        }
        return usum;
    }
};
