class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end(), greater<int>());
        int tot = 0, totb = 0;
        set<int> st;
        for (int a: A) {
            tot += a;
            st.insert(a);
        }
       
        for (int b: B) totb += b;
         // cout << tot <<" " << totb << endl;
        tot = (tot-totb)/2;
        
        // cout << tot << endl;
        for (int b: B){
            if (st.find(b+tot) != st.end()){
                ans = vector<int>({b+tot, b});
                break;
            }
            // if (st.find(b-tot) != st.end()){
            //     ans = vector<int>({b-tot, b});
            //     break;
            // }
        }
        
        
        
        return ans;
    }
};