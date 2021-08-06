#include "Sics.h"
#include <R.h>
#include <R_ext/Rdynload.h>
void Subgraph_isomorphism_interface(
    const double *pattern, //n_observations x n_features
    const double *match,   //n_observations
    const char *method,
    const char *exit_type,
    char **output
    ){
      int status = Subgraph_isomorphism(
        pattern, //Vzorec
        match,   //Ujemanje
        method,  //Metode
        exit_type, //Izhodni tip
        output        
                                        );
    
      if(status != 0){
        error("non-zero exit status from knn");  
      }

}

R_CMethodDef cMethods[] = {
      {"Subgraph_isomorphism_interface",(DL_FUNC) &Subgraph_isomorphism_interface,5},
      {NULL,NULL,0}
};

extern "C" {
      void R_init_Sics(DllInfo *info){
        R_registerRoutines(info,cMethods, NULL, NULL, NULL);
        R_useDynamicSymbols(info,FALSE);  
      }
}    





















































































































































































































