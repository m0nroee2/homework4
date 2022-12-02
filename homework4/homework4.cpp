#include <iostream>

using namespace std;

int main()
{

	int tkan_L, dlina_P;

	while (1)
	{

		cout << "Vash zakaz (1-tkan, 2-dlina)" << endl;
		cin >> tkan_L >> dlina_P;

		if (tkan_L <= 0|| dlina_P <=0)
			cout << "IDITE NAHUI, MI VASS NE OBSLUGIVAEM" << endl;
		else
			break;

	}
		cout << tkan_L / dlina_P;

		return 0;
}