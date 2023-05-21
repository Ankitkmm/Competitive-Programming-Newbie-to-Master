void ma1n (){
	   	  int n,k;
	   	  cin >> n >> k;
	   	  vector<int> coins(n);
	   	  for(int i = 1; i<=n; ++i) cin >> coins[i];
	   	  vector<int> dp(k+1, -1);
	   	  dp[0] = 0;      
	   	  for(int i = 1; i <= k; ++i)
	   	  	for(int j = 1; j <= n; ++j){
	   	  		if(i - coins[j] >= 0 && dp[i- coins[j]] != -1)
	   	  		if(dp[i] == -1) dp[i] = dp[i-coins[j]] + 1;
	   	  		else dp[i] = min(dp[i], dp[i-coins[j]] + 1);
	   	  	}
	   	  	cout << dp[k];
          }
  
	   	   	
