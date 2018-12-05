#include <iostream>
#include <string>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include "Sequencer.h"

Allele::Allele()
{
	nucleotideSequence = "";
	variantName = "";
	variantType = "";
}
Allele::Allele(string NucSeq, string VarName, string VarType)
{
	NucSeq = nucleotideSequence;
	VarName = variantName;
	VarType = variantType;
}
void Allele::SetVariables(string NucSeq, string VarName, string VarType)
{
	cout << "Enter Nucleotide Sequence" << endl;
	cin >> NucSeq;
	cout << endl;
	cout << "Enter Variant Name" << endl;
	cin >> VarName;
	cout << endl;
	cout << "Enter Variant Type" << endl;
	cin >> VarType;
	cout << endl;
}
Allele Allele::WriteAlleleToFile(ofstream &)
{
	cout << endl;
}
