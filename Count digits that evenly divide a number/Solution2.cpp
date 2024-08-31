int countDigits(int n){
	// Write your code here.
	int count = 0;
	std::string str = to_string(n);
	for(char s : str) {
		int num = int(s - '0');
		if(s != '0') {
			if (n % num == 0) {
			count++;
			}
		}
	}
	return count;	
}
