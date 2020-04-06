// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// asymmetric_mobility_cpp
DataFrame asymmetric_mobility_cpp(DataFrame seiiar_pop, List mobility_matrix, NumericMatrix seed_matrix, NumericVector betas, float a, float gamma, float asymptomaticProb, float asymptomaticRelativeInfectiousness, int N, int M);
RcppExport SEXP _spread_asymmetric_mobility_cpp(SEXP seiiar_popSEXP, SEXP mobility_matrixSEXP, SEXP seed_matrixSEXP, SEXP betasSEXP, SEXP aSEXP, SEXP gammaSEXP, SEXP asymptomaticProbSEXP, SEXP asymptomaticRelativeInfectiousnessSEXP, SEXP NSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type seiiar_pop(seiiar_popSEXP);
    Rcpp::traits::input_parameter< List >::type mobility_matrix(mobility_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type seed_matrix(seed_matrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type betas(betasSEXP);
    Rcpp::traits::input_parameter< float >::type a(aSEXP);
    Rcpp::traits::input_parameter< float >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< float >::type asymptomaticProb(asymptomaticProbSEXP);
    Rcpp::traits::input_parameter< float >::type asymptomaticRelativeInfectiousness(asymptomaticRelativeInfectiousnessSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(asymmetric_mobility_cpp(seiiar_pop, mobility_matrix, seed_matrix, betas, a, gamma, asymptomaticProb, asymptomaticRelativeInfectiousness, N, M));
    return rcpp_result_gen;
END_RCPP
}
// asymmetric_mobility_se1e2iiar_cpp
DataFrame asymmetric_mobility_se1e2iiar_cpp(DataFrame se1e2iiar_pop, List mobility_matrix, NumericMatrix seed_matrix, NumericMatrix betas, float a1, float a2, float gamma, float presymptomaticRelativeInfectiousness, float asymptomaticProb, float asymptomaticRelativeInfectiousness, int N, int M);
RcppExport SEXP _spread_asymmetric_mobility_se1e2iiar_cpp(SEXP se1e2iiar_popSEXP, SEXP mobility_matrixSEXP, SEXP seed_matrixSEXP, SEXP betasSEXP, SEXP a1SEXP, SEXP a2SEXP, SEXP gammaSEXP, SEXP presymptomaticRelativeInfectiousnessSEXP, SEXP asymptomaticProbSEXP, SEXP asymptomaticRelativeInfectiousnessSEXP, SEXP NSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type se1e2iiar_pop(se1e2iiar_popSEXP);
    Rcpp::traits::input_parameter< List >::type mobility_matrix(mobility_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type seed_matrix(seed_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type betas(betasSEXP);
    Rcpp::traits::input_parameter< float >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< float >::type a2(a2SEXP);
    Rcpp::traits::input_parameter< float >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< float >::type presymptomaticRelativeInfectiousness(presymptomaticRelativeInfectiousnessSEXP);
    Rcpp::traits::input_parameter< float >::type asymptomaticProb(asymptomaticProbSEXP);
    Rcpp::traits::input_parameter< float >::type asymptomaticRelativeInfectiousness(asymptomaticRelativeInfectiousnessSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(asymmetric_mobility_se1e2iiar_cpp(se1e2iiar_pop, mobility_matrix, seed_matrix, betas, a1, a2, gamma, presymptomaticRelativeInfectiousness, asymptomaticProb, asymptomaticRelativeInfectiousness, N, M));
    return rcpp_result_gen;
END_RCPP
}
// commuter_cpp
DataFrame commuter_cpp(DataFrame seiiar_home, DataFrame seiiar_commuters, float beta, float a, float gamma, float asymptomaticProb, float asymptomaticRelativeInfectiousness, int N, int M, bool verbose);
RcppExport SEXP _spread_commuter_cpp(SEXP seiiar_homeSEXP, SEXP seiiar_commutersSEXP, SEXP betaSEXP, SEXP aSEXP, SEXP gammaSEXP, SEXP asymptomaticProbSEXP, SEXP asymptomaticRelativeInfectiousnessSEXP, SEXP NSEXP, SEXP MSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type seiiar_home(seiiar_homeSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type seiiar_commuters(seiiar_commutersSEXP);
    Rcpp::traits::input_parameter< float >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< float >::type a(aSEXP);
    Rcpp::traits::input_parameter< float >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< float >::type asymptomaticProb(asymptomaticProbSEXP);
    Rcpp::traits::input_parameter< float >::type asymptomaticRelativeInfectiousness(asymptomaticRelativeInfectiousnessSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(commuter_cpp(seiiar_home, seiiar_commuters, beta, a, gamma, asymptomaticProb, asymptomaticRelativeInfectiousness, N, M, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spread_asymmetric_mobility_cpp", (DL_FUNC) &_spread_asymmetric_mobility_cpp, 10},
    {"_spread_asymmetric_mobility_se1e2iiar_cpp", (DL_FUNC) &_spread_asymmetric_mobility_se1e2iiar_cpp, 12},
    {"_spread_commuter_cpp", (DL_FUNC) &_spread_commuter_cpp, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_spread(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
