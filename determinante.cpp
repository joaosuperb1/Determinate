#include <stdio.h>
#include <iostream>
using namespace std;

void Matriz_2x2(){

    int M2[2][2];
    int i, j;

    // Preencher Matriz:
    
    j = 0;

    for(i = 0; i < 2 ; i++){
        for(j = 0; j < 2; j++){
            cin >> M2[i][j]
        }
    }

    cout << "Imprimindo Matriz: " << endl;
    
    // Calculando o determinante de de M2:

    int Deter = (M2[0][0]*M2[1][1])-(M2[0][1]*M2[1][0]);

    cout << Deter << endl;

}

void Matriz_3x3(){
    
    int M3[3][3];
    int i, j;

    // Preencher Matriz:
    
    j = 0;

    for(i = 0; i < 3 ; i++){
        for(j = 0; j < 2; j++){
            cin >> M3[i][j]
        }
    }

    // Calculando o determinante de de M3:

    int Deter = M3[0][0] * ((M3[1][1]*M3[2][2]) - (M3[2][1]*M3[1][2])) -M3[0][1] * (M3[1][0]
    * M3[2][2] - M3[2][0] * M3[1][2]) + M3[0][2] * (M3[1][0] * M3[2][1] - M3[2][0] * M3[1][1]);
    cout << Deter << endl;

}

/*void Matriz_NxN(tamMatriz){

    int t = tamMatriz
    int MN[t][t];

    for(i = 0; i < t ; i++){
        for(j = 0; j < 2; j++){
            cin >> M3[i][j]
        }
    }

    


}*/

int main(){

    int tamMatriz;

    cout << "-------------------------------------" << endl;
    cout << "      IF Sudeste MG - Rio Pomba" << endl;
    cout << "       João Victor - Hernando" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Digite qual o tamanho da matriz:" << endl;

    cin >> tamMatriz;

    if (tamMatriz == 2){
        Matriz_2x2();
    }else if(tamMatriz == 3){
        Matriz_3x3();
    }else{
        //Matriz_NxN(tamMatriz);
    }
    


    return 0;
}

