#include <stdio.h>
#include <iostream>

using namespace std;

void Matriz_2x2(){

    int M2[2][2];
    int i, j;

    // Preencher Matriz:
    
    cout << "Digite os valores:" << endl;
	
    for(i = 0; i < 2 ; i++){
        for(j = 0; j < 2; j++){
        	
        	cout << "digite o valor da posicao " << i + 1 << "'" << j + 1 << " : " ;
            cin >> M2[i][j];
        }
    }
	cout << "\n" << endl;
	
	// Imprimir Matriz: 
	
    cout << "Imprimindo Matriz: \n" << endl;
    
    for(i = 0; i < 2 ; i++){
        for(j = 0; j < 2; j++){
            
			if(j < 1){
				cout << "[" << M2[i][j] << "]";
			}else{
				cout << "[" << M2[i][j] << "]" << endl;
			}
        
        }
    }
    
    // Calculando o determinante de de M2:

    int Deter = (M2[0][0]*M2[1][1])-(M2[0][1]*M2[1][0]);

    cout << "\nO determinante da matriz eh: " << Deter << endl;

}

void Matriz_3x3(){
    
    int M3[3][3];
    int i, j;

    // Preencher Matriz:
    
	cout << "Digite os valores:" << endl;
	
    for(i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
        	
        	cout << "digite o valor da posicao " << i + 1 << "'" << j + 1 << " : " ;
            cin >> M3[i][j];
            
        }
    }
    
	// Imprimir Matriz: 
	
    cout << "\nImprimindo Matriz: \n" << endl;
    
    for(i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
            
			if(j < 2){
				cout << "[" << M3[i][j] << "]";
			}else{
				cout << "[" << M3[i][j] << "]" << endl;
			}
        
        }
    }

    // Calculando o determinante de de M3:

    int Deter = M3[0][0] * ((M3[1][1]*M3[2][2]) - (M3[2][1]*M3[1][2])) -M3[0][1] * (M3[1][0]
    * M3[2][2] - M3[2][0] * M3[1][2]) + M3[0][2] * (M3[1][0] * M3[2][1] - M3[2][0] * M3[1][1]);
    
    cout << "\nO determinante da matriz eh: " << Deter << endl;

}

/*void Matriz_NxN(){

    int t;
    cin >> t;
    int 
    int MN[i][j];

    for(i = 0; i < t ; i++){
        for(j = 0; j < 2; j++){
            cin >> M3[i][j];
        }
    }


}*/

int main(){

    int tamMatriz = 1;

    cout << "-------------------------------------" << endl;
    cout << "      IF Sudeste MG - Rio Pomba" << endl;
    cout << "       Joao Victor - Hernando" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Digite qual o tamanho da matriz:" << endl;

	while(tamMatriz == 1){
		
		cin >> tamMatriz;
		
		if(tamMatriz == 1){
			cout << "Erro, Matriz de tamanho 1! Escreva novamente o tamanho desejado. :D " << endl;
		}
	}
    

    if (tamMatriz == 2){
        Matriz_2x2();
    }else if(tamMatriz == 3){
        Matriz_3x3();
    }else{
    //    Matriz_NxN();
    }
    


    return 0;
}
