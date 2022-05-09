class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        int max=0;
        vector<bool> solution;
       
        for(int i = 0; i < candies.size(); i++)
        {
          if(candies[i] > max)
            max = candies[i];
        }
   
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] + extraCandies >= max)
            solution.push_back(true);
            else
            solution.push_back(false);
        }
    return solution;
    }
};