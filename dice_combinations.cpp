#include <bits/stdc++.h>
using namespace std;

#define ll long long


                          
							void qataima ()
							{
							    ios::sync_with_stdio(false);
							  
							    cin.tie(0);                                                                                                            
							    
								//mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
							}




const int M = 1e9 + 7;

int main(){
	int n;
	cin >> n;
	vector<int> dp(n+1, 0);
	dp[0] = 1;
	for(int i = 1; i <=n; i++)
		for(int j = 1; i <=6; ++j){
			if(j > i) break;
			(dp[i] = dp[i] + dp[i-j]) % M;
		}
		cout << dp[n];
}
