#include<iostream>
using namespace std;
class calculator{
	private:
		float num1,num2;
		char choice;
		public:
			void read(){
				cout<<"enter first number:";
				cin>>num1;
				cout<<"enter second number:";
				cin>>num2;
			}
			void print(){
				cout<<"choice + is Addition\n";
				cout<<"choice - is Subtraction\n";
				cout<<"choice * is Multiplication\n";
				cout<<"choice / is Divison\n";			
			}
			void calc(){
				cout<<"enter your choice:";
				cin>>choice;
				
				switch(choice){
					case'+':
						cout<<"Addition:"<<num1+num2;
						break;
						case'-':
						cout<<"Subtraction:"<<num1-num2;
						break;
						case'*':
						cout<<"multipication:"<<num1*num2;
						break;
						case'/':
						cout<<"Division:"<<num1/num2;
						break;	
						default:
						cout<<"Enter valid choice!";
						break;
				}
			}
};
int main(){
	calculator c;
	c.read();
	c.print();
	c.calc();
	return 0;
}
