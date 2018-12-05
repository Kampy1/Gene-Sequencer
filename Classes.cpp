#include <iostream>
#include <cstring>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include "Sequencer.h"

using namespace std;

class Allele
{
  private:
	string nucleotideSequence;
	string variantName;
	string variantType;

  public:
	Allele();
	Allele(string nucleotideSequence, string variantName, string variantType);

	Allele WriteAlleleToFile(ofstream &);
};

class Gene
{
  private:
  public:
};

class Chromosome
{
  private:
  public:
};

class GeneSequencer
{
  private:
  public:
};