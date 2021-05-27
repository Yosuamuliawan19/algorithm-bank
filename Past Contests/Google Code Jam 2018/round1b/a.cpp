#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<queue>
#include<map>
#include<cmath>

using namespace std;
vector<long long> listRound;
vector<bool> isRound;
vector<long long> people;

long long roundFunc (long double x){
     if (x - (long long) x >= .5){
          x = (long long) x + 1;
     }else{
          x = (long long) x;
     }
     return x;
}
bool roundUp (long double x){
     if (x - (long long) x >= .5){
          return true;
          x = (long long) x + 1;
     }else{
          return false;
          x = (long long) x;
     }
}
long long binser(long long next, long long l, long long r){
     r = listRound.size()-1;
     cout << "asda \n";
     while (l <= r){
          long long m = (r-l)/2;

          if (listRound[m] == next){

               return listRound[m];
          }

          if (listRound[m] < next){
               l = m + 1;
          }else{
               r = m - 1;
          }
     }
     long long val = LLONG_MAX;
     for (long long i=r;i<=l;i++){
          cout <<"listround  = " << listRound[i] << endl;
          if (listRound[i] == next){
               return listRound[i];
          }else if (listRound[i] >= next && listRound[i] < val ){
               val = listRound[i];
          }
     }
     return val;
}
int main (){
     long long tc, n, l;
     scanf("%lld", &tc);
     for (long long t=1;t<=tc;t++){
          scanf("%lld %lld", &n, &l);
          // generate is round and listround
          long long tot = 0, sisa = n, temp;
          listRound.clear();
          isRound = vector<bool> (n, false);
          for (long long i=1;i<=n;i++){
               if (roundUp(100 *(long  double) i / (long double) n)){
                    listRound.push_back(i);
                    cout << i << " " << 100.0 * (long  double) i / (long double) n << endl;
                    isRound[i] = true;
               }
          }


          people.clear();
          for (long long i=0;i<l;i++){
               scanf("%lld", &temp);
               sisa -= temp;
               cout << "current sisa " << sisa << endl;

               if (roundUp((long double) temp / (long double) n)){
                    tot += roundFunc((long double) temp / (long double) n);
               }else{
                    people.push_back(temp);
                    cout << "push into people " << temp << endl;
               }

          }
          cout << "sisa : " << sisa << endl;
          vector<pair<long long, long long> > tobesort;
          cout << "hi \n";

          for (long long i=0;i<people.size();i++){
               // binser next
               long long next = binser(people[i], 0 , n-1);
               cout << "next : " << next << endl;
               tobesort.push_back(make_pair(next - people[i], i));
               // people[i] = res;
          }
          sort(tobesort.begin(), tobesort.end());
          cout << "made it \n" ;
          for (long long i=0;i<people.size();i++){
               cout << "a : " << tobesort[i].first << endl;
               if (sisa >= tobesort[i].first){
                    sisa -= tobesort[i].first;
                    cout <<   ((long double) tobesort[i].first + (long double) people[tobesort[i].second] )
                                        / (long double) n << endl;
                    tot += roundFunc(100.0 * ((long double) tobesort[i].first + (long double) people[tobesort[i].second])
                                        / (long double) n);
                    cout << tobesort[i].first << " "<< people[tobesort[i].second] << " "<< n <<  endl;
               }else{
                    cout << 100.0 * ((long double) people[tobesort[i].second] / (long double) n) << endl;
                    tot += roundFunc(100.0 * ((long double) people[tobesort[i].second] / (long double) n));
               }
               cout << "tot currently : "<< tot<<endl;

          }




          printf("Case #%lld: %lld\n", t, tot);
     }
}
