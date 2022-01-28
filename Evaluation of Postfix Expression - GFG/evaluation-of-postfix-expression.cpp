// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int>st;
        int ans=0;
        for(int i=0;i<S.length();i++){
            if(S[i]>='0' and S[i]<='9'){
                st.push(S[i]-'0');
            }
            else{
                char ch=S[i];
                int op1=st.top();
                st.pop();
                int op2=st.top();
                st.pop();
                switch(ch){
                    case '+':
                    ans=op1+op2;
                    break;
                     case '-':
                    ans=op2-op1;
                    break;
                     case '*':
                    ans=op1*op2;
                    break;
                     case '/':
                    ans=op2/op1;
                    break;
                    
                }
                st.push(ans);
            }
        }
        ans=st.top();
        st.pop();
        return ans;
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends