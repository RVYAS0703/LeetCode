class Solution {
public:
    void swap(vector<int> &v,int s,int e)
    {
    int temp=v[s];
    v[s]=v[e];
    v[e]=temp;
    }
    void reverse (vector<int>&v,int s,int e )
    {
    while(s<e)
      {
        swap(v,s,e);
        s++;
        e--;
      }
    }
    void rotate(vector<int>& v, int k) {

    int n=v.size();
    k = k % n; // if we have let's say 101 to rotate, then we only rotate it 1 time not 101 times
        if(k < 0){ // if we get -ve value, then -ve is just equals to it's -ve + array.length
            k += n;
        }
    reverse(v,0,n-k-1);
    reverse(v,n-k,n-1);
    reverse(v,0,n-1);
    }
};