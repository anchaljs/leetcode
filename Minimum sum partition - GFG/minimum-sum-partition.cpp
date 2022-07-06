// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  vector<bool> subset(int arr[],int n,int s){
      bool dp[n+1][s+1];
      vector<bool>v;
      for(int i=0;i<n+1;i++){
          for(int j=0;j<s+1;j++){
              if(i==0){
                  dp[i][j]=false;
              }
              if(j==0){
                  dp[i][j]=true;
              }
          }
      }
      for(int i=1;i<n+1;i++){
          for(int j=1;j<s+1;j++){
              if(arr[i-1]<=j){
                  dp[i][j]=(dp[i-1][j] || dp[i-1][j-arr[i-1]]);
              }
              else{
                  dp[i][j]=dp[i-1][j];
              }
          }
      }
          for(int j=0;j<s+1;j++){
              v.push_back(dp[n][j]);
          }
          
      return v;
  }
	int minDifference(int arr[], int n)  { 
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    vector<bool>check;
	   
	    int s=sum/2;
	    int ans=0;
	     check=subset(arr,n,s);
	     for(int i=check.size()-1;i>=0;i--){
	         if(check[i]==true){
	             ans=i;
	             break;
	         }
	     }
	     int r=2*ans;
	     return (sum-r);
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends