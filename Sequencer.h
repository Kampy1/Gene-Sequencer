#ifndef SEQUENCER_H
#define SEQUENCER_H

#include <iostream>
#include <cstring>
#include <string>
#include "Chromosome.h"

using namespace std;

class GeneSequencer
{
  private:
  public:
	Chromosome CreateChromosome();

	Chromosome ImportChromosome(const string &fileName = "");

	void ExportChromosome(Chromosome c, const string &fileName = "");

	Chromosome DoMeiosis(Chromosome x, Chromosome y);

	void SequenceChromosome(Chromosome c);

	bool PowerOnSelfTest();
};

#endif