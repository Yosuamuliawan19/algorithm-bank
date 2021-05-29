#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string result;
	string line;
	bool flag = true;
	while(getline(cin,line)){
		if (line == "quit") break;
		for (int x=0;x<line.size();x++){
			if (line[x] == 34 && flag){
				result = result + "``";
				flag = false;
			} 
			else if (line[x] == 34 && !flag){
				result = result + "''";
				flag = true;
			} 
			else result = result + line[x];
		}
	cout << result;
	result = "";
	}
}