#include<iostream>
#include<cmath>
using namespace std;

class complex
{ private:
	int real;
	int img;
	void setnum(int real,int img)
	{
		cout<<"\ncomplex number is \n";
		if(img>0)
			cout<<real<<"+ i "<<img;
		else
			cout<<real<<"- i "<<img;
	}
	public:
	void getnum()
	{
		cout<<"\n Enter the real number ";
		cin>>real;
		cout<<" \n Enter the img number\n ";
		cin>>img;
		setnum(real,img);
	}
	void displayData()
    {
       		cout<< real<<" +(" << img<<"i)" ;
      
    }
   	void add(complex n1,complex n2)
    {
    	cout<<"\n Addition is: ";
        real = n1.real+n2.real;
        img = n1.img+n2.img;
	}
	void sub(complex n1,complex n2)
    {
    	cout<<"\n Substraction is:\n";
        real = n1.real-n2.real;
        img = n1.img-n2.img;
	}
	void mul(complex n1,complex n2)
    {
    	cout<<"\n Multiplication is:\n";
        real = n1.real * n2.real - n1.img * n2.img;
   		img = n1.real* n2.img + n1.img * n2.real;
	}
	void div(complex n1,complex n2)
    {
    	cout<<"\n Division/ is:\n";
        real=(((n1.real)*(n2.real))+((n1.img)*(n2.img)))/(pow(n2.real,2)+pow(n2.img,2));
		img=(((n2.real)*(n1.img))-((n1.real)*(n2.img)))/(pow(n2.real,2)+pow(n2.img,2));
	}                               
};
	
main()
{
	class complex n1,n2,n3;
	n1.getnum();
	n2.getnum();
	n3.add(n1,n2);
    n3.displayData();
    n3.sub(n1,n2);
    n3.displayData();
    n3.mul(n1,n2);
    n3.displayData();
    n3.div(n1,n2);
    n3.displayData();
    
}
