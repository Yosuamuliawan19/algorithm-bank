bool oneLine(ll x, ll y, ll z){
     pair<ll,ll> a = points[x], b = points[y], c = points[z];
     if (a.first == b.first || a.first == c.first || b.first == c.first){
          if (a.first == b.first && b.first == c.first){
               return true;
          }else{
               return false;
          }
     }else{
          if ( (a.second-b.second)/(a.first-b.first) == (a.second-c.second)/(a.first-c.first)){
               return true;
          }else{
               return false;
          }
     }
}
