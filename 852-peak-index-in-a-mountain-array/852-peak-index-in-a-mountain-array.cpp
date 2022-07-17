class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int si=arr.size();
        int s=0;
        int e=si-1;
        while(s<e)
        {
            int m=s+(e-s)/2;
            if(arr[m]<arr[m+1])
            {
                s=m+1;
            }
            else if (arr[m]>arr[m+1])
            {
                e=m;
            }
        }
        return s;
    }
};