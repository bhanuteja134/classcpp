#include<iostream>
using namespace std;

class bank{
	public:
		string branch;
		string name;
		string ifsc;
		bank(string b, string n, string i)
		{
			this->branch= b;
	    this->name = n;
		this->ifsc = i;
		}
	    
		void PrintDetails() {
			cout << "Branch" << branch << endl;
			cout << "Name" << name << endl;
			cout << "Ifsc" << ifsc << endl;
		}
};
int main(){
	bank b1("Union bank of india", "teja", "1234567890");
	b1.PrintDetails();
}
