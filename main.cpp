#include <iostream>

#include "mat2x2.h"
#include "mat3x3.h"

int main(int argc, char**argv){

int r,a,x;
do{
    
std :: cout << "  Bonjour et bienvenue, aujourd'hui nous allons executer des operations sur des matrices carrees!" << std::endl;
std :: cout << " Si vous souhaitez effectuer des calculs sur une matrice d'ordre 2, entrez 1; " << std::endl
            << " Si vous souhaitez plutot effectuer des calculs sur une matrice d'ordre 3 , entrer 2;" << std::endl;
std :: cin >> r;

if(r==1){
    std :: cout << "Veillez entrer les elements des matrices"<< std :: endl;

        float t1[2][2]={{},{}};
        float t2[2][2]={{},{}};

        std :: cout <<"Pour la matrice M1"<< std :: endl;
        init (t1);
        std :: cout <<"Pour la matrice M2"<< std :: endl;
        init (t2);
    
    std :: cout << "la somme des matrices M1 et M2 est :"<< std :: endl;
        Add ( t1 , t2 );
    std :: cout << "la difference entre les matrices M1 et M2 est :"<< std :: endl;
        minus ( t1 , t2 );
    std :: cout << "Maintenant si vous voulez calculer le produit de chacune des deux matrices par un nombre, entrer 1 "<< std :: endl      
                << " Pour plutot calculer le produit des deux matrices , entrer 2" << std ::endl ;
        std :: cin >> a;

            if ( a ==1 ){
                int k;
                std :: cout << "Entrez le nombre qui va multiplier les matrices"<< std :: endl;
                std :: cin >> k;
                std :: cout << k << "* M1 = "<< std :: endl;
                mult_rl ( k , t1);
                std :: cout << std :: endl;
                std :: cout << k << "* M2 = "<< std :: endl;
                mult_rl ( k , t2);
            }
            else if ( a==2 ){
                std :: cout << " Le produit de M1 par M2 est :"<< std :: endl;
                multiplication ( t1 , t2 );
            }
    std :: cout << "Les transposees respectives de M1 et M2 sont les suivantes :"<< std :: endl;
        transmat ( t1 );
        std :: cout << std :: endl;
        transmat ( t2 );
    std :: cout << " le determinant de M1 est:" << std :: endl;
        detmatr ( t1 );
    std :: cout << std :: endl << " Et son inverse est"<< std :: endl;
        inverse ( t1 );
    std :: cout << " la trace de M1 est :"<< std :: endl;
        tracemat ( t1 );

}else if (r==2){

std :: cout << "Veillez entrer les elements des matrices"<< std :: endl;

        float r1[3][3]={{},{}};
        float r2[3][3]={{},{}};

        std :: cout <<"Pour la matrice M1"<< std :: endl;
        initt (r1);
        std :: cout <<"Pour la matrice M2"<< std :: endl;
        initt (r2);
    
    std :: cout << "la somme des matrices M1 et M2 est :"<< std :: endl;
        Addt ( r1 , r2 );
    std :: cout << "la difference entre les matrices M1 et M2 est :"<< std :: endl;
        minust ( r1 , r2 );
    std :: cout << "Maintenant si vous voulez calculer le produit de chacune des deux matrices par un nombre, entrer 1 "<< std :: endl      
                << " Pour plutot calculer le produit des deux matrices , entrer 2" << std ::endl ;
        std :: cin >> a;

            if ( a ==1 ){
                int k;
                std :: cout << "Entrez le nombre qui va multiplier les matrices"<< std :: endl;
                std :: cin >> k;
                std :: cout << k << "* M1 = "<< std :: endl;
                mult_rlt ( k , r1);
                std :: cout << std :: endl;
                std :: cout << k << "* M2 = "<< std :: endl;
                mult_rlt ( k , r2);
            }
            else if ( a==2 ){
                std :: cout << " Le produit de M1 par M2 est :"<< std :: endl;
                multiplicationt ( r1 , r2 );
            }
    std :: cout << "Les transposees respectives de M1 et M2 sont les suivantes :"<< std :: endl;
        transmatt ( r1 );
        std :: cout << std :: endl;
        transmatt ( r2 );
    std :: cout << "La matrice adjugée de M1 est :"<< std :: endl;
        adjugee (r1);
    std :: cout << "L'inverse de M1 est :"<< std :: endl;
        inverser ( r1 );
    std :: cout << "La trace de la matrice M1 est :"<< std :: endl;
        tracematt ( r1 );
    
}
std :: cout << std :: endl << "Merci de nous avoir accompagner tout au long de cette execution !!!!"<< std :: endl;
    
}while ( x != 0);

return 0;
}
