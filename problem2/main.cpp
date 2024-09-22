#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	float a, b, c;

	cin>>a>>b>>c;

	float D = b*b - 4*a*c;

	if(D<0)
	{
		cout<<"The equation has no solution"<<'\n';
	} else if(D==0.0)
	{
		float x = (-b)/2*a;
		cout<<"x: "<<x<<'\n';
	} else {
		float x1 = ((b*-1) + sqrt(D))/2*a;
		float x2 = ((b*-1) - sqrt(D))/2*a;

		cout<<"x1: "<<x1<<'\n';
		cout<<"x2: "<<x2<<'\n';
	}
	
}
