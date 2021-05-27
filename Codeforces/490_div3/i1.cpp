#include<iostream>
#include<stack>
#include<vector>
#include<map>

#include<algorithm>
#include <fstream>

typedef long long ll;
using namespace std;
int main (){
     map<string,bool> skor, fkor, sjp, fjp;

     freopen("train.txt", "r", stdin);
     ll tc; string cur;
     int cntkors = 1, cntjps = 1;
     int cntkorf = 1, cntjpf = 1;

     string s_kor = "{", s_jp = "{";
     string f_kor = "{", f_jp = "{";

     cin >> tc;
     cin.ignore();
     while (tc--){
          getline(cin,cur);
          int sz = cur.size();
          string s ="", f="";
          bool on = false;
          if (cur[sz-2] == 'i'){
               for (ll i=0;i<sz;i++){
                    if (cur[i] == ' '){
                         on = true;
                         continue;
                    }else if (cur[i] == '-') break;
                    if (on){
                         f+=cur[i];
                    }else{
                         s+=cur[i];
                    }
               }
               if (skor.find(s) == skor.end()){
                    skor[s] = true;
                    s_kor +=   "\"" + s + "\",";
                    cntkors++;
               }
               if (fkor.find(f) == fkor.end()){
                    fkor[f] = true;
                    f_kor +=   "\"" + f + "\",";
                    cntkorf++;
               }


          }else{
               for (ll i=0;i<sz+1;i++){
                    if (cur[i] == ' '){
                         on = true;
                         continue;
                    }else if (cur[i] == '-') break;

                    if (on){
                         f+=cur[i];
                    }else{
                         s+=cur[i];
                    }
               }
               if (sjp.find(s) == sjp.end()){
                    sjp[s] = true;
                    s_jp +=   "\"" + s + "\",";
                    cntjps++;
               }
          }
          // cout << s + " " + f << endl;
     }
     cout << "string kors[" << cntkors <<"] = "+ s_kor + "\"non\"};"<< endl;
     cout << "string korf[" << cntkorf <<"] = "+ f_kor + "\"non\"};"<< endl;
     cout << "string jps[" << cntjps << "] = "+ s_jp + "\"non\"};"<< endl;
     cout << cntkors << " " << cntkorf << " " << cntjps << endl;
     // cout << "string jpf[" << cntjp << "] = "+ f_jp + "\"non\"};"<< endl;
     // ll tc;
     // string cur;
     // cin >> tc;
     // while (tc--){
     //      cin >> cur;
     //      if (korean.find() != korean.end()){
     //           cout << cur + "-ssi\n";
     //      }else{
     //           cout << cur + "-san\n";
     //      }
     // }
}
