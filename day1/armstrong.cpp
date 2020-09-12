#include <iostream>
using namespace std;
main()
{
  int i, num, digit, sum;
  for(i = 11; i <= 1000; i++)
  {
	    sum = 0;
	    num = i;
	
	    while(num!=0)
	    {
	        digit = num % 10;
		    sum = sum + digit * digit * digit;
	        num=num/10;
	    }
	
	    if(sum == i)
	    {
	        cout << i << endl;
	    }
	}
}
