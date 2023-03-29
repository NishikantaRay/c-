#include<iostream>
#define SIZE 10
using namespace std;
class STACK
{
    private:
        int num[SIZE];
        int top;
    public:
    	STACK(){
    	top=-1;
		}
	int isEmpty(){
	    if(top==-1)
	        return 1;
	    else
	        return 0;   
	}
	int isFull(){
	    if(top==(SIZE-1))
	        return 1;
	    else
	        return 0;
	}
	int push(int n){
	    if(isFull()){
	        return 0;
	    }
	    ++top;
	    num[top]=n;
	    return n;
	}
	int pop(){
	    int temp;
	    if(isEmpty())
	        return 0;
	    temp=num[top];
	    --top;
	    return temp;    
	}
	void displayItems(){
	    int i; 
	    cout<<"STACK is: ";
	    for(i=(top); i>=0; i--)
	        cout<<num[i]<<" ";
	    cout<<endl;
	}
};
int main(){
    STACK stk;
    int choice, n,temp;
    do
    {
        cout<<endl;
        cout<<"1 - Push"<<endl;
        cout<<"2 - Pop "<<endl;
        cout<<"3 - Display"<<endl;
        cout<<"4 - Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter item to insert: ";
                cin>>n;
                temp=stk.push(n);
                if(temp==0)
                    cout<<"STACK is FULL."<<endl;
                else
                    cout<<temp<<" inserted."<<endl;
            break;
            case 2:
                temp=stk.pop();
                if(temp==0)
                    cout<<"STACK IS EMPTY."<<endl;
                else
                    cout<<temp<<" is removed "<<endl;
            break;
            case 3:
                stk.displayItems();
                break;
            case 4:
            	exit(0);
            	break;
            default:
                cout<<"An Invalid choice."<<endl;
        }   
    }while(choice!=0);
    return 0;
}
