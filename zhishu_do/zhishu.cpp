#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	do
	{
		i++;
		bool check = true;
		int j = 1;
		do
		{
			j++;
			if ((i!=j)&&(i % j == 0))
			{
				check = false;
			}
		} while (j * j <= i);
		if (check)
		{
			cout<<i<<endl;
		}
	} while (i <= 99);
}