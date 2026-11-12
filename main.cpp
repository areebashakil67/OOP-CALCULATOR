#include<iostream>
using namespace std;
class Calculator
{
	private:
		double num1 , num2 ;
		public:
			//Constructor
			Calculator()
			{
				num1=0;
				num2=0;
			}
			void getNumbers()  //Input functions
			{
			cout<<"Enter first number: ";
			cin>>num1;	
			cout<<"Enter second number: ";
			cin>>num2;
			}
			// Addition function
			void add()
			{
				cout<<"Addition: "<<num1 + num2<<endl;
			}
			// Subtraction function
			void sub()
			{
				cout<<"Subtraction: "<<num1 - num2<<endl;
			}
			// Multiplication function
			void multiply()
			{
				cout<<"Multiplication: "<<num1 * num2<<endl;
			}
			// Division function
			void divide()
			{
				if(num2!=0)
				{
					cout<<"Division: "<<num1 / num2<<endl;
			    }
			    else
			    {
			    	cout<<"Error! cannot divide by zero."<<endl;
				}
			}};
			int main()
			{						    
			Calculator c;
			int choice;			
			cout<<"1. Addition "<<endl;
			cout<<"2. Subtraction "<<endl;
			cout<<"3. Multiplication "<<endl;
			cout<<"4. Division "<<endl;
			
			cout<<"Enter your choice "<<endl;
			cin>>choice;
			
			if(choice>=1 && choice<=4)
			{
				c.getNumbers();
			}
			switch(choice)
			{
				case 1:
					c.add();
					break;
				case 2:
					c.sub();
					break;
				case 3:
					c.multiply();
					break;
				case 4:
					c.divide();
					break;
				
				default:
					cout<<"Invalid Choice!"<<endl;						
			}
			return 0;
            }
