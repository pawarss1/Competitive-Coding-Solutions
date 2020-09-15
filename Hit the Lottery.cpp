#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> denoList;
    denoList.push_back(100);
	denoList.push_back(20);
	denoList.push_back(10);
	denoList.push_back(5);
	denoList.push_back(1);
	int ans = 0;
	for(int i = 0; i < denoList.size(); i++){
		if(n >= denoList[i]){
			ans += (n/denoList[i]);
			n = n % denoList[i];
			if(n == 0){
				break;
			}
		}
		else{
			continue;
		}
	}
	cout << ans;	
    return 0;
}
