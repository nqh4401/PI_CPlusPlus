//============================================================================
// Name        : Versuch02Teil1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

int main()
{
	int f[25];
	f[0] = 0;
	f[1] = 1;
	for(int i = 1; i < 25 ; i++)
	{
		f[i+1] = f[i] + f[i-1];
	}

	for(int i = 1; i < 25 ; i++)
	{
		std::cout << f[i-1] << std::endl;
	}
 	return 0;
}
