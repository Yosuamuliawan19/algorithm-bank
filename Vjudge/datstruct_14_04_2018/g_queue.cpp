#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main (){
	int n; cin >> n;
	while (n--){
		stack <char> q;
		string s; cin >> s;
		bool flag = true;
		for (int i=0;i<s.length();i++){
			if (s[i] == '{' || s[i] == '[' || s[i] == '('){
				q.push((char)s[i]);
			}else{
				if ((s[i] == '}' && q.top() == '{') ||
					(s[i] == ']' && q.top() == '[') || 
					(s[i] == ')' && q.top() == '(')){
					q.pop();
				//	cout << " asd " << s[i] << endl;
				}else{
					flag = false;
					break;
				}
			}
		}
		//cout << q.size() << endl;
		if (q.size() == 0 && flag){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}


	return 0;
}