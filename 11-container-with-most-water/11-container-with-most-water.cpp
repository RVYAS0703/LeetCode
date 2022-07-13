class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int n=height.size();
        int maxArea=0;
        int i=0;
        int j=n-1;
        while(i<j)
        {
            maxArea=max(maxArea,min(height[i],height[j])*(j-i));
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxArea;
    }
};