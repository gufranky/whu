#include<iostream>
using namespace std;
short int f(unsigned short int a,unsigned short int b)
{
	if (b == 0)
	{
		return -1;
	}
	return a / b;
}
int main()
{
	unsigned short int a, b;
	cin >> a >> b;
	cout << f(a, b) << endl;
}