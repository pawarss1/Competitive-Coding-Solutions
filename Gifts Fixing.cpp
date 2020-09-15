#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    for(int i = 0; i < n; i++){
    	int size;
    	cin >> size;
    	vector<long long> gift1;
    	vector<long long> gift2;
    	for(int j = 0; j < size; j++){
    		long long input;
    		cin >> input;
    		gift1.push_back(input);
		}
		for(int j = 0; j < size; j++){
    		long long input;
    		cin >> input;
    		gift2.push_back(input);
		}
		long long minGift1 = *min_element(gift1.begin(), gift1.end());
		long long minGift2 = *min_element(gift2.begin(), gift2.end());
		long long ans = 0;
		for(int j = 0; j < size; j++){
			long long diff1 = -1;
			long long diff2= -1;
			if(gift1[j] > minGift1){
				diff1 = gift1[j] - minGift1;
			}
			if(gift2[j] > minGift2){
				diff2 = gift2[j] - minGift2;
			}
			if(diff1 != -1 && diff2 != -1){
				int minDiff;			
				if(diff1 > diff2){
					minDiff = diff2;
					ans += abs(minDiff);
					diff1 = diff1 - minDiff;
					ans += (diff1);
				}
				else if(diff1 < diff2){
					minDiff = diff1;
					ans += minDiff;
					diff2 = diff2 - minDiff;
					ans += diff2;
				}
				else{
					ans += diff2;
				}
			}
			else if(diff1 != -1){
				ans += diff1;
			}
			else if(diff2 != -1){
				ans += diff2;
			}
		}
		cout << ans <<endl;
	}
    return 0;
}
