

#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    while (i <= 100)
    {
        int j = 2;
        bool check=true;
        while (j * j <= i)
        {
            if (i % j == 0)
            {
                check=false;
            }
            j++;
        }
        if (check)
        {
            cout << i << endl;
        }
		i++;
    }
}

