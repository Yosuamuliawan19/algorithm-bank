class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int> > st;
        st.insert(make_pair(0,0));
        int x = 0, y = 0;
        for (char c: path){
            if (c == 'N'){
                y ++;
            }else if (c == 'S'){
                y--;
            }else if (c == 'E'){
                x++;
            }else{
                x--;
            }
        
            pair<int,int> cur = make_pair(x,y);
            if (st.find(cur) != st.end()){
                return true;
            }else{
                st.insert(cur);
            }
        }
        
        return false;
    }
};