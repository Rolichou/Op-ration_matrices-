#ifndef __MAT3X3_H__
#define __MAT3X3_H__

 void initt ( float tab[3][3]);
 void Addt ( float A[3][3], float B[3][3]);
 void minust ( float A[3][3], float B[3][3]);
 float  (*mult_rlt (float k, float tab[3][3])) [3];
 void multiplicationt ( float tab1[3][3], float tab2 [3][3]);
 float  (*transmattr (float tab[3][3])) [3];
 float detmatt (float A[3][3]);
 float detmatrt (float A[3][3]);
 float (*adjugee(float h[3][3])) [3];
 void inverser (float tab[3][3]);
 void transmatt (float tab[3][3] );
 float tracematt (float tab[3][3]);
 float  (*mult_rltt (float k, float tab[3][3])) [3];


#endif