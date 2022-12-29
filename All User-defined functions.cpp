#include <iostream>
using namespace std;
void f1()		// no argument is passed to F1() and no return value:
	{
		int num;
		cout<<"Enter the number :";
		cin>>num;
		if(num%2==0)
		cout<<num<<" is a even number";
		else
		cout<<num<<" is a odd number";
	}
	int f2()	// no argument is passed to F1() but return value:
{
    int num;

    cout<<"\n\nEnter the number :";
    cin >> num;
    if (num%2==0)
    {
        cout<<num<<" is a even number.";
    }
    else
    {
        cout<<num<<" is a odd number.";
    }

    return num;
}
void f3(int a)	//  argument is passed to F1() and no return value:
{
	
	cout<<"\n\nEnter the number :";
	cin>>a;
    if (a%2==0)
    {
        cout << a << " is a even number.";
    }
    else {
        cout << a << " is a odd number.";
    }
}
int f4(int b)	//  argument is passed to F1() but return value:
{
 
    cout << "\n\nEnter the number :";
    cin >>b;
    if(b%2==0)
        cout << b << " is a even number.";
    else
        cout<< b << " is a odd number.";
    return 0;
    
}
int main()
{
		f1();
		
    	f2();
	
		int a;
	 	f3(a);
	 	
		int b;
		f4(b);
}
