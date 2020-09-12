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
   	complex operator + (complex n2)
    {
    	complex n3;
    	cout<<"\n Addition is: ";
        n3.real = real+n2.real;
        n3.img = img+n2.img;
        return n3;
	}
	complex operator - (complex n2)
    {
    	complex n3;
    	cout<<"\n Substraction is:\n";
        n3.real = real-n2.real;
        n3.img = img-n2.img;
        return n3;
	}
	complex operator *(complex n2)
    {
    	complex n3;
    	cout<<"\n Multiplication is:\n";
        n3.real = real * n2.real - img * n2.img;
   		n3.img = real* n2.img + img * n2.real;
   		return n3;
	}
	complex operator /(complex n2)
    {
    	complex n3;
    	cout<<"\n Division/ is:\n";
        n3.real=(((real)*(n2.real))+((img)*(n2.img)))/(pow(n2.real,2)+pow(n2.img,2));
		n3.img=(((n2.real)*(img))-((real)*(n2.img)))/(pow(n2.real,2)+pow(n2.img,2));
		return n3;
	}                               
};
	
main()
{
	class complex n1,n2,n3;
	n1.getnum();
	n2.getnum();
	n3=n1+n2;
    n3.displayData();
    n3=n1-n2;
    n3.displayData();
    n3=n1*n2;
    n3.displayData();
    n3=(n1/n2);
    n3.displayData();
    
}
