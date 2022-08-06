class Solution {
public:
void rotate(vector<int>& nums, int k) {

    int size = nums.size();
    
    vector<int> result(size);
    
    for(int i=0; i<size; i++){
        result[(i+k)%size] = nums[i];
    }
    
    nums=result;
}
};