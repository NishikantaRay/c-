#include <iostream> 
#include<cmath>
using namespace std;   
main() 
{ 
    double principle,rate,time;
    cout<<" Enter the principle \t"<<" enter the rate\t "<<" enter the time ";
	cin>>principle>>rate>>time; 
    double CI = principle * (pow((1 + rate / 100), time)); 
    cout << "Compound interest is " << CI; 
} 
