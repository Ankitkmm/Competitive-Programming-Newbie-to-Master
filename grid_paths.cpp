  void ma1n (){
	   	  int n;
	   	  cin >> n;
	   	  vector<vector<int>> dp(n,vector<int> (n, 0));
	   	  dp[0][0] = 1;
	   	  for(int i = 0; i<n; ++i){
	   	  	string s;
	   	  	cin >> s;
	   	  	for(int j = 0; j <n; ++j){
	   	  		if(s[j] == '.'){
	   	  			if(i > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % M;
	   	  		
	   	  		
	   	  			if(j > 0) dp[i][j] = (dp[i][j] + dp[i][j-1]) % M;
	   	  		}
	   	  	else dp[i][j] = 0;

	   	  }
	   	}
	   	 cout << dp[n-1][n-1];
	   	  

          }
