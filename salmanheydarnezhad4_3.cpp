
#include<iostream>
using namespace std;

int main()
{
	int n1, n2, k;
	cout << "adad aval ra vared konid : ";
	cin >> n1;
	cout << "adad dovom ra vared konid : ";
	cin >> n2;
	if (n1 > n2)
		k = n1;
	else
		k = n2;

	while (true)
		if (k%n1 == 0 && k%n2 == 0)
			break;
		else
			k++;

	cout << endl << "kmm " << n1 << " , " << n2 << " = " << k << endl;

	system("pause");
    return 0;
}

