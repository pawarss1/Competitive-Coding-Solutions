#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double ans;
    for(int i = 0; i < n; i++){
    	double input;
    	cin >>input;
    	ans += (input/100);
	}
	cout << (ans/n)*100;
    return 0;
}
