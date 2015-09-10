#pragma once
#include<iostream>
class Student {
private:
	int id;
	std::string name_f;
	std::string name;
	std::string ot;
	struct day {
		int day;
		int month;
		int yar;
	} d;
	std::string adres;
	int telef;
	std::string fak;
	int kurs;
	int gruppa;
public:
	Student();
	Student(int, std::string, std::string, std::string, day, day, day, std::string, int, std::string, int, int);
	Student(const Student&);
	~Student(void);
	void setId(int);
	int getId();
	void setName_f(std::string);
	std::string getName_f();
	void setName(string);
	std::string getName(void);
	void setOt(std::string);
	std::string getOt();
	void setDay(day);
	void getDay(void);
	void setAdres(std::string);
	void setTelef(int);
	std::string getAdres(void);
	void setFak(std::string);
	std::string getFak(void);
	int getTelef(void);
	void setKurs(int);
	int getKurs(void);
	void setGruppa(int);
	int getGruppa(void);
	void print();
	void age(int);
};
