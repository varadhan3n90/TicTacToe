#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


struct DateData
{
	int recording_year;
	int release_year;
};

struct Label
{
	string catalog_number;
	DateData dates;
	string name;
};

struct Composer
{
	string first;
	string last;
};

struct Soundtrack
{
	Composer person;
	Label info;
	string film;
};

void displayData(const Soundtrack record[]);
void displayData(const Soundtrack record[])
{
	for (int count = 0; count < 2; count++)
	{
		cout << "Soundtrack #" << (count + 1) << endl
			<< "Composer full name: " << record[count].person.first << record[count].person.last << endl
			<< "Catalog Number: " << record[count].info.catalog_number << endl
			<< "Recording Year: " << record[count].info.dates.recording_year << endl
			<< "Release Year: " << record[count].info.dates.release_year << endl
			<< "Name: " << record[count].info.name << endl
			<< "Film: " << record[count].film << endl;
	}
} 

int StructureMain()
{
	Soundtrack record[2];
	record[0].person.first = "Miklos";
	record[0].person.last = "Rozsa";
	record[0].info.catalog_number = "72197";
	record[0].info.dates.recording_year = 1959;
	record[0].info.dates.release_year = 1996;
	record[0].info.name = "Rhino";
	record[0].film = "Ben-Hur”";
	record[1].person.first = "Elmer";
	record[1].person.last = "Bernstein";
	record[1].info.catalog_number = "VCL 8124";
	record[1].info.dates.recording_year = 1963;
	record[1].info.dates.release_year = 2004;
	record[1].info.name = "Varese Sarabande";
	record[1].film = "The Great Escape";
	displayData(record);
	system("pause");
	return 0;
}

