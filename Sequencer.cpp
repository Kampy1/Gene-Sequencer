#include <iostream>
#include <cstring>
#include <string>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include "Sequencer.h"

Chromosome GeneSequencer::CreateChromosome()
{
	//Call Allele func and then call the gene func to creat chromosomes
}

Chromosome GeneSequencer::ImportChromosome(const string &fileName = "")
{
	return myChromosome;
}

void GeneSequencer::ExportChromosome(Chromosome c, const string &fileName = "") {}

Chromosome GeneSequencer::DoMeiosis(Chromosome x, Chromosome y) {}

void GeneSequencer::SequenceChromosome(Chromosome c) {}

bool GeneSequencer::PowerOnSelfTest() {}
