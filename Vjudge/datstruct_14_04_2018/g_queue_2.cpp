#include<iostream>
#include<stack>
using namespace std;
int main (){
	long long n; cin >> n;
	while (n --){
		stack <char> st;
		string s ; cin >> s; bool flag = true;
		for (long long i=0;i<s.length();i++){
			if (s[i] == '{' || s[i] == '(' || s[i] == '['){
				st.push(s[i]);
			}else if (st.size() != 0){
				if ((s[i] == '}' && st.top() == '{') ||
						(s[i] == ')' && st.top() == '(') ||
						(s[i] == ']' && st.top() == '[')){
							st.pop();
				}else{
					flag = false;
				}
			}
		}
		if (st.size() == 0 && flag){
			cout << "YES\n";
		}else{
			cout << "N0\n";
		}


	}
}
