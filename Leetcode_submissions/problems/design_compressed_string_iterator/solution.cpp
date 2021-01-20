class StringIterator {
public:
    vector<pair<char,int>> arr;
    int idx;
    StringIterator(string in) {
        idx = 0;
        for (int i=0;i<in.size();i++){
            int cnt = 0; char cur = in[i]; i++;
            while (i < in.size() && in[i] >= '0' && in[i] <= '9'){
                cnt = (cnt * 10) + (in[i++] - '0');
            }i--;
            // cout << cur << " " << cnt << endl;
            arr.push_back(make_pair(cur, cnt));
        }
    }
    
    char next() {
        if (idx == arr.size()) return ' ';
        if (arr[idx].second == 0) idx++;
          if (idx == arr.size()) return ' ';
        arr[idx].second = arr[idx].second - 1;
        return arr[idx].first;
    }
    
    bool hasNext() {
        if (idx < arr.size()){
            if (arr[idx].second == 0) idx++;
        }
        return idx < arr.size();
    }
};

/**
 * Your StringIterator object will be instantiated and called as such:
 * StringIterator* obj = new StringIterator(compressedString);
 * char param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */