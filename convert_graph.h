#ifndef SICS_CONVERT_GRAPH_H_
#define SICS_CONVERT_GRAPH_H_

#include <cstdint>

#include <istream>

namespace sics {

template <typename G>
G convert_graph(double *matrix, int p_x,int p_y) {
  using detail::read_word;

  auto n = p_x;
  G g(n);
  int i = 0;
  int j = 0;
  for (i = 0; i < p_x; i++)
  {
        for (j = 0; j < p_x; j++)
        {
            if(i != j&&matrix[i * p_y + j ] > 0){
                g.add_edge(i, j);
            } 
        }   
  }

  return g;
}

}  // namespace sics

#endif  // SICS_CONVERT_GRAPH_H_