class Solution {

public:
    vector<int> majorityElement(vector<int>& v) {
        int num1=INT_MIN,num2=INT_MIN,cnt1=0,cnt2=0;

  for(int el:v){
    if(el==num1) cnt1++;

    else if (el==num2) cnt2++;

    else if(cnt1==0){
      num1=el;
      cnt1++;
    }
    else if(cnt2==0){
      num2=el;
      cnt2++;
    }

    else{
      cnt1--;
      cnt2--;
    }
  }

  vector<int>ans;
  cnt1=cnt2=0;
  for(int i=0;i<v.size();i++)
    {
      if(v[i]==num1) cnt1++;

      if(v[i]==num2) cnt2++;
    }

  if(cnt1>v.size()/3){
    ans.push_back(num1);
  }
  if(cnt2>v.size()/3){
    ans.push_back(num2);
  }
        
        return ans;
    }
};
    