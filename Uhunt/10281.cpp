#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
     string s;
     ll prevtim = 0;
     double dist = 0;
     double speed = 0;
     bool init = 1;
     while (getline(cin, s)){
          ll h = (s[0]-'0')*10 + (s[1]-'0');
          ll m = (s[3]-'0')*10 + (s[4]-'0');
          ll sec = (s[6]-'0')*10 + (s[7]-'0');
          // ll h,m,sec;
          // sscanf(s, "%ld:%ld:%ld",&h,&m,&sec);
          // ll h = (s[0]-'0')*10 + (s[1]-'0');
          // ll m = (s[3]-'0')*10 + (s[4]-'0');
          // ll sec = (s[6]-'0')*10 + (s[7]-'0');
          ll curtime = (h*60*60)+(m*60)+sec;
          stringstream ss(s.substr(8,s.length()-8));
          ll curspeed;
          ss >> curspeed;
          double trav = (curtime-prevtim) * (speed/3600.0);
          if (init){
               init = 0;
          }else dist += trav;
          prevtim = curtime;
          speed = curspeed;
          if (s.length() == 8){
               cout << s;
               printf(" %.2lf km\n", dist);
          }
     }

	return 0;
}
