/* Introduction to Scientific Programming, Programming project, 2019/2020 */
/* (c) Matthias Braendel, 2019 */
/* func_rk4.cpp */

#include <vector>
#include "func.h"
#include "func_segway.h"


void f_rk4( std::vector< std::vector<double> >          &y,
            const std::vector<double>                   &tspan,
            const std::vector< std::vector<double> >    &A,
            const std::vector<double>                   &b1,
            std::vector<double>                         &F,
            const std::vector<double>                   &b2,
            const std::vector<double>                   &T,
            const std::vector<double>                   &C,
            const std::vector<double>                   &K){
    /* initialization of temporary vectors */
    // #################
    // Your code here...
    // TASK 3.1: declare and initialize the temporary vectors k1,k2,k3,k4,yn,yt
    // #################
    // #################
    std::vector<double> k1(4), k2(4), k3(4), k4(4), yn(4), yt(4);
    f_vecinit(k1); f_vecinit(k2); f_vecinit(k3); f_vecinit(k4); f_vecinit(yn); f_vecinit(yt);
    // Your code here...
    // TASK 3.2: compute the time step size h
    double tsta = 0.0; // time start
    double tend = 10.0; // time end
    int framerate = 100;
    double n = 0, h = 0;
    n = framerate * (tend - tsta) + 1;
    h = 1.0 / framerate;
    // #################
    /* classical Runge-Kutta method */
    for(unsigned int m = 0; m < tspan.size(); m++){
        // #################
        // Your code here...
        // TASK 3.3+4: implement the following pseudo code:
        // (1) yn = y[:][m]; // m-th colum for the m-th time step of y
        // (2) yt = yn;
        // (3) f_segway(yt,...,k1); // new k1
        // (4) yt = yn+0.5*h*k1;
        // (5) f_segway(yt,...,k2); // new k2
        // (6) yt = yn+0.5*h*k2;
        // (7) f_segway(yt,...,k3); // new k3
        // (8) yt = yn+h*k3;
        // (9) f_segway(yt,...,k4); // new k4
        // #################
        // compute new k1
        for (int i = 0; i < 4; i++)
        {
            yn[i] = y[i][m];
        }
        f_veccpy(yt,yn); // func.h
        f_segway(m,yt,A,b1,F,b2,T,K,k1); // func_segway.h
        // compute new k2
        for (int i = 0; i < yt.size(); i++)
        {
            yt[i]=yn[i] + (0.5 * h * k1[i]);
        }
        f_segway(m, yt, A, b1, F, b2, T, K, k2); // func_segway.h
        // compute new k3
        for (int i = 0; i < yt.size(); i++)
        {
            yt[i]=yn[i] + (0.5 * h * k2[i]);
        }
        //f_veccpy(yt, yn); // func.h
        f_segway(m, yt, A, b1, F, b2, T, K, k3); // func_segway.h
        // compute new k4
        for (int i = 0; i < yt.size(); i++)
        {
            yt[i]=yn[i] + (h * k3[i]);
        }
        //f_veccpy(yt, yn); // func.h
        f_segway(m, yt, A, b1, F, b2, T, K, k4); // func_segway.h
        /* update y */
        // #################
        // Your code here...
        // TASK 3.4: update new column of y with the old column and the k's
        // y[:][m+1] = y[:][m]+h/6*(k1+2*k2+2*k3+k4);
        // #################
        for (unsigned int i = 0; i < 4; i++)
        {
            y[i][m+1] = y[i][m] + (h / 6 * (k1[i] + 2 * k2[i] + 2 * k3[i] + k4[i]));
        }

    }
}
