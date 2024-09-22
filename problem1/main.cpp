#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {

	// ios_base::sync_with_stdio(false);
	// cin.tie(nullptr);
	
	string name;
	ll grossSalary, installment, insurance;

	cout<<"Enter your name: ";
	cin>>name;

	cout<<"The grossSalary: ";
	cin>>grossSalary;

	cout<<"The installment: ";
	cin>>installment;

	cout<<"The insurance: ";
	cin>>insurance;

	ll tax = 0.2*grossSalary;
	ll netSalary = grossSalary - tax - installment - insurance;

	cout<<"Payslip for Employee"<<endl;
	cout<<"----------------------"<<endl;
	cout<<"Name: ";
	cout<<name<<'\n';
	cout<<"Tax (20%): ";
	cout<<tax<<'\n';
	cout<<"Installment: ";
	cout<<installment<<'\n';
	cout<<"Insurance: ";
	cout<<insurance<<'\n';
	cout<<"Net Salary: ";
	cout<<netSalary<<'\n';

	
}
