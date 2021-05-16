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

	//Creating mthod
	void getInfo() {
		//Output 
		cout << "New Scrum app name:" << Name << endl;
		cout << "Owner Id: " << ListOwnerId << endl;
		cout << "To do list";
		for (string todoList : TodoList) {
			cout << todoList << endl;
		}
	}
};
int main() {
	//Creating Object
	Scrum aScrum("Educator Studio", 001456);
	//Adding a list to todo list
	aScrum.TodoList.push_back("Doo 100 pushups");
	aScrum.TodoList.push_back("Doo 200 pushups");

	aScrum.getInfo();
	
	return 0;
}