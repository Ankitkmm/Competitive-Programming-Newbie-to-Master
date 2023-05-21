	  void ma1n (){
	   	  int n,k;
	   	  cin >> n >> k;
	   	  vector<int> coins(n);
	   	  for(int i = 0; i< n; ++i) cin >> coins[i];
	   	  vector<int> dp(k+1, 0);
	   	  dp[0] = 1;
	   	  for(int i = 1; i<=k; ++i)
	   	  for(int j = 0; j < n; ++j){
	   	  	if(i - coins[j] >= 0) dp[i] = (dp[i] + dp[i-coins[j]]) % M;
	   	  	
	   	  }      
	   	  cout << dp[k];
          }
  
	   	   	
