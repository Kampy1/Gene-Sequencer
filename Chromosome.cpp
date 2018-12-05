#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include "Allele.h"
#include "Chromosome.h"
#include "Gene.h"

using namespace std;

Chromosome::Chromosome() {}

void Chromosome::AnalyzeGenotype() {}

void Chromosome::InputFromFile(ifstream &ifs)
{
}

void Chromosome::OutputToFile(ofstream &ofs)
{
	for (int i = 0; i < genes.size(); i++)
	{
		genes.at(i).WriteToFile(ofs);
	}
}

void Chromosome::AddGene(Gene g) {}

Gene Chromosome::FindGene(string name)
{
}

Chromosome operator+(Chromosome rhs) {}

bool Chromosome::RunUnitTests() {}