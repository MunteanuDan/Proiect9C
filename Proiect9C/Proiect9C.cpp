#include <iostream>
using namespace std;


// EXEMPLU 1
/*
class Student
{
public:
	char nume[40];
private:
	int matricol;
protected:
	float medie;
public:
	void init(const char* n = "Anonim", int nr = 0, int m = 0)
	{
		strcpy_s(nume, n);
		matricol = nr;
		medie = m;
	}

	char* returneaza_nume();
};

char* Student::returneaza_nume()
{
	return nume;
}

void main()
{
	Student s;
	s.init(); // aici apelam init
	cout << s.nume << endl; // afiseaza anonim
	// cu pointeri
	Student* ps;
	ps = &s;
	cout << ps->returneaza_nume() << endl; // afiseaza anonim
										// aici apelam returneaza_nume() din char* Student::returneaza_nume()
	


}
*/

// EXEMPLU 2

class Statie_metrou
{
	char denumire[40];
	int magistrala;
	char peron[20];
	int legatura;

public:
	void init(const char* d = "Statie oarecare", int m = 0, const char* p = "nu are", int l = 0)
	{
		strcpy_s(denumire, d);
		magistrala = m;
		strcpy_s(peron, p);
		legatura = l;
	}

	void anunta_statie();
	
};

void Statie_metrou::anunta_statie()
{
	if (legatura > 0)
		cout << "Urmeaza statia " << denumire << ", de pe magistrala M " << magistrala << ", cu peronul pe partea " << peron << ". Corespondenta cu magistrala M" << legatura << "." << endl;
	else
		cout << "Urmeaza statia " << denumire << ", de pe magistrala M " << magistrala << ", cu peronul pe partea " << peron << "." << endl;
}

void main()
{
	Statie_metrou piata_victoriei;
	piata_victoriei.init("Piata Victoriei", 2, "dreapta", 1);
	piata_victoriei.anunta_statie();
}