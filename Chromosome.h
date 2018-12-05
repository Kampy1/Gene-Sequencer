#ifndef CHROMOSOME_H
#define CHROMOSOME_H

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include "Allele.h"
#include "Gene.h"
#include "Sequencer.h"

using namespace std;

class Chromosome
{
  private:
	vector<Gene> genes;
	string fileName;

  public:
	Chromosome();

	void AnalyzeGenotype();
	void InputFromFile(ifstream &ifs);
	void OutputToFile(ofstream &ofs);
	void AddGene(Gene g);
	Gene FindGene(string name);

	Chromosome operator+(Chromosome rhs);

	bool RunUnitTests();
};

#endif