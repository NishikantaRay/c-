#include<iostream>
using namespace std;
class bubble{
	private:
		int arr[20];
		void print(int size)  
		{  
		    int i;
			cout<<" Array is: ";  
		    for (i = 0; i < size; i++)  
		        cout << arr[i] << " ";  
		    cout << endl;  
		}
		void bubbleSort(int n)  
		{  
		    int i, j;  
		    for (i = 0; i < n-1; i++)        
			    for (j = 0; j < n-i-1; j++)  
			        if (arr[j] > arr[j+1])  
			            swap(&arr[j], &arr[j+1]);  
		}
		void swap(int *xp, int *yp)  
		{  
		    int temp = *xp;  
		    *xp = *yp;  
		    *yp = temp;  
		}  
		public:
			void getnum()
			{
				int n;
				cout<<" Enter the range "<<endl;
				cin>>n;
				cout<<" Enter the number "<<endl;
				for(int i=0;i<n;i++)
					cin>>arr[i];
				print(n);
				cout<<" after sorting "<<endl;
				bubbleSort( n);
				print(n);
			}
};
int main()  
{ 
	bubble b1;
	b1.getnum();  
    return 0;  
}  
