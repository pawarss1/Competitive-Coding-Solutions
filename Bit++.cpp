#include <bits/stdc++.h>
using namespace std;

int main(){
    int input;
    cin >> input;
    string inputString;
	int ans = 0; 
    for(int i = 0; i < input; i++){
        cin >> inputString;
        size_t found = inputString.find("++"); 
	    if (found != string::npos){
	        ans += 1;
		}
		found = inputString.find("--"); 
	    if (found != string::npos){
	        ans -= 1;
		}
		inputString = "";
	}
	cout << ans;
    return 0;
}
