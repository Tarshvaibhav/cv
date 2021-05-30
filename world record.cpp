#include<iostream>

using namespace std;

int main()
{
	float k1,k2,k3;
	double v;
	int n;
	cin>>n;
	while(n!=0)
	{
		cin>>k1;
		cin>>k2;
		cin>>k3;
		cin>>v;
		double result;
	result = 100/(k1*k2*k3*v);
	if(result>=9.5750000)
	cout<<"NO";
	else
	cout<<"YES";
		n--;
	}
	
	return 0;
}
