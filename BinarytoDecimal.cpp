#include <bits/stdc++.h>

using namespace std;

string binary(int num){
	if(num == 1){
		return "1";
	}
	string temp = binary(num/2);
	if(num % 2 == 0){
		return temp + "0";
	}
	return temp + "1";
}
//1100110

int main()
{
    int n;
    cin >> n;
    cout << binary(n);
    return 0;
}
