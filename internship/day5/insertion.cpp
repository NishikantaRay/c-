#include<iostream>
using namespace std;
class insertion{
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
		void insertionSort(int n)  
		{  
		    int i, key, j;  
		    for (i = 1; i < n; i++) 
		    {  
		        key = arr[i];  
		        j = i - 1;  
		        while (j >= 0 && arr[j] > key) 
		        {  
		            arr[j + 1] = arr[j];  
		            j = j - 1;  
		        }  
		        arr[j + 1] = key;  
		    }  
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
				insertionSort(n);
				print(n);
			}
};
int main()  
{ 
	insertion b1;
	b1.getnum();  
    return 0;  
}  
