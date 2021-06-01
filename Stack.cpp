#include<iostream>
#include<windows.h>
#include<vector>
using namespace std;

int main(){
	SetConsoleTitleA("Stack");
	cout<<"Stack simulator"<<endl<<endl;
	vector<double> table;
	int option;
	while(true){
		cout<<"1. Add\t\t2. Delete\t3. Show\t\t4. Clear\t5. End\r\n";
		cin>>option;
		cout<<endl;
		switch(option){
			case 1:{
				double item;
				cout<<"Enter the item: "; 
				cin>>item;
				table.push_back(item);
				 cout<<"Process has finished succesfully."<<endl;
				break;
			}
			case 2:{
				table.pop_back(); 
				cout<<"Process has finished succesfully."<<endl;
				break;
			}
			case 3:{
				if(table.empty()) cout<<"Array is empty."<<endl;
				else {
					for(int i=0;i<table.size();i++) cout<<"["<<table[i]<<"] ";
					cout<<endl;
				}
				break;
			}
			case 4:{
				table.clear(); 
				cout<<"Process has finished succesfully."<<endl;
				break;
			}
			case 5:{
				exit(0);
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
