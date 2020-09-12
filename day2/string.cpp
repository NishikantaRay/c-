#include <iostream> 
#include <string> 
using namespace std;
int length()
{
   int i,count=0;
   char ch[50];
 
   cout<<"\nEnter any string :: ";
   cin>>ch;
 
   for(i=0;ch[i]!='\0';i++)
   {
        count++;
   }
   cout<<"\nLength of String [ "<<ch<<" ] is :: "<<count<<"\n";
 
   return 0;
}
char copy() 
{  
    char s1[50], s2[100], i; 
	cout<<" Enter the string\n";
	cin>>s1; 
    cout<<" \ns1="<<s1;  
    for (i = 0; s1[i] != '\0'; ++i) {  
        s2[i] = s1[i]; 
    }
    s2[i] = '\0'; 
    cout<<"\nString s2 :"<<s2;  
}
char palin()
{
  char str[100];
  int b, m, e, l = 0;
  cout<<" enter the string\n";
  cin>>str;
  while (str[l] != '\0')
    l++;
  e = l - 1;
  m = l/2;
  for (b = 0; b < m; b++)
  {
    if (str[b] != str[e])
    {
      cout<<"Not a palindrome.\n";
      break;
    }
    e--;
  }
  if (b == m)
    cout<<"Palindrome.\n";

  return 0;
}
char compare() 
{
	char s1[40],s2[40];
	int temp;  
	cout<<" Enter the string 1\n";
	cin>>s1;
	cout<<" \nEnter the string 2\n";
	cin>>s2;
	for(int i=0;s1[i]!='\0'&&s2[i]!='\0';i++){
	    if (s1[i] != s2[i]) 
	       
			 temp++;	
	}
	if(temp==0)
	{
		 cout << s1 << " is equal to "
	             << s2 << endl; 
	}
	else{
		cout<<s1<<" is not equal to "<<s2<<endl;
	}
} 
   
main()
{
	int n;
	
	
	while(1)
	{
		cout<<"\n1:string length\n2:string copy\n3:palindrome\n4:compare\n5:exit";
		cout<<"\nEnter the choice\n";
		cin>>n;
		switch(n)
		{
			case 1:
				length();
				break;
			case 2:
				copy();
				break;
			case 3:
				palin();
				break;
			case 4:
				compare();
				break;
			case 5:
				exit(0);
			default:
				cout<<"Enter a correct choice!";
				break;
		}
		
	}
}
