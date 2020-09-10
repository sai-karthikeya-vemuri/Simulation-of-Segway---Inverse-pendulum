/* Introduction to Scientific Programming, Programming project, 2019/2020 */
/* (c) Matthias Braendel, 2019 */
/* func.h */

void f_introduction();
void f_vecinit(std::vector<double> &v);
void f_filltspan(std::vector<double> &v, double tsta, double tend, int framerate);
void f_printtimeoptions(const std::vector<double> &v, double tsta, double tend,int framerate);
void f_printmodelparameters(double g, double m1, double m2, double l);
void f_printcoefficients(const std::vector<double> &C);
void f_filldisturbance(std::vector<double> &T, double valT, std::vector<double> tdist, int framerate);
void f_printdisturbance(double valT, double tdiststa, double tdistend, int framerate);
void f_matinit(std::vector< std::vector<double> > &A);
void f_printlinearsystem(const std::vector< std::vector<double> > &A,const std::vector<double> &b1, const std::vector<double> &b2, const std::vector<double> &K);
void f_systemhasbeensetup();
unsigned int f_checksize(const unsigned int v, const unsigned int w);
void f_veccpy(std::vector<double> &v, const std::vector<double> &w);
double f_scalarp(const std::vector<double> &v, const std::vector<double> &w);
void f_matvecmult(std::vector<double> &w, const std::vector< std::vector<double> > &A, const std::vector<double> &v);
void f_vecupd(std::vector<double> &w, const double a, const std::vector<double> &v);
void f_succeed();
void f_fileoutput(const std::vector<double> &tspan, const std::vector< std::vector<double> > &y, const std::vector<double> &F, const std::vector<double> &T);
void f_vecshow(const std::vector<double> &v);
void f_matshow(const std::vector< std::vector<double> > &A);
