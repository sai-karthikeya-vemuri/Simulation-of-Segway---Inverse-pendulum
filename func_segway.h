/* Introduction to Scientific Programming, Programming project, 2019/2020 */
/* (c) Matthias Braendel, 2019 */
/* func_segway.h */

void f_segway(  unsigned int                                m,
                const std::vector<double>                   &yt,
                const std::vector< std::vector<double> >    &A,
                const std::vector<double>                   &b1,
                std::vector<double>                         &F,
                const std::vector<double>                   &b2,
                const std::vector<double>                   &T,
                const std::vector<double>                   &K,
                std::vector<double>                         &ki);
