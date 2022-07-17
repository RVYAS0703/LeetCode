class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int l=0,r=arr.size()-1;
        while(l<r)
        {
            int mid = (l+r)/2;
            if(arr[mid]<arr[mid+1] and arr[mid-1]<arr[mid])l=mid+1;
            else if(arr[mid]>arr[mid+1] and arr[mid-1]>arr[mid])r=mid;
            else return mid;
        }
        return -1;
    }
};