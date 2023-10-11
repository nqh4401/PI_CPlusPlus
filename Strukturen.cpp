/////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXII
// Versuch 1.2: Strukturen
//
// Datei:  Strukturen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

struct Person
{
	std::string sVorname;
	std::string sNachname;
	int iGeburtsjahr;
	int iAlter;
};

int main()
{
	Person nBenutzer;
	std::cout << "Vorname: " << std::endl;
	std::cin >> nBenutzer.sVorname ;
	std::cout << "Nachname: " << std::endl;
	std::cin >> nBenutzer.sNachname ;
	std::cout << "Geburtsjahr: " << std::endl;
	std::cin >> nBenutzer.iGeburtsjahr ;
	std::cout << "Alter: " << std::endl;
	std::cin >> nBenutzer.iAlter ;

    Person nKopieEinzeln;
    Person nKopieGesamt;
    nKopieEinzeln.sVorname = nBenutzer.sVorname;
    nKopieEinzeln.sNachname = nBenutzer.sNachname;
    nKopieEinzeln.iGeburtsjahr = nBenutzer.iGeburtsjahr;
    nKopieEinzeln.iAlter = nBenutzer.iAlter;
    std::cout << nKopieEinzeln.sVorname << ", " << nKopieEinzeln.sNachname << "/" << nKopieEinzeln.iGeburtsjahr << "/ " << nKopieEinzeln.iAlter << std::endl;
    return 0;
}
