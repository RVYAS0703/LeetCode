class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
      int l=image.size();
      for(int i=0;i<l;i++)
      {
           reverse(image[i].begin(),image[i].end());
      }
      
      for(int i=0;i<l;i++)
      {
          for(int j=0;j<l;j++)
          {
              if(image[i][j]==0)
                  image[i][j]=1;
              else if(image[i][j]==1)
                  image[i][j]=0;
          }
      }
      return image;
    }
};