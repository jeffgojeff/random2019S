#include <iostream>
using namespace std;


int main()
{
	int x = 1;

	while ( x != 0)
	{
		for (int i = 0; i < 5; i++)
		{
			if (i == 0)
			{
				cout << "B" << "ored ";
			}
			else if (i == 1)
			{
				cout << "b" << "O" << "red ";
			}
			else if (i == 2)
			{
				cout << "bo" << "R" << "ed ";
			}
			else if (i == 3)
			{
				cout << "bor" << "E" << "d ";
			}
			else if (i == 4)
			{
				cout << "bore" << "D ";
			}
		}
	}

}

//commit example
