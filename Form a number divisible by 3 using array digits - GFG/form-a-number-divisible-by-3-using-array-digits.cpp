//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPossible(int n, int arr[]) {
        // code here
        string st="";
        for(int i=0;i<n;i++){
            st+=to_string(arr[i]);
        }
        int c=0;
        for(int i=0;i<st.size();i++){
            c+=st[i];
        }
        if(c%3==0){
            return 1;
        }
        else{
            return 0;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends