///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXII
// Versuch 2.3: Felder
//
// Datei:  Verschuesselung.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

using namespace std;

#include <iostream>
#include <string>

string verschluesseln(char schluessel[2][26], string wort)
{
	// Hier folgt Ihr Code

	for(int i = 0; i < wort.length(); i++)
	{
		for(int j = 0 ; j < 26; j++)
		{
			if (wort[i] == schluessel[0][j])
			{
				wort[i] = schluessel[1][j];
				break;
			}
		}
	}
	return wort;
}

string entschluesseln(char schluessel[2][26], string wort)
{
	// Hier folgt Ihr Code
	for(int i = 0; i < wort.length(); i++)
		{
			for(int j = 0 ; j < 26; j++)
			{
				if (wort[i] == schluessel[1][j])
				{
					wort[i] = schluessel[0][j];
					break;
				}
			}
		}
	return wort;
}

int main()
{
	// Hier folgt Ihr Code
	char feld[2][26];
	for(int i = 0 ; i < 26; i++)
	{
		feld[0][i] = 65 + i;
	}

	for(int i = 0 ; i < 26; i++)
	{
		feld[1][i] = 90 - i;
	}

	std::string sWort = "HUY";
	verschluesseln(feld, sWort);
	std::cout << verschluesseln(feld, sWort) << std::endl;
	std::cout << entschluesseln(feld, verschluesseln(feld, sWort)) << std::endl;
	return 0;
}
