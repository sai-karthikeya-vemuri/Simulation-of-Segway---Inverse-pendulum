/* Introduction to Scientific Programming, Programming project, 2019/2020 */
/* (c) Matthias Braendel, 2019 */
/* func_rk4.h */

void f_rk4( std::vector< std::vector<double> >          &y,
            const std::vector<double>                   &tspan,
            const std::vector< std::vector<double> >    &A,
            const std::vector<double>                   &b1,
            std::vector<double>                         &F,
            const std::vector<double>                   &b2,
            const std::vector<double>                   &T,
            const std::vector<double>                   &C,
            const std::vector<double>                   &K);
