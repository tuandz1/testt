#include<stdio.h>
#include<math.h>
 int main (){
 
 /*	int n;
 	int i = 1;
 	printf ("nhap so: ");
 	scanf("%d", &n);
 		for ( ; i <= sqrt(n);i++) {	 
 	printf (" so chinh phuong la %d\n", i * i);
} 
	if (check (n))
		printf ("\n %d la so chinh phuong ",n);
	else 
		printf ("\n deo phai so chinh phuong %d ", n);
	return 0; 
} 
 int check(n){
 
 int kt = 0;
 	if (sqrt(n) * sqrt(n) == n)
 			kt = 1;
 		return kt;
	 }
*/

	int userChoice;
	do {
		userChoice = getUserChoice;
		switch (userChoice){
			case 1 : function 1(); break;
			case 2 : function 2(); break;
			default: printf ("Bye ! \n");
		}
	} 
	 while (userChoice > 0 && userChoice < 3);
	 fflush (studin);
	 getchar ();
	 return 0;
