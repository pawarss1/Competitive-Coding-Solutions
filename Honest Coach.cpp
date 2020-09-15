#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    	int size;
    	cin >> size;
    	vector<int> strengths;
    	int flag = 0;
    	for(int j = 0; j < size; j++){
    		int input;
    		cin >> input;
	    	if (find(strengths.begin(), strengths.end(), input) != strengths.end()){
    			flag = 1;
			}
			strengths.push_back(input);
		}
		if(flag == 1){
			cout << 0 <<endl;
			continue;
		}
		sort(strengths.begin(), strengths.end());
		int minDiff = 99999;
		for(int j = 0; j < strengths.size()-1; j++){
			if((strengths[j+1] - strengths[j]) < minDiff){
				minDiff = strengths[j+1] - strengths[j];
			}
		}
		cout << minDiff << endl;
	}
    return 0;
}
