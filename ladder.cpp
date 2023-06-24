void solve() {
int n;
cin >> n;
vector<int> stair(n);
rep(i,n) cin >> stair[i];
vector<int> dp(n+1, INT_MIN);
dp[0] = 0;
for(int i = 1; i <= n; ++i){
	dp[i] = max(dp[i], dp[i-1]+stair[i-1]);
	if(i >= 2) dp[i] = max(dp[i], dp[i-2] + stair[i-1]);

}
cout << dp[n];
}
