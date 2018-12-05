/*	Project:    GENE SEQUENCER
	Name:       NATHAN KAMPRATH
    Class:      example: CSC 1810 - Section 2
*/

#include <iostream>
#include <cstring>
#include <string>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include "Sequencer.h"

using namespace std;

int Menu(int choice)
{
	GeneSequencer sequencer;
	Chromosome c;

	cout << "Selection" << endl;
	cout << "1 - Create Chromosome" << endl;
	cout << "2 - Analyze Chromosome" << endl;
	cout << "3 - Output Chromosome to file" << endl;
	cout << "4 - Input Chromosome from file" << endl;
	cout << "5 - Combine Chromosome" << endl;
	cout << "6 - Exit" << endl;
	cin >> choice;
	if (choice == 1)
	{
		c = sequencer.CreateChromosome();
	}
	else if (choice == 2)
	{
	}
	else if (choice == 3)
	{
		c.ExportToFile();
	}
	else if (choice == 4)
	{
		c.ImportFromFile();
	}
	else if (choice == 5)
	{
	}
	else
	{
		cout << "Thank you" << endl;
		break;
	}

	return choice;
}

int main(int argc, char *argv[])
{
	int Choice;

	Menu(Choice);

	return 0;
}