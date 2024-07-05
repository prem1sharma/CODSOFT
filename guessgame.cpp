#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class game{
	public:
	games(){
			srand((unsigned int) time(NULL));
		int number=rand()%21;
		int guess=0;
		do{
			cout<<"enter guess within 1-20:";
			cin>>guess;
			if (guess>number)
			cout<<"guess lower!!!!\n";
			else if(guess<number)
			cout<<"guess higher!!!!\n";
			else
			cout<<"congratulations!!!\n";
		}while(guess !=number);                                
	}
	};
	int main(){
		game g;
		g.games();
		return 0;
	}
