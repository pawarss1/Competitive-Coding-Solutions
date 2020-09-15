#include <bits/stdc++.h>
using namespace std;

int main(){
    int inputNum;
	int ans = 0;
    for(int i = 0; i < 5; i++){
    	for(int j = 0; j < 5; j++){
    		cin >> inputNum;
    		if(inputNum == 1){
    			ans = abs(3-(i+1)) + abs(3-(j+1));
			}
		}
	}
	cout << ans; 
    return 0;
}
