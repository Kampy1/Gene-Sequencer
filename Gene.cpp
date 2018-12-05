#include <iostream>
#include <cstring>
#include <string>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include "Sequencer.h"

Gene::Gene() {}

Gene::Gene(Allele a, Allele b) {}

void Gene::WriteToFile(ofstream &) {}

Allele Gene::GetExpressedTrait() {}

bool Gene::RunUnitTests() {}