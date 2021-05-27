int ceilsearch(vector<int> &v, int l, int r, int val){
     int m;
     while (r-l>1){
          m = l + (r-l)/2;
          if (v[m] >= val) r = m;
          else l = m;
     }
     return r;
}
int lis(vector<int> &v){
     int len = 1; // nlogn
     if (v.size() == 0) return 0;
     vector<int> t(v.size(),0);
     t[0] = v[0];
     for (long long i=1;i<v.size();i++){
          if (v[i] <t[0]) t[0] = v[i];
          else if (v[i] > t[len-1]) t[len++] = v[i];
          else t[ceilsearch(t,-1,len-1,v[i])] = v[i];
     }
     return len;
}
