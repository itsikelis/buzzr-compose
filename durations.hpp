#pragma once

namespace eutrp{

    static const float GRAVE = 30;
    static const float LENTO = 30;
    static const float LARGO = 45;
    static const float ADAGIO = 60;
    static const float ANDANTE = 75;
    static const float MODERATO = 75;
    static const float ALLEGRO = 120;
    static const float VIVACE = 135;
    static const float PRESTO = 170;
    
    float tempo = 60;

    float period ;

    float t1;
    float t1_dot; 
    float t2;
    float t2_dot; 
    float t4;
    float t4_dot;
    float t8;
    float t8_dot; 
    float t16;
    float t16_dot;
    float t32;
    float t32_dot;
    float t64;
    float t64_dot;

} // namespace eutrp