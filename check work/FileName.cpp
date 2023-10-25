#include<iostream>
using namespace std;
int main()
{
	cout << "你考试考了多少分？";
	int score;
	cin >> score;
	if (score >= 85)
		cout << "优" << endl;
	else if (score >= 75)
		cout << "良" << endl;
	else if (score >= 60)
		cout << "中" << endl;
	else
		cout << "差" << endl;
}