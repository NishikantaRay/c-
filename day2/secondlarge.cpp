#include<iostream>
using namespace std;
void second_largest(int nums[], int arr_size)
  {
   int i, first_element, second_element;
    if (arr_size < 2)
    {
        cout<< " Invalid Input ";
        return;
    }
    first_element = second_element = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
        if (nums[i] > first_element)
        {
            second_element = first_element;
            first_element = nums[i];
        }
        else if (nums[i] > second_element && nums[i] != first_element)
        {
            second_element = nums[i];
        }
    }
    if (second_element == INT_MIN)
     {
        cout<< "No second largest element";
     }
    else
     { 
        cout<< "\nThe second largest element is: " <<second_element;
     }
}
int main()
{
    int n,arr[20];
    cout<<" Enter the range \n";
    cin>>n;
    cout<<" Enter the number\n ";
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << arr[i] <<" ";
   	second_largest(arr, n);
    return 0;
}
