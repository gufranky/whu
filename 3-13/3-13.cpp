#include<iostream>
using namespace std;
int f(int i)
{
	if (i == 1)
	{
		return 1;
	}
	if (i == 2)
	{
		return 1;
	}
	return f(i - 1) + f(i - 2);
}
int  main()
{
	int n;
	cin >> n;
	cout << f(n) << endl;
}