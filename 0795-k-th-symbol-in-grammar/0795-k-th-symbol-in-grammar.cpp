class Solution {
public:
    int kthGrammar(int n, int k) {
    //     string str="0";
    //     if(n==1 and k==1){
    //         str[0]='0';
    //     }
    //    else{  
    //     for(int i=2;i<=n;i++){
    //         long long x=str.size();
    //         long long j=0;
    //         while(j<x){
    //            // if(str.empty()) str+="0";
    //              if(str[j]=='0') str+="01";
    //             else str+="10";
                
    //             j++;
               
    //         }
    //         str.erase(0,x);
    //     }
    //    }
    //     char c=str[k-1];
    //     //cout<<c<<endl;
    //     return c-'0';
       if(n == 1) return 0;

        bool flip = false;

        for(int i = n; i > 1; i--) {
            int half_length = pow(2, i-2);

            if(k > half_length) {
                flip = !flip;
                k = k - half_length;
            }
        }

        if(flip) return 1;
        return 0;
    }
};