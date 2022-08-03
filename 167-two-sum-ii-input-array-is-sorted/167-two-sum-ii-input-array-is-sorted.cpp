class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		vector<int> r;
		int i=0;
		int j=numbers.size()-1;
		while(i<j){
			if(numbers[i]+numbers[j]==target){
			 r.push_back(i+1);
			r.push_back(j+1);
			break;}
		else if(numbers[i]+numbers[j]>target)
			j--;
		else 
			i++;
		}
		return r;
	}
};