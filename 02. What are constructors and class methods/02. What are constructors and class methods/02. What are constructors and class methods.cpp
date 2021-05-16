#include <iostream>
#include <list>
using namespace std;
class Scrum {
public: //switch to public
	string Name;
	int ListOwnerId;
	list<string> TodoList;

	//Creating constructor of the class
	Scrum(string name, int listOwnerId) { //ConstructorName == className
		Name = name;
		ListOwnerId = listOwnerId;
	}
};
int main() {

	system("color a");

	//Creating Object
	Scrum aScrum("Educator Studio", 001456);

	//Adding a list to todo list
	aScrum.TodoList.push_back("Doo 100 pushups");
	aScrum.TodoList.push_back("Doo 200 pushups");
	
	//Output 
	cout << "Hey! Welcome to my application!"<< endl;
	cout << "New Scrum app name:" << aScrum.Name << endl;
	cout << "Owner Id: "<<aScrum.ListOwnerId << endl;
	cout << "To do list";
	for (string todoList : aScrum.TodoList) {
		cout << todoList << endl;
	}
	return 0;
}