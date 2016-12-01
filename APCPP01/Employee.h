#include <sstream>

using namespace std;

// Base class
class Employee
{
//'protected' can by derived class, but 'private' cannot be.
protected:
	string name;
	double pay;
public:
	Employee() {
		name = "";
		pay = 0;
	}

	Employee(string empName, double payRate) {
		name = empName;
		pay = payRate;
	}

	string getName() {
		return name;
	}

	int getPay() {
		return pay;
	}

	void setName(string empName) {
		name = empName;
	}

	double setPay(double payRate) {
		pay = payRate;
		return pay;
	}

	string toString() {
		stringstream stm;
		stm << name << ": " << pay;
		return stm.str();
	}

	double grossPay(int hours) {
		return pay*hours;
	}

};

// Derived class
class Manager : public Employee {
private:
	bool salaried;
public:
	Manager(string name, double payRate, bool isSalaried) : Employee(name, payRate) {
		salaried = isSalaried;
	}

	bool getSalaried() {
		return salaried;
	}

	double grossPay(int hours) {
		if (salaried) {
			return pay;
		}
		else {
			return pay*hours;
		}
	}

};