// student.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Stud.h"
#include<iostream>
using namespace std;
int q,t;
void a(Student *st, int k) {
	std::string f;
	cout << "Vvedite nazvanie fakulteta" << endl;
	cin>>f;
	for (int i = 0;i < k;i++)
	{
		if (st[i].getFak() == f)
		{
			q++;

			
				cout << st[i].getName_f() << " " << st[i].getName() << " " << st[i].getKurs() << endl;
			
			
		}
		
	}
	if(q==0)
		cout << "Takogo fak net" << endl;
}

void b(Student *st, int k) {
	q = 0; t = 0;
	int a;
	std::string f;
	cout << "Vvedite fakultet" << endl;
	cin >> f;
	for (int i = 0;i < k;i++)
	{
		if (st[i].getFak() == f)
		{
			q++;
				cout << "Vvedite kurs" << endl;
				cin >> a;
					if (st[i].getKurs() == a)
					{
						t++;					
						
							cout << st[i].getName_f() << " " << st[i].getName() << endl;
						
					}						
				if (t == 0)
					cout << "Net grupp" << endl;
			}
		}
	if (q == 0)
		cout << "Net takogo fakulteta" << endl;

	}
	
void c(Student *st, int k)
{
	int a;
	q = 0;
	cout << "Vvedite zadannii god" << endl;
	cin >> a;
	for (int i = 0;i < k;i++)
	{
		if (st[i].getYar() < a)
		{
			q++;
			cout << st[i].getName_f() << st[i].getName() << endl;
		}
		
	}
	if (q==0)
		cout << "Takih studentov net" << endl;

}
void d(Student *st, int k) {
	std::string f;
	int s;
	q = 0;t = 0;
	cout << "Vvedite nazvanie fakulteta" << endl;
	cin >> f;
	for (int i = 0;i < k;i++)
	{
		
		if (st[i].getFak() == f)
		{
			q++;
			cout << "Vvedite nomer gruppi" << endl;
			cin >> s;
			if (st[i].getGruppa() == s)
			{
				t++;
				cout << st[i].getName_f() << " " << st[i].getName() << " " << st[i].getGruppa() << endl;
			}
			if (t == 0)
				cout << "Net takoi gruppi" << endl;
		}			
	}
	if (q == 0)
		cout << "Takogo fakulteta net" << endl;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int v;
	Student c1(1,"Ivanow","Ivan","Ivanovich",25,7,1992,"Minsk, Majakovskogo 160-24",+375333654734,"FIT",4,2);
	Student c2(2,"Sidorov","Sergei","Mihailovich",1,12,1998,"Brest, Lenina 5-34",+375442348765,"HTIT",2,8);
	Student c3(3,"Nazarova","Ekaterina","Andreevna",17,9,1995,"Minskaja obl., Derginskii r-n, d.Ivanovo, Centralnaja 23", +375292564487,"IEF",3,1);
	Student st[] = { c1,c2,c3 };
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
	} while (v != 0);
	return 0;
}

