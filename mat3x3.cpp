#include <iostream>
#include "mat3x3.h"

// prototype qui remplit la matrice selon les informations entrees
void initt ( float tab[3][3]){

    /* l'utlisateur entre le contenu de sa matrice */ 

    for (int i=0 ; i<3 ; i++){
            for (int j=0 ; j<3 ; j++){
                std :: cout << "Entrez l'element de la ligne "<< i+1 <<" et de la colonne " << j+1 << std ::endl;
                std :: cin >>  tab[i][j] ;
                
            } 
        }

         /* On affiche contenu sous forme de tableau 3x3*/

        for (int i=0 ; i<3 ; i++){
            for (int j=0 ; j<3 ; j++){
                std :: cout << tab[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
 
}

// prototype qui calcule la somme des matrices
void Addt ( float A[3][3], float B[3][3]){
    float C[3][3]={};

    /* addition des elements de meme indice */

    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            C[i][j] =  A[i][j] +  B[i][j];
        }
    }

    /* affichage sous forme de tableau */

    for (int i=0 ; i<3 ; i++){
            for (int j=0 ; j<3 ; j++){
                std :: cout << C[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
}

void minust ( float A[3][3], float B[3][3]){
    float C[3][3]={};
    
     /* addition des elements de meme indice */

    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            C[i][j] =  A[i][j] -  B[i][j];
        }
    }

      /* affichage sous forme de tableau */

    for (int i=0 ; i<3 ; i++){
            for (int j=0 ; j<3 ; j++){
                std :: cout << C[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
}

float  (*mult_rlt (float k, float tab[3][3])) [3]{
     static float C[3][3]={{},{}};
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            C[i][j] =  k * tab[i][j];
        }
    }
    for (int i=0 ; i<3 ; i++){
            for (int j=0 ; j<3 ; j++){
                std :: cout << C[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
        
        return C;

}

float  (*mult_rltt (float k, float tab[3][3])) [3]{
     static float C[3][3]={{},{}};
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            C[i][j] =  k * tab[i][j];
        }
    }
        return C;

}


void multiplicationt ( float tab1[3][3], float tab2 [3][3]){
    float tab[3][3]={{},{}};
    
     for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            tab[i][j]=0;
            for (int k=0; k<3; k++){
                //ici k est l'indice de sommation, alors que i et j sont les indices respectifs des lignes et des colonnes
                tab[i][j] = tab[i][j] + ( tab1[i][k] * tab2[k][j]);
            }
        }
    }
    for (int i=0 ; i<3 ; i++){
            for (int j=0 ; j<3 ; j++){
                std :: cout << tab[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
}

float (*transmattr (float tab[3][3])) [3]{
static float tb[3][3] = {{},{},{}};
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            tb[i][j] = tab[j][i];
        }
    }
    for (int i=0 ; i<3 ; i++){
            for (int j=0 ; j<3 ; j++){
                std :: cout << tb[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
         }
return tb;
}

void transmatt (float tab[3][3]){
    float tb[3][3] = {{},{},{}};
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            tb[i][j] = tab[j][i];
        }
    }
    for (int i=0 ; i<3 ; i++){
            for (int j=0 ; j<3 ; j++){
                std :: cout << tb[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
         }
}

float detmatt (float A[3][3]){
    float det = (A[0][0] * (A[1][1]*A[2][2] - A[1][2]*A[2][1])) - (A[0][1] * (A[1][0]*A[2][2] - A[1][2]*A[2][0])) + (A[0][2] * (A[1][0]*A[2][1] - A[1][1]*A[2][0]));
    return det;
}

float detmatrt (float A[3][3]){
    float det = (A[0][0] * (A[1][1]*A[2][2] - A[1][2]*A[2][1])) - (A[0][1] * (A[1][0]*A[2][2] - A[1][2]*A[2][0])) + (A[0][2] * (A[1][0]*A[2][1] - A[1][1]*A[2][0]));
    std :: cout << det;
    return det;
}


float (*adjugee(float h[3][3])) [3] {
    float C[3][3]={{},{},{}};
   
    C[0][0] = (h[1][1]*h[2][2]) - (h[2][1]*h[1][2]);
    C[0][1] = (h[1][2]*h[2][0]) - (h[1][0]*h[2][2]);
    C[0][2] = (h[1][0]*h[2][1]) - (h[2][0]*h[1][1]);
    C[1][0] = (h[0][2]*h[2][1]) - (h[0][1]*h[2][2]);
    C[1][1] = (h[0][0]*h[2][2]) - (h[0][2]*h[2][0]);
    C[1][2] = (h[0][1]*h[2][0]) - (h[0][0]*h[2][1]);
    C[2][0] = (h[0][1]*h[1][2]) - (h[0][2]*h[1][1]);
    C[2][1] = (h[0][2]*h[1][0]) - (h[0][0]*h[1][2]);
    C[2][2] = (h[0][0]*h[1][1]) - (h[0][1]*h[1][0]);

    float (*resultat)[3] = transmattr (C);
    return resultat;
   
}

void inverser (float tab[3][3]){
    float det = detmatt( tab );
    float inv[3][3] = {{},{},{}};
    if (det == 0 ){
        std :: cout << "L'inverse de cette matrice n'existe pas" << std :: endl;
    } else if ( det != 0 ){
        float t = 1 / det ;
        float (*resultat)[3] = mult_rltt ( t , adjugee( tab ));
        for (int i=0; i<2; i++){
            for (int j=0; j<2; j++){
                inv [i][j] = resultat [i][j];
            }
        }
    }
}

float tracematt (float tab[3][3]){
    float tr = 0;
    for (int i=0 ; i<3; i++){
            for (int j=0 ; j<3 ; j++){
                if (i == j){
                    tr = tr + tab[i][j];
                }
            }
        }
    std :: cout << tr;
    return tr;
}





