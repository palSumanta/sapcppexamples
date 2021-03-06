#include <stdio.h>
#include "CSVVector.h"
#include <vector>

int main(int argc, char** argv){

	if(argc <2) printf("Please give a file to read\n");

	std::vector<double> values = GetVectorDouble(argv[1]);

	double mean = 0.;
	for(int i=0; i<values.size(); ++i){
		mean+=values[i];
	}
	mean /= (double)values.size();
	
	printf("File %s was read, it contained %d values with a mean of %f.\n",argv[1],(int)values.size(),mean);

	return 0;
}
