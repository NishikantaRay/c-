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
main() {
   cout << "Enter the two numbers: ";
   int m, n;
   cin >> m >> n;
   cout << "The GCD of two numbers is: " << gcd(m, n) << endl;
}
