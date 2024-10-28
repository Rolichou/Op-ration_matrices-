#ifndef __MAT2X2_H__
#define __MAT2X2_H__

 void init( float tab[2][2]);
 void Add ( float A[2][2], float B[2][2]);
 void minus ( float A[2][2], float B[2][2]);
 void mult_rl (float k, float tab[2][2]);
 float (*mult_r (float k, float tab[2][2])) [2];
 void multiplication ( float tab1[2][2], float tab2 [2][2]);
 void transmat ( float tab[2][2]);
 float detmat (float tab[2][2]);
 float detmatr (float tab[2][2]);
 void permut (float& a , float& b);
 void inverse (float tab[2][2]);
 float tracemat (float tab[2][2]);
 float (*mult_rt (float k, float tab[2][2])) [2];


#endif