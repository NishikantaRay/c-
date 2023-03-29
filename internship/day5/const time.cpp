#include <iostream>
#include<cstring>
using namespace std;
 
class Time
{
	private:
    	int hours;
    	int minutes;
   		int seconds;
   		char t[3];
 
public:
    void getTime()
    {
	    cout << " Enter time :" << endl;
	    cout << " Hours "; 
		cin>>hours;
	    cout << " Minutes "; 
		cin>>minutes;
	    cout << " Seconds ";
		cin>>seconds;
		cout<< " AM/PM ";
		cin.ignore();
		cin.getline(t,3) ;
		setTime();
	}
    void setTime()
    {
    	cout << endl;
    	cout << "Time: ";
    		
		cout<<hours<< ":" << minutes << ":" << seconds << t<< endl;
	}
    void addTime(Time T1,Time T2)
    {
		seconds=T1.seconds+T2.seconds;
    	minutes=T1.minutes+T2.minutes +(seconds/60);
    	hours= T1.hours+T2.hours + (minutes/60);
    	minutes =minutes%60;
 	  	seconds =seconds%60;
		if(hours>=24)
		{
			hours=hours%24;
				   } 	  	
	}
};  
int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T2.getTime();
    T3.addTime(T1,T2);
    T3.setTime();
     
    return 0;
}
