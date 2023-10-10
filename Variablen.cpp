//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXII
// Versuch 1.1: Datentypen und Typumwandlung
//
// Datei:  Variablen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main()
{
    int iErste = 2;
    int iZweite = 3;
    
    // Hier folgt Ihr eigener Code
    int iSumme = 0;
    int iQuotient = 0;
    double dSumme = 0.0;
    double dQuotient = 0.0;
    double dSummeCast = 0.0;
    double dQuotientCast = 0.0;

    iSumme = iErste + iZweite;
    iQuotient = iErste / iZweite;

    dSumme = iErste + iZweite;
    dQuotient = iErste / iZweite;

    dSummeCast = (double)iErste + (double)iZweite;
    dQuotientCast = (double)iErste / (double)iZweite;

    std::cout << "iSumme: " << iSumme << std::endl;
    std::cout << "iQuotient: " << iQuotient << std::endl;
    std::cout << "dSumme: " << dSumme << std::endl;
    std::cout << "dQuotient: " << dQuotient << std::endl;
    std::cout << "dSummeCast: " << dSummeCast << std::endl;
    std::cout << "dQuotientCast: " << dQuotientCast << std::endl;

    std::string sVorname;
    std::string sNachname;

    std::cout << "Vorname: " << std::endl;
    std::cin >> sVorname;
    std::cout << "Nachname: " << std::endl;
    std::cin >> sNachname;

    std::cout << "Vorname Nachname: " << sVorname + " " + sNachname << std::endl;
    std::cout << "Name, Vorname: " << sNachname + ", " + sVorname << std::endl;

    {
    	int iFeld[2];
    	iFeld[0] = 1;
    	iFeld[1] = 2;

    	std::cout << "iFeld[0]: " << iFeld[0] << std::endl;
    	std::cout << "iFeld[1]: " << iFeld[1] << std::endl;

    	int spielfeld[2][3] = {{1,2,3},
    							{4,5,6}};
    	for (int i = 0; i <= 1;  i++) {
    		for (int j = 0; j <= 2; j++){
    			std::cout << "spielfeld" << i << j << ": " << spielfeld[i][j] << std::endl;
    		}
    	}

    	const int iZweite = 1;
    	std::cout << "iZweite: " << iZweite << std::endl;
    }
    std::cout << "iZweite: " << iZweite << std::endl;

    char cName1 = 'H';
    char cName2 = 'u';
    int iName1 = cName1;
    int iName2 = cName2;
    std::cout << "iName1: " << iName1 << std::endl;
    std::cout << "iName2: " << iName2 << std::endl;

    return 0;
    
}
