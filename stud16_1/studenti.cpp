#include "student.h"
using namespace std;
Student::Student()
{}
Student::Student(const Student &)
{
}
Student::Student(int ID, std::string NAME_F, std::string NAME, std::string OT, day D, day M, day Y, std::string ADRES, int TELEF, std::string FAK, int KURS, int GRUPPA)
{
	id = ID;
	strcpy(name_f, NAME_F);
	strcpy(name, NAME);
	strcpy(ot, OT);
	d = DAY;
	strcpy(adres, ADRES);
	telef = TELEF;
	strcpy(fak, FAK);
	kurs = KURS;
	gruppa = GRUPPA;
}
Student::~Student(void)
{}
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
	strcpy(NAME_F, name_f);
}
std::string Student::getName_f(void)
{
	return name_f;
}
void Student::setName(std::string NAME)
{
	strcpy(NAME, name);
}
std::string Student::getName(void)
{
	return name;
}
void Student::setOt(std::string OT)
{
	strcpy(OT, ot);
}
std::string Student::getOt(void)
{
	return ot;
}
void Student::setDay(day D, day M, day Y)
{
	d.day = D;
	d.month = M;
	d.yar = Y;
}
void Student::getDay(void)
{
	return d.day;
	return d.month;
	return d.yar;
}
void Student::setAdres(std::string ADRES)
{
	strcpy(ADRES, adres);
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
	strcpy(FAK, fak);
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
void Student::setAge(int DAY)
{

}
int Student::getDay(void)
{
	return
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