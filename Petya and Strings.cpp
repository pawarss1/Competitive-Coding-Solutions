#include <bits/stdc++.h>
using namespace std;

int main(){
    string input1;
    cin >> input1;
    string input2;
	cin >> input2; 
	int ans = 0;
    for(int i = 0; i < input1.length(); i++){
     	if(int(tolower(input1[i])) > int(tolower(input2[i]))){
     		ans = 1;
     		break;
		}
		else if(int(tolower(input1[i])) < int(tolower(input2[i]))){
     		ans = -1;
     		break;
		}
    }
    cout <<ans;
    return 0;
}
