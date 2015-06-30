// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// interp2lin
Eigen::VectorXd interp2lin(const Eigen::Map<Eigen::VectorXd>& xin, const Eigen::Map<Eigen::VectorXd>& yin, const Eigen::Map<Eigen::VectorXd>& zin, const Eigen::Map<Eigen::VectorXd>& xou, const Eigen::Map<Eigen::VectorXd>& you);
RcppExport SEXP tPACE_interp2lin(SEXP xinSEXP, SEXP yinSEXP, SEXP zinSEXP, SEXP xouSEXP, SEXP youSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xin(xinSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type yin(yinSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type zin(zinSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xou(xouSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type you(youSEXP);
    __result = Rcpp::wrap(interp2lin(xin, yin, zin, xou, you));
    return __result;
END_RCPP
}
// Rmullwlsk
Eigen::MatrixXd Rmullwlsk(const Eigen::Map<Eigen::VectorXd>& bw, const std::string kernel_type, const Eigen::Map<Eigen::MatrixXd>& tPairs, const Eigen::Map<Eigen::MatrixXd>& cxxn, const Eigen::Map<Eigen::VectorXd>& win, const Eigen::Map<Eigen::VectorXd>& xgrid, const Eigen::Map<Eigen::VectorXd>& ygrid, const bool& bwCheck);
RcppExport SEXP tPACE_Rmullwlsk(SEXP bwSEXP, SEXP kernel_typeSEXP, SEXP tPairsSEXP, SEXP cxxnSEXP, SEXP winSEXP, SEXP xgridSEXP, SEXP ygridSEXP, SEXP bwCheckSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< const std::string >::type kernel_type(kernel_typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type tPairs(tPairsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type cxxn(cxxnSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type win(winSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xgrid(xgridSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type ygrid(ygridSEXP);
    Rcpp::traits::input_parameter< const bool& >::type bwCheck(bwCheckSEXP);
    __result = Rcpp::wrap(Rmullwlsk(bw, kernel_type, tPairs, cxxn, win, xgrid, ygrid, bwCheck));
    return __result;
END_RCPP
}
// Rrotatedmullwlsk
Eigen::MatrixXd Rrotatedmullwlsk(const Eigen::Map<Eigen::VectorXd>& bw, const std::string kernel_type, const Eigen::Map<Eigen::MatrixXd>& tPairs, const Eigen::Map<Eigen::MatrixXd>& cxxn, const Eigen::Map<Eigen::VectorXd>& win, const Eigen::Map<Eigen::MatrixXd>& xygrid, const unsigned int npoly, const bool& bwCheck);
RcppExport SEXP tPACE_Rrotatedmullwlsk(SEXP bwSEXP, SEXP kernel_typeSEXP, SEXP tPairsSEXP, SEXP cxxnSEXP, SEXP winSEXP, SEXP xygridSEXP, SEXP npolySEXP, SEXP bwCheckSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< const std::string >::type kernel_type(kernel_typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type tPairs(tPairsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type cxxn(cxxnSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type win(winSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type xygrid(xygridSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type npoly(npolySEXP);
    Rcpp::traits::input_parameter< const bool& >::type bwCheck(bwCheckSEXP);
    __result = Rcpp::wrap(Rrotatedmullwlsk(bw, kernel_type, tPairs, cxxn, win, xygrid, npoly, bwCheck));
    return __result;
END_RCPP
}
