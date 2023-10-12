//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void f(stack<int> &s,int x){
        //base case
        if(s.empty()) {
            s.push(x);
            return;
        }
        int y=s.top();
        s.pop();
        f(s,x);
        s.push(y);
    }
    void Reverse(stack<int> &st){
        //base case
        if(st.empty()){
            return;
        }
        
        int x=st.top();
        st.pop();
        Reverse(st);
        f(st,x);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends