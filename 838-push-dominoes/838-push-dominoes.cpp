class Solution {
public:
	string pushDominoes(string a) {
		int n=a.size();
		vector<int>l(n,0),r(n,0);
		bool found=false;
		
		// Find the distance from previous R
		for(int i=0;i<n;i++){
			if(a[i]=='R'){
				found=true;
			}
			else if(a[i]=='.' && found){
				r[i]=1+r[i-1];
			}
			else if(a[i]=='L'){
				found=false;
			}
		}
		found=false;
		
		// Find the distance from next L
		for(int i=n-1;i>=0;i--){
			if(a[i]=='L'){
				found=true;
			}
			else if(a[i]=='.' && found){
				l[i]=1+l[i+1];
			}
			else if(a[i]=='R'){
				found=false;
			}
		}
		
		// Shortest one will be your ans
		for(int i=0;i<n;i++){
			if(l[i]==r[i]) continue;
			else if(l[i]>r[i] && r[i]!=0) a[i]='R';
			else if(l[i]<r[i] && l[i]!=0) a[i]='L';
			else if(r[i]==0) a[i]='L';
			else if(l[i]==0) a[i]='R';
		}
		return a;
	}
};