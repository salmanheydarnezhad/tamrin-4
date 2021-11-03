
#include<iostream>
using namespace std;

int main()
{
	int a, f=1,k=2;
	cout << "adadi vared konid : ";
	cin >> a;
	while (true)
	{
		if (a == f) {
			cout << "yes" << endl;
			break;
		}
		f = f*k++;
		if (f > a)
			break;

	}
	if(f!=a)
		cout << "no" << endl;

	system("pause");
    return 0;
}

