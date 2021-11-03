
#include<iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "n ra vard konid : ";
	cin >> n ;
	cout << "m ra vard konid : ";
	cin >>  m;
	cout << endl;
	int i = 1, k = 1;
	while (i<=n){
		k = 1;
		while (true){
			if (k <= m){
				if (k % 2 && i%2)
					cout << "#";
				else
					cout << "*";
			}
			else
				break;
			k++;
			if (k <= m){
				if (k % 2==0 && i%2==0)
					cout << "#";
				else
					cout << "*";
			}
			else
				break;
			k++;
		}
		cout<<endl;
		i++;
	}
	system("pause");
    return 0;
}

