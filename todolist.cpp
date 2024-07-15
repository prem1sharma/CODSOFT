#include<iostream>
using namespace std;
void print_tasks(string tasks[],int task_count){
	cout<<endl;
	cout<<"TASK TO DO:"<<endl;
	cout<<"---------------------------------------"<<endl;
	for(int i=0;i<task_count;i++)
	{
		
		cout<<"TASK  "<<i<<"  :  "<<tasks[i]<<endl;
	}
	cout<<"---------------------------------------"<<endl;
	cout<<endl;
}
int main(){
	string tasks[100]={" "};
	int task_count=0;
	int option=-1;
	while(option !=0){
		cout<<endl;
		cout<<"--------->TO DO LIST<--------"<<endl;
		cout<<"1-> TO ADD NEW TASK"<<endl;
		cout<<"2-> TO VIEW TASK"<<endl;
		cout<<"3-> TO DELETE TASK"<<endl;
		cout<<"0-> TO TERMINATE"<<endl;
		cout<<"ENTER VALID OPTIONS:";
		cin>>option;
		cout<<endl;
		switch(option){
			case 1:
				{
					
					if(task_count>9){
						cout<<"TASK LIST IS FULL"<<endl;
					}
					else{
						cout<<"ENTER A TASK:";
						cin.ignore();
						getline(cin,tasks[task_count]);
						task_count++;
					}
					break;
				}
				case 2:{
					print_tasks(tasks,task_count);
					break;
				}
				case 3:{
					print_tasks(tasks,task_count);
					int del_task=0;
					cout<<"ENTER A TASK NUMBER TO DELETE:";
					cin>>del_task;
					if(del_task<0||del_task>99)
					{
					cout<<"YOU ENTERED INVALID TASK NUMBER!!";	
						break;
					}
					for(int i=del_task;i<task_count;i++)
					{
						tasks[i]=tasks[i+1];
					}
					task_count=task_count-1;
					print_tasks(tasks,task_count);
					break;
				}
		}
	}
	return 0;
}
