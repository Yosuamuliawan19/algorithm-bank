class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size()) return 0;
        vector<int> arr;
        set<char> st;
        for (int i=0;i<A.size();i++){
            if (A[i] != B[i]){
                if (arr.size() == 2) return 0;
                arr.push_back(i);
                
            }
            st.insert(A[i]);
        }
        if (arr.size() == 0){
            // cout << st.size() << " " << A.length() << endl;
            if (st.size() == A.length()){
                return 0;
            }else{
                return 1;
            }
        }
       
        if (arr.size() == 1) return 0;
        char tmp = A[arr[0]]; A[arr[0]] = A[arr[1]]; A[arr[1]] = tmp;
        return A == B;
    }
};