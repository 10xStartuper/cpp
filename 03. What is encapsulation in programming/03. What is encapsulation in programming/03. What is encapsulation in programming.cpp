#include <iostream>
#include <list>

using namespace std;
class BankAccount {
private:
	string Name;
	int USD;
	list<string> Shares;
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
int main() {
	BankAccount user1("Mukhammadyusuf Abdurakhimov");
	user1.fundAccount(1200);
	user1.addShare("SalomPay - 1200");
	user1.addShare("JamshidPay - 987");
	user1.widraw(1200);
	
	user1.getInfo();

	return 0;
}