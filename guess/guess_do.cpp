#include<iostream>
using namespace std;
int main()
{
	const int ans = 23;
	int guess;
	int now_big, now_small;
	now_big = 100;
	now_small = 0;
	do
	{
		cout<<"Please input your guess from "<<now_small<<" to "<<now_big<<":";
		cin>>guess;
		if (guess<now_small || guess>now_big)
		{
			cout<<"Invalid input!"<<endl;
			continue;
		}
		if (guess > ans)
		{
			cout<<"Too big!"<<endl;
			now_big=guess;
		}
		else if (guess < ans)
		{
			cout<<"Too small!"<<endl;
			now_small=guess;
		}
		else
		{
			cout<<"Bingo!"<<endl;
		}
	} while (guess != ans);
}