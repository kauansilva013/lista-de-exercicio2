#include <iostream>
using namespace std;

int main()
{
	int n1;
	int n2;
	
	cout << "Informe o 1. numero: ";
	cin >> n1;
	
	cout << "Informe o 2. numero: ";
	cin >> n2;
	
	if (n1 == n2)
    {
		cout << "Os numeros eram iguais";
	}
	else
	{
		if (n1 > n2)
        {
	    	cout << "O 1. numero era maior";
        }
        else
	    {
		    cout << "O 2. numero era maior";
    	}
	}
	
	
	
	return 0;
}
