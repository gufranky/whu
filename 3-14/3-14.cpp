#include<iostream>
using namespace std;
int p(int n, int x)
{
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return x;
	}
	return ((2 * n - 1) * x - p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;

}
int main()
{
	int n, x;
	cin >> n >> x;
	cout << p(n, x) << endl;
}