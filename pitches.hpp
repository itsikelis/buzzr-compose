#pragma once

#include <cmath>

namespace eutrp {

    static const float base = 440.; 

    static const float root = std::pow(2., 1./12.);

    static const float pause = 1;

    static const float a0 = base*(std::pow(root, -48));

    static const float a_sh0 = base*(std::pow(root, -47));
    static const float b_fl0 = a_sh0;

    static const float b0 = base*(std::pow(root, -46));
    static const float c_fl1 = b0;

    static const float c1 = base*(std::pow(root, -45));
    static const float b_sh0 = c1; 

    static const float c_sh1 = base*(std::pow(root, -44));
    static const float d_fl1 = c_sh1;

    static const float d1 = base*(std::pow(root, -43));

    static const float d_sh1 = base*(std::pow(root, -42));
    static const float e_fl1 = d_sh1;

    static const float e1 = base*(std::pow(root, -41));
    static const float f_fl1 = e1;

    static const float f1 = base*(std::pow(root, -40));
    static const float e_sh1 = f1;

    static const float f_sh1 = base*(std::pow(root, -39));
    static const float g_fl1 = f_sh1;

    static const float g1 = base*(std::pow(root, -38));

    static const float g_sh1 = base*(std::pow(root, -37));
    static const float a_fl1 = g_sh1;

    static const float a1 = base*(std::pow(root, -36));

    static const float a_sh1 = base*(std::pow(root, -35));
    static const float b_fl1 = a_sh1;

    static const float b1 = base*(std::pow(root, -34));
    static const float c_fl2 = b1;

    static const float c2 = base*(std::pow(root, -33));
    static const float b_sh1 = c2; 

    static const float c_sh2 = base*(std::pow(root, -32));
    static const float d_fl2 = c_sh2;

    static const float d2 = base*(std::pow(root, -31));

    static const float d_sh2 = base*(std::pow(root, -30));
    static const float e_fl2 = d_sh2;

    static const float e2 = base*(std::pow(root, -29));
    static const float f_fl2 = e2;

    static const float f2 = base*(std::pow(root, -28));
    static const float e_sh2 = f2;

    static const float f_sh2 = base*(std::pow(root, -27));
    static const float g_fl2 = f_sh2;

    static const float g2 = base*(std::pow(root, -26));

    static const float g_sh2 = base*(std::pow(root, -25));
    static const float a_fl2 = g_sh2;

    static const float a2 = base*(std::pow(root, -24));

    static const float a_sh2 = base*(std::pow(root, -23));
    static const float b_fl2 = a_sh2;

    static const float b2 = base*(std::pow(root, -22));
    static const float c_fl3 = b2;

    static const float c3 = base*(std::pow(root, -21));
    static const float b_sh2 = c3; 

    static const float c_sh3 = base*(std::pow(root, -20));
    static const float d_fl3 = c_sh3;

    static const float d3 = base*(std::pow(root, -19));

    static const float d_sh3 = base*(std::pow(root, -18));
    static const float e_fl3 = d_sh3;

    static const float e3 = base*(std::pow(root, -17));
    static const float f_fl3 = e3;

    static const float f3 = base*(std::pow(root, -16));
    static const float e_sh3 = f3;

    static const float f_sh3 = base*(std::pow(root, -15));
    static const float g_fl3 = f_sh3;

    static const float g3 = base*(std::pow(root, -14));

    static const float g_sh3 = base*(std::pow(root, -13));
    static const float a_fl3 = g_sh3;

    static const float a3 = base*(std::pow(root, -12));

    static const float a_sh3 = base*(std::pow(root, -11));
    static const float b_fl3 = a_sh3;

    static const float b3 = base*(std::pow(root, -10));
    static const float c_fl4 = b3;

    static const float c4 = base*(std::pow(root, -9));
    static const float b_sh3 = c4; 

    static const float c_sh4 = base*(std::pow(root, -8));
    static const float d_fl4 = c_sh4;

    static const float d4 = base*(std::pow(root, -7));

    static const float d_sh4 = base*(std::pow(root, -6));
    static const float e_fl4 = d_sh4;

