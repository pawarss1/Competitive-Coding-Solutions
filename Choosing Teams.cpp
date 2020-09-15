#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> count;
    for(int i = 0; i < n; i++){
    	int input;
    	cin >> input;
		count.push_back(input);
	}
	sort(count.begin(), count.end()); 
	int index = -1;
	for(int i = 0; i < count.size(); i++){
		if((5 - count[i]) >= k){
			index = i+1;
			continue;
		}
		else{
			index = i;
			break;
		}
	}
	int ans = index/3;
	cout << ans;
    return 0;
}
