#include <iostream>
#include <Windows.h>
#include <chrono>
#include <random>

#include "Commande.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	Commande cde_1(1, "Contenu Cde_1");
	cout << cde_1 << endl;
	cde_1.Preparer();
	cout << cde_1 << endl;
	cde_1.Expedier();
	cout << cde_1 << endl;
	cde_1.Livrer();
	cout << cde_1 << endl;

	// exemples g�n�rant 10 nombres entiers al�atoires entre 1 et 6 inclus (un d�...)
	// Version "classique"
	cout << endl << "G�n�ration al�atoire classique" << endl;
	int val;
	srand((unsigned int)time(0));
	for (int i = 0; i < 10; i++)
	{
		val = rand() % 6 + 1;
		cout << val << "; ";
	}
	cout << endl;

	// version librairie standard
	// N�cessite les includes:
	//#include <chrono>
	//#include <random>
	cout << endl << "G�n�ration al�atoire librairie standard" << endl;
	std::default_random_engine engine(std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<int> distrib{ 1, 6 };
	for (int i = 0; i < 10; i++)
	{
		cout << distrib(engine) << "; ";
	}
	cout << endl;

}

