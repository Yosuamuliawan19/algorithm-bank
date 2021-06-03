#include<iostream>
#include<sstream>
#include<vector>
int parent[1000] = {0};
using namespace std;

int findParent(int a){
	if (parent[a] == a ) return a;
	else return (parent[a] = findParent(parent[a]));
}
bool isSameSet(int a, int b){
	
	int pa = findParent(a), pb = findParent(b);
	if (pa == pb){
//		cout << "same set\n";
		return true;
	}else{
//		cout << "not same set\n";
		return false;
	}
}
void unify(int a , int b){
	if (!isSameSet(a,b)){
		int pa = findParent(a), pb = findParent(b);
		
//			cout << "ASdasd";
//			cout << a  << " and " << b << " parent is " ;
		if (pa > pb){
		
			parent[pa] = pb;
//			cout <<parent[pa] << endl;
		}else{
			parent[pb] = pa;
//			cout <<parent[pb] << endl;
		}
	
	}
	
}

int main (){
	int tc; cin >> tc;
	string temp;
	cin.ignore();
	while (tc--){
	
		int no; cin >> no ;
		cin.ignore();
//			cout << "Sadasd" << endl;
		for (int i=0;i<no;i++){
			parent[i] =  i;
		}
		int tru = 0, fals = 0;
		while (true){
			getline(cin, temp);
			if (temp == ""){
				break;
			}
			stringstream ss;
			ss << temp;
			char query; int a , b;
			ss >> query >> a >> b;
			a--;b--;
			if (query == 'c'){
				unify(a,b);
			}else if (query == 'q'){
				if (isSameSet(a,b)){
					tru++;
				}else{
					fals++;
				}
			}
//			for (int l=0;l<no;l++){
//				cout << parent[l] << " ";
//				
//			}
//			cout << endl;
		}
		cout << tru << "," <<  fals <<endl;
		if (tc != 0){
			cout << endl;
		}
	}
	
	
	return 0;
}
