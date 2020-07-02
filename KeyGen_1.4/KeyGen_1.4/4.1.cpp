#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main() {
	ofstream resValidate;
	ofstream resValidateDIZ;

	int RandNumber = rand() % 5 + 1;
	resValidate.open("RES-REGGED.txt", ios::out);
	resValidate << RandNumber;

	resValidateDIZ.open("RES-VALIDATE.diz", ios::out);
	resValidate.close();
	resValidateDIZ.close();

	char Name[256];
	char* NameRev;

	cout << ("Name: ");
	cin >> Name;

	NameRev = _strrev(Name);
	int tmp = 0;
	char Serial[256];

	for (int i = 0; i < strlen(Name); i++) {
		tmp -= (NameRev[i] - 0x20);
	}

	sprintf_s(Serial, "%1X", tmp);
	cout << "Serial: " << _strrev(Serial) << endl;

	return 0;
}