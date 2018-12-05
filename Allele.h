#ifndef ALLELE_H
#define ALLELE_H

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Allele
{
  private:
	string nucleotideSequence;
	string variantName;
	string variantType;

  public:
	Allele();

	Allele(string NucSeq, string VarName, string VarType);

	void SetVariables(string NuqSeq, string VarName, string VarType);

	Allele WriteAlleleToFile(ofstream &);
	//set and get
	bool RunUnitTests();
};

#endif