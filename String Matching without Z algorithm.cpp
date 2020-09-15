#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int cal(string input, string pattern){
	int cur = 0;
	for(int i = 0; i < input.length(); i++){
		if(cur < input.length() && input.at(i) == pattern.at(cur)){
			cur += 1;
			if(cur == pattern.length()){
				return 1;
			}
		}
		else{
			cur = 0;
		}
	}
	return 0;
} 

int main() {

	// Your code here
	int test;
	cin >> test;
	for(int i = 0; i < test; i++){
		string input, pattern;
		cin >> input;
		cin >> pattern;
		if(cal(input, pattern) == 1){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
