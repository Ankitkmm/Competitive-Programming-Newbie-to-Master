   void ma1n (){
	   int n;
	   cin >> n;
	   ll ct = 0;
	   if(n <= 9){
	   	cout << 1;
	   	return;
	   }
	   while(n != 0){
	   string s = to_string(n);
	   char c = maxe(s);
	   int x = c - '0';
	   n = n - x;
      ct++;
	}
	cout << ct;
	}
  
