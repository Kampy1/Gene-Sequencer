#ifndef GENE_H
#define GENE_H

#include <iostream>
#include <cstring>
#include <string>
#include "Allele.h"

using namespace std;

class Gene
{

  private:
	string Name;
	string Trait;
	string Allele1;
	string Allele2;
	string Sequence;
	string GeneNum;
	int GeneCount;

  public:
	Gene();
	Gene(Allele a, Allele b);

	void WriteToFile(ofstream &);

	Allele GetExpressedTrait();

	bool RunUnitTests();
};

Gene::Gene()
{

	if (GeneCount != 0)
	{
		cout << "Gene " << GeneNum << endl;
		cout << "Name:  " << Name << endl;
		cout << "Genetic Trait:  " << Trait << endl;
		cout << "Expressed Allele:  " << Allele1 << endl;
		cout << "Nucleotide Sequence:  " << Sequence << endl;
	}
}

#endif