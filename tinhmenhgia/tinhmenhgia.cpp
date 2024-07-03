#include <iostream>
#include <cmath>
using namespace std;
bool CheckSCP(int so)
{
	if ((int)sqrt(so) == sqrt(so)) return true;
	return false;
}
int main()
{
	int so;
	cin >> so;
	for (int i = 0; i <= so; i++)
	{
		if (CheckSCP(i)) cout << i << " ";
	}
}