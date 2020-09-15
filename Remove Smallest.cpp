#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    	int size;
    	cin >> size;
    	vector<int> inputVals;
    	for(int j = 0; j < size; j++){
    		int input;
    		cin >> input;
    		inputVals.push_back(input);
		}
		int flag = 0;
		sort(inputVals.begin(), inputVals.end());
		for(int j = 0; j < inputVals.size()-1; j++){
			if(abs(inputVals[j] - inputVals[j+1]) > 1){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			cout<<"NO"<< endl;
		}
		else{
			cout<<"YES"<< endl;
		}
	}
    return 0;
}
