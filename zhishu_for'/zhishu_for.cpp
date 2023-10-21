

#include <iostream>
using namespace std;
int main()
{
	for (int i = 2; i <= 100; i++)
	{
		bool check=true;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				check=false;
			}
		}
		if (check)
		{
			cout<<i<<endl;
		}
	}
}
