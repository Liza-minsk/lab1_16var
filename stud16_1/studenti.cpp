#include "Stud.h"
using namespace std;
Student::Student()
{
	cout << "Constructor bez parametr" << endl;
	id = 0;
	name_f = "";
	name = "";
	ot = "";
	d.day = 0;
	d.month = 0;
	d.yar = 0;
	adres = "";
	telef = 0;
	fak="";
	kurs = 0;
	gruppa = 0;
}
Student::Student(const Student &a)
{
	cout << "Copir constructor" << endl;
	id = a.id;
	name_f = a.name_f;
	name = a.name;
	ot = a.ot;
	d.day = a.d.day;
	d.month = a.d.month;
	d.yar = a.d.yar;
	adres = a.adres;
	telef = a.telef;
	fak = a.fak;
	kurs = a.kurs;
	gruppa = a.gruppa;
}
Student::Student(int ID, std::string NAME_F, std::string NAME, std::string OT, int D, int M, int Y, std::string ADRES, int TELEF, std::string FAK, int KURS, int GRUPPA)
{
	cout << "Constructor s parametr" << endl;
	id = ID;
	name_f= NAME_F;
	name=NAME;
	ot=OT;
	d.day = D;
	d.month = M;
	d.yar = Y;
	adres=ADRES;
	telef = TELEF;
	fak=FAK;
	kurs = KURS;
	gruppa = GRUPPA;
}
Student::~Student(void)
{
	cout << "Destructor" << endl;
}
void Student::setId(int ID)
{
	id = ID;
}
int Student::getId(void)
{
	return id;
}
void Student::setName_f(std::string NAME_F)
{
	NAME_F=name_f;
}
std::string Student::getName_f(void)
{
	return name_f;
}
void Student::setName(std::string NAME)
{
	NAME=name;
}
std::string Student::getName(void)
{
	return name;
}
void Student::setOt(std::string OT)
{
	OT=ot;
}
std::string Student::getOt(void)
{
	return ot;
}
void Student::setDay(int D, int M, int Y)
{
	d.day = D;
	d.month = M;
	d.yar = Y;
}
int Student::getDay(void)
{
	return d.day;
	return d.month;
	return d.yar;
}
void Student::setAdres(std::string ADRES)
{
	ADRES=adres;
}
std::string Student::getAdres(void)
{
	return adres;
}
void Student::setTelef(int TELEF)
{
	telef = TELEF;
}
int Student::getTelef(void)
{
	return telef;
}
void Student::setFak(std::string FAK)
{
	fak=FAK;
}
std::string Student::getFak(void)
{
	return fak;
}
void Student::setKurs(int KURS)
{
	kurs = KURS;
}
int Student::getKurs(void)
{
	return kurs;
}
void Student::setGruppa(int GRUPPA)
{
	gruppa = GRUPPA;
}
int Student::getGruppa(void)
{
	return gruppa;
}
int Student::stAge(int Y,int b)
{
	b = 2015 - Y;
	return b;
}

void Student::print()
{
	cout << "Id - " << Student::id << endl;
	cout << "Name_f - " << Student::name_f << endl;
	cout << "Name - " << Student::name << endl;
	cout << "Ot - " << Student::ot << endl;
	cout << "Day - " << Student::d << endl;
	cout << "Adres - " << Student::adres << endl;
	cout << "Telef - " << Student::telef << endl;
	cout << "Fakyl - " << Student::fak << endl;
	cout << "Kurs - " << Student::kurs << endl;
	cout << "Gruppa - " << Student::gruppa << endl;
}