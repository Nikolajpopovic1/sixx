#' K nearest neighbours algorithm
#'
#' @param pattern.mat Graf v katerem iščemo vzorec
#' @param match.mat za ujemanje, vzorec 
#' @param method preiskovanja
#' @param exit_type Povemo kakšen tip izhoda smo si poželeli
#'
#' @return
#' @export
#'
#' @examples
Subgraph_isomorphism <- function(pattern.mat,match.mat,method,exit_type){
  result.list  <- .C("Subgraph_isomorphism_interface",
                     as.double(pattern.mat),
                     as.double(match.mat),
                     method,
                     exit_type,
                     output = "",
                     PACKAGE = "Sics")
  
  result.list$output
  #x.mat
}

























































































