#include<iostream>
using namespace std;


int gcd(int m, int n) {
	
    while(m!=n)
    {
    	if(m>n)
    	{
    		m=m-n;
		}
		else
		{
			n=n-m;
		}
	}
	return m,n;
}
int lcm(int m, int n) {
	
   int a;
   if(m>n){
   		a=m;
   }
   else{
   		a=n;
   }
   while (1) {
      if (a % m == 0 && a % n == 0)
         return a;
         ++a;
   }
}
 main() {
   cout << "Enter the two numbers: ";
   int m, n;
   cin >> m >> n;
   cout << "The GCD of two numbers is: " << gcd(m, n) << endl;
   cout << "The LCM of two numbers is: " << lcm(m, n) << endl;
}
