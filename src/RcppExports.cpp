// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mult3sum
double mult3sum(NumericVector x, NumericVector y, NumericVector z);
RcppExport SEXP lifecontingencies_mult3sum(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    __result = Rcpp::wrap(mult3sum(x, y, z));
    return __result;
END_RCPP
}
// mult2sum
double mult2sum(NumericVector x, NumericVector y);
RcppExport SEXP lifecontingencies_mult2sum(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    __result = Rcpp::wrap(mult2sum(x, y));
    return __result;
END_RCPP
}
// fExnCpp
double fExnCpp(double T, double y, double n, double i);
RcppExport SEXP lifecontingencies_fExnCpp(SEXP TSEXP, SEXP ySEXP, SEXP nSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type T(TSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type i(iSEXP);
    __result = Rcpp::wrap(fExnCpp(T, y, n, i));
    return __result;
END_RCPP
}
// fAxnCpp
double fAxnCpp(double T, double y, double n, double i, double m, double k);
RcppExport SEXP lifecontingencies_fAxnCpp(SEXP TSEXP, SEXP ySEXP, SEXP nSEXP, SEXP iSEXP, SEXP mSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type T(TSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type i(iSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    __result = Rcpp::wrap(fAxnCpp(T, y, n, i, m, k));
    return __result;
END_RCPP
}