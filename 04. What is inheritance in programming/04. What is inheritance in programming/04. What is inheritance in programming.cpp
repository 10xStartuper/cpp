#include <iostream>
#include <list>

using namespace std;
class BankAccount {
private:
	int USD;
	list<string> Shares;
protected:
	string Name;

public:
	BankAccount(string name) {
		Name = name;
		USD = 0;
	}
	void getInfo() {
		cout << "Name: " << Name << endl;
		cout << "USD: " << USD << endl;
		cout << "Shares: " << endl;
		for (string share : Shares) {
			cout << share << endl;
		}

	}
	void fundAccount(int fund) {
		USD = USD + fund;
	}
	void widraw(int fund) {
		if (USD < fund) {
			system("color c");
			cout << "\nFuck you asshole, you don't have such money!\n" << endl;
		}
		else {
			system("color a");
			USD = USD - fund;
			cout << "\n$" << fund << " has been successfully refunded!\n" << endl;
		}
	}
	void addShare(string shareName) {
		Shares.push_back(shareName);
	}

};
class UserAccount:public BankAccount {
public:
	UserAccount(string name):BankAccount(name){
	}
	void getName() {
		cout << "Name: "<<  Name << endl;
	}
};
int main() {
	UserAccount user1("Mukhammadyusuf");
	user1.fundAccount(1200);
	user1.addShare("SalomPay - 1200");
	user1.addShare("JamshidPay - 987");
	user1.widraw(1200);

	user1.getInfo();
	user1.getName();
	return 0;
}