    static const float e4 = base*(std::pow(root, -5));
    static const float f_fl4 = e4;

    static const float f4 = base*(std::pow(root, -4));
    static const float e_sh4 = f4;

    static const float f_sh4 = base*(std::pow(root, -3));
    static const float g_fl4 = f_sh4;

    static const float g4 = base*(std::pow(root, -2));

    static const float g_sh4 = base*(std::pow(root, -1));
    static const float a_fl4 = g_sh4;

    static const float a4 = base*(std::pow(root, 0));

    static const float a_sh4 = base*(std::pow(root, 1));
    static const float b_fl4 = a_sh4;

    static const float b4 = base*(std::pow(root, 2));
    static const float c_fl5 = b4;

    static const float c5 = base*(std::pow(root, 3));
    static const float b_sh4 = c5; 

    static const float c_sh5 = base*(std::pow(root, 4));
    static const float d_fl5 = c_sh5;

    static const float d5 = base*(std::pow(root, 5));

    static const float d_sh5 = base*(std::pow(root, 6));
    static const float e_fl5 = d_sh5;

    static const float e5 = base*(std::pow(root, 7));
    static const float f_fl5 = e5;

    static const float f5 = base*(std::pow(root, 8));
    static const float e_sh5 = f5;

    static const float f_sh5 = base*(std::pow(root, 9));
    static const float g_fl5 = f_sh5;

    static const float g5 = base*(std::pow(root, 10));

    static const float g_sh5 = base*(std::pow(root, 11));
    static const float a_fl5 = g_sh5;

    static const float a5 = base*(std::pow(root, 12));

    static const float a_sh5 = base*(std::pow(root, 13));
    static const float b_fl5 = a_sh5;

    static const float b5 = base*(std::pow(root, 14));
    static const float c_fl6 = b5;

    static const float c6 = base*(std::pow(root, 15));
    static const float b_sh5 = c6; 

    static const float c_sh6 = base*(std::pow(root, 16));
    static const float d_fl6 = c_sh6;

    static const float d6 = base*(std::pow(root, 17));

    static const float d_sh6 = base*(std::pow(root, 18));
    static const float e_fl6 = d_sh6;

    static const float e6 = base*(std::pow(root, 19));
    static const float f_fl6 = e6;

    static const float f6 = base*(std::pow(root, 20));
    static const float e_sh6 = f6;

    static const float f_sh6 = base*(std::pow(root, 21));
    static const float g_fl6 = f_sh6;

    static const float g6 = base*(std::pow(root, 22));

    static const float g_sh6 = base*(std::pow(root, 23));
    static const float a_fl6 = g_sh6;

    static const float a6 = base*(std::pow(root, 24));

    static const float a_sh6 = base*(std::pow(root, 25));
    static const float b_fl6 = a_sh6;

    static const float b6 = base*(std::pow(root, 26));
    static const float c_fl7 = b6;

    static const float c7 = base*(std::pow(root, 27));
    static const float b_sh6 = c7; 

    static const float c_sh7 = base*(std::pow(root, 28));
    static const float d_fl7 = c_sh7;

    static const float d7 = base*(std::pow(root, 29));

    static const float d_sh7 = base*(std::pow(root, 30));
    static const float e_fl7 = d_sh7;

    static const float e7 = base*(std::pow(root, 31));
    static const float f_fl7 = e7;

    static const float f7 = base*(std::pow(root, 32));
    static const float e_sh7 = f7;

    static const float f_sh7 = base*(std::pow(root, 33));
    static const float g_fl7 = f_sh7;

    static const float g7 = base*(std::pow(root, 34));

    static const float g_sh7 = base*(std::pow(root, 35));
    static const float a_fl7 = g_sh7;

    static const float a7 = base*(std::pow(root, 36));

    static const float a_sh7 = base*(std::pow(root, 37));
    static const float b_fl7 = a_sh7;

    static const float b7 = base*(std::pow(root, 38));
    static const float c_fl8 = b7;

    static const float c8 = base*(std::pow(root, 39));
    static const float b_sh7 = c8;

} // eutrp

