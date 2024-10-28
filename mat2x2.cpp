#include <iostream>
#include  "mat2x2.h"

// prototype qui remplit la matrice selon les informations entrées
void init ( float tab[2][2]){

    /* l'utlisateur entre le contenu de sa matrice */ 

    for (int i=0 ; i<2 ; i++){
            for (int j=0 ; j<2 ; j++){
                std :: cout << "Entrez l'element de la ligne "<< i+1 <<" et de la colonne " << j+1 << std ::endl;
                std :: cin >>  tab[i][j] ;
                
            } 
        }

         /* On affiche contenu sous forme de tableau 2x2*/

        for (int i=0 ; i<2 ; i++){
            for (int j=0 ; j<2 ; j++){
                std :: cout << tab[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
 
}

// prototype qui calcule la somme des matrices
void Add ( float A[2][2], float B[2][2]){
    float C[2][2]={};

    /* addition des elements de même indice */

    for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<2 ; j++){
            C[i][j] =  A[i][j] +  B[i][j];
        }
    }

    /* affichage sous forme de tableau */

    for (int i=0 ; i<2 ; i++){
            for (int j=0 ; j<2 ; j++){
                std :: cout << C[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
}

void minus ( float A[2][2], float B[2][2]){
    float C[2][2]={};
    
     /* addition des elements de même indice */

    for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<2 ; j++){
            C[i][j] =  A[i][j] -  B[i][j];
        }
    }

      /* affichage sous forme de tableau */

    for (int i=0 ; i<2 ; i++){
            for (int j=0 ; j<2 ; j++){
                std :: cout << C[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
}

//fonction qui calcule le produit d'une matrice par un réel k

void mult_rl (float k, float tab[2][2]){
    float C[2][2]={{},{}};
    for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<2 ; j++){
            C[i][j] =  k * tab[i][j];
        }
    }
    for (int i=0 ; i<2 ; i++){
            for (int j=0 ; j<2 ; j++){
                std :: cout << C[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
}

float (*mult_r (float k, float tab[2][2])) [2] {
    static float C[2][2]={{},{}};
    for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<2 ; j++){
            C[i][j] =  k * tab[i][j];
        }
    }
    for (int i=0 ; i<2 ; i++){
            for (int j=0 ; j<2 ; j++){
                std :: cout << C[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
    return C;
}
 
 float (*mult_rt (float k, float tab[2][2])) [2] {
    static float C[2][2]={{},{}};
    for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<2 ; j++){
            C[i][j] =  k * tab[i][j];
        }
    }
    return C;
}

 //fonction qui calcule le produit de deux matrices d'ordre 2

void multiplication ( float tab1[2][2], float tab2 [2][2]){
    float tab[2][2]={{},{}};
    
     for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<2 ; j++){
            tab[i][j]=0;
            for (int k=0; k<2; k++){
                //ici k est l'indice de sommation, alors que i et j sont les indices respectifs des lignes et des colonnes
                tab[i][j] = tab[i][j] + ( tab1[i][k] * tab2[k][j]);
            }
        }
    }
    for (int i=0 ; i<2 ; i++){
            for (int j=0 ; j<2 ; j++){
                std :: cout << tab[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
        }
}

void  transmat ( float tab[2][2]){
    float tb[2][2] = {{},{}};

    for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<2 ; j++){
            tb[i][j] = tab[j][i];
        }
    }
    for (int i=0 ; i<2 ; i++){
            for (int j=0 ; j<2 ; j++){
                std :: cout << tb[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
    }
}
float detmat (float tab[2][2]){
    float det = (tab[0][0] *  tab[1][1] )-  (tab[0][1] *  tab[1][0]);
    return det;
}

float detmatr (float tab[2][2]){
    float det = (tab[0][0] *  tab[1][1] )-  (tab[0][1] *  tab[1][0]);
    std :: cout << det;
    return det;
}

void permut( float& a , float& b){
    float temp = a;
    a = b;
    b = temp ;
}

void inverse (float tab[2][2]){
    float det = detmat( tab );
    float inv[2][2] = {{},{}};
    if (det == 0 ){
        std :: cout << "L'inverse de cette matrice n'existe pas" << std :: endl;
    } else if ( det != 0 ){
        float t = 1 / det ;
        float (*resultat)[2] = mult_rt ( t , tab);
        for (int i=0; i<2; i++){
            for (int j=0; j<2; j++){
                inv [i][j] = resultat [i][j];
            }
        }
    }
    permut (inv[0][0] , inv[1][1]);       
    inv[0][1] =  inv[0][1] * -1;
    inv[1][0] =  inv[1][0] * -1; 

     for (int i=0 ; i<2 ; i++){
            for (int j=0 ; j<2 ; j++){
                std :: cout << inv[i][j] << " " ;
                      
            } 
            std :: cout << std::endl;
    }

}
 
float tracemat (float tab[2][2]){
    float tr = 0;
    for (int i=0 ; i<2 ; i++){
            for (int j=0 ; j<2 ; j++){
                if (i == j){
                    tr = tr + tab[i][j];
                }
            }
        }
    std :: cout << tr;
    return tr;
}



