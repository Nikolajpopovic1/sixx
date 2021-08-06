#include <cstdint>
#include <fstream>
#include <iostream>
#include <string> 
#include <stdio.h>

#include <string.h>

using namespace std;

int Subgraph_isomorphism(
    const double *pattern, //n_observations x n_features
    const double *match,   //n_observations
    const char *method,
    const char *exit_type,
    char **output
  ){
  std::string pristevanka = "..";
  int i, j;
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      pristevanka = pristevanka + "dida";
    }
  }
  

  strcpy(*output, pristevanka.c_str());

    return 0;
  }
















