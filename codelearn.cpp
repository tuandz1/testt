#include <iostream>
 
  using namespace std;
  int main () {
  	int n;
  	cin >> n;
  	int a[n];
  	int maxValue = a[0];
  	for (int i = 0; i < n; i++){
  		cin >> a[i];
  		if(a[i] > maxValue) {
  			maxValue = a[i];
		  }
	}
	  
	cout << maxValue;
	  return 0; 
  } 
   
