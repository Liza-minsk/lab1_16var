// student.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"Stud.h"
#include<iostream>
using namespace std;
Student *st;
void a(Student *st, int k) {
	std::string f;
	cout << "Vvedite nazvanie fakulteta" << endl;
	cin>> f;
	for (int i = 0;i < k;i++)
	{
		if (st[i].getFak() == f)
			cout << st[i].getName_f() << " " << st[i].getName() << " " << st[i].getKurs() << endl;
			cout << "Takih studentow net" << endl;
	}
}

void b(Student *st,int k ) {
	int a;
	std::string f;
	cout << "Vvedite fakultet" << endl;
	cin>>f;
	for (int i = 0;i < k;i++)
	{
		if (st[i].getFak() == f)
		{
			cout << "Vvedite kurs" << endl;
			cin >> a;
			for (int i = 0;i < k;i++)
			{
				if (st[i].getKurs() == a)
					cout << st[i].getName_f() << " " << st[i].getName() << endl;
			}


		}
		else cout << "Takogo fakulteta net" << endl;

	}




}
void c(Student *st, int k)
{
	int a;
	cout << "Vvedite zadannii god" << endl;
	cin >> a;
	for (int i = 0;i < k;i++)
	{
		if (st[i].getDay() < a)
			cout << st[i].getName_f() << st[i].getName()<<endl;
		cout << "Takih studentov net" << endl;
	}

}
void d(Student *st, int k) {
	std::string f;
	int t;
	cout << "Vvedite nazvanie fakulteta" << endl;
	cin >> f;
	for (int i = 0;i < k;i++)
	{
		if (st[i].getFak() == f)
		{
			cout << "Vvedite nomer gruppi" << endl;
			cin >> t;
			for (int i = 0;i < k;i++)
			{ if (st[i].getGruppa()==t)
				cout << st[i].getName_f() << " " << st[i].getName() << " " << st[i].getGruppa() << endl;
			cout << "Ukazannoi vami gruppi net" << endl;
			}
		}			
			cout << "Takoi gruppi na ukazanom fakultete net" << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int v;
	Student c1(1,"Ivanow","Ivan","Ivanovich",25,7,1994,"Minsk, Majakovskogo 160-24",+375333654734,"FIT",4,2);
	Student c2(2,"Sidorov","Sergei","Mihailovich",1,12,1997,"Brest, Lenina 5-34",+375442348765,"HTIT",2,8);
	Student c3(3,"Nazarova","Ekaterina","Andreevna",17,9,1995,"Minskaja obl., Derginskii r-n, d.Ivanovo, Centralnaja 23", +375292564487,"IEF",3,1);
	do {
		cout << "0 - vihod" << endl;
		cout << "1 - spisok studentov zadannogo fakulteta" << endl;
		cout << "2 - spisok studentov dlja kagdogofakulteta i kursa " << endl;
		cout << "3 - spisok studentov, rodivchihsja posle zadannogo goda" << endl;
		cout << "4 - spisok uchebnoi gruppi" << endl;
		cin >> v;
		switch (v)
		{
		case 1:a(st,3); break;
		case 2:b(st,3); break;
		case 3:c(st,3); break;
		case 4:d(st,3); break;
		

		}
	} while (a != 0);
	return 0;
}

