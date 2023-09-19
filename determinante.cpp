#include <stdio.h>
#include <iostream>

using namespace std;
//    int const TAM = 4;
// https://github.com/tqdm/tqdm.cpp

int preencherMatrizNxN(int tamMatriz, int M[4][4]){
    for(int i = 0; i < tamMatriz ; i++){
        for(int j = 0; j < tamMatriz; j++){
            M[i][j] = j+1;
            cout << "Posicao 1 preencida com o valor: " << j + 1 << endl ;
        }
    }
    return M[4][4];
}
int CalcMatriz3x3(int M3[3][3]){
    return M3[0][0] * ((M3[1][1]*M3[2][2]) - (M3[2][1]*M3[1][2])) -M3[0][1] * (M3[1][0]
    * M3[2][2] - M3[2][0] * M3[1][2]) + M3[0][2] * (M3[1][0] * M3[2][1] - M3[2][0] * M3[1][1]);
}

void Matriz_1x1(){

    int M1[1][1];
    int i, j;
    i = 0;
    j = 0;

    // Preencher Matriz:
    
	
    cout << "digite o valor da posicao " << i + 1 << "'" << j + 1 << " : " ;
            cin >> M1[i][j];

	cout << "\n" << endl;
	
	// Imprimir Matriz: 
	
    cout << "Imprimindo Matriz: \n" << endl;
    
	cout << "[" << M1[i][j] << "]" << endl;

    int Deter = M1[i][j];

    cout << "\nO determinante da matriz eh: " << Deter << "\n" <<endl;

}

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

void Matriz_4x4(){

    int tamMatriz = 4;
    int Deter1;
    int M4[4][4] = {0};

    int M3Apoio[3][3] = {0};
    int M3Apoio2[3][3] = {0};
    int M3Apoio3[3][3] = {0};
    int M3Apoio4[3][3] = {0};
    int i, j;

    // Preencher Matriz:

    int digi = 0;
    cout << "Deseja preencher matriz com 123...n...? Digite 1 par sim e qualquer outro numero para não." << endl;
    cin >> digi;

    if(digi == 1){
        /*for(i = 0; i < 4 ; i++){
            for(j = 0; j < 4; j++){
                M4[i][j] = j+1;
        	    cout << "Posicao 1 preencida com o valor: " << j + 1 << endl ;
            }
        }*/
        M4 = preencherMatrizNxN(tamMatriz, M4);
    }else{
        cout << "Digite os valores:" << endl;
        for(i = 0; i < 4 ; i++){
            for(j = 0; j < 4; j++){
        	    cout << "digite o valor da posicao " << i + 1 << "'" << j + 1 << " : " ;
                cin >> M4[i][j]; 
            }
        }
    }
    
	// Imprimir Matriz4x4: 

    cout << "\nImprimindo Matriz4x4:" << endl; 
    for(i = 0; i < 4 ; i++){
        for(j = 0; j < 4; j++){
            
			if(j < 3){
				cout << "[" << M4[i][j] << "]";
			}else{
				cout << "[" << M4[i][j] << "]" << endl;
			}
        
        }
    }

    cout << "\nImprimindo Matriz de apoio zerada:" << endl;
    for(i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
			if(j < 2){
				cout << "[" << M3Apoio[i][j] << "]";
			}else{
				cout << "[" << M3Apoio[i][j] << "]" << endl;
			}
        }
    }

    // Fazendo a Matriz de apoio1 e Imprimindo
    //            1
    cout << "\nfazendo matriz de apoio1..."<< endl;
    for(i = 0; i < 4; i++){ 
        for(j = 0; j < 4; j++){
            if(i == 0 || j == 0){

                
            }else{
                //cout << i << j << endl;
                //cout << "matrixOriginalValor: " << M4[i][j];
                //cout << "matrixApoio: " << M3Apoio[i][j];
                M3Apoio[i-1][j-1] = M4[i][j];
                //cout << "imprimindo m3apoio " <<  M3Apoio[i-1][j-1] << endl;
                
            }
            
        }
    }

    cout << "Imprimindo Matriz de apoio1:" << endl;
    for(i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
            
			if(j < 2){
                //int t;
				cout << "[" << M3Apoio[i][j] << "]";
                //cin >> t;
			}else{
                //int t;
				cout << "[" << M3Apoio[i][j] << "]" << endl;
                //cin >> t;
			}
        
        }
    }

    Deter1 = CalcMatriz3x3(M3Apoio);
    cout << "Determinante da matriz M3Apoio eh: " << Deter1 << endl;


    // Fazendo a Matriz de apoio2 e Imprimindo
    //            2

    cout << "\nfazendo matriz de apoio2..."<< endl;
    for(i = 0; i < 4; i++){ 
        for(j = 0; j < 4; j++){
            if(i == 0 || j == 0){

                
            }else{
                //cout << i << j << endl;
                //cout << "matrixOriginalValor: " << M4[i][j];
                //cout << "matrixApoio: " << M3Apoio[i][j];
                M3Apoio2[i-1][j-1] = M4[i][j];
                //cout << "imprimindo m3apoio " <<  M3Apoio[i-1][j-1] << endl;
                
            }
            
        }
    } 
	
    cout << "Imprimindo Matriz de apoio2:" << endl;
    for(i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
            
			if(j < 2){
                //int t;
				cout << "[" << M3Apoio2[i][j] << "]";
                //cin >> t;
			}else{
                //int t;
				cout << "[" << M3Apoio2[i][j] << "]" << endl;
                //cin >> t;
			}
        
        }
    }

    // Fazendo a Matriz de apoio3 e Imprimindo
    //            3

    cout << "\nfazendo matriz de apoio3..."<< endl;
    for(i = 0; i < 4; i++){ 
        for(j = 0; j < 4; j++){
            if(i == 0 || j == 0){

                
            }else{
                //cout << i << j << endl;
                //cout << "matrixOriginalValor: " << M4[i][j];
                //cout << "matrixApoio: " << M3Apoio[i][j];
                M3Apoio3[i-1][j-1] = M4[i][j];
                //cout << "imprimindo m3apoio " <<  M3Apoio[i-1][j-1] << endl;
                
            }
            
        }
    }

    cout << "Imprimindo Matriz de apoio3:" << endl;
    for(i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
            
			if(j < 2){
                //int t;
				cout << "[" << M3Apoio3[i][j] << "]";
                //cin >> t;
			}else{
                //int t;
				cout << "[" << M3Apoio3[i][j] << "]" << endl;
                //cin >> t;
			}
        
        }
    }

    // Fazendo a Matriz de apoio4 e Imprimindo
    //            4
    cout << "\nfazendo matriz de apoio4..."<< endl;

    for(i = 0; i < 4; i++){ 
        for(j = 0; j < 4; j++){
            if(i == 0 || j == 0){

                
            }else{
                //cout << i << j << endl;
                //cout << "matrixOriginalValor: " << M4[i][j];
                //cout << "matrixApoio: " << M3Apoio[i][j];
                M3Apoio4[i-1][j-1] = M4[i][j];
                //cout << "imprimindo m3apoio " <<  M3Apoio[i-1][j-1] << endl;
                
            }
            
        }
    }

    cout << "Imprimindo Matriz de apoio4: \n" << endl;
    for(i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
            
			if(j < 2){
                //int t;
				cout << "[" << M3Apoio4[i][j] << "]";
                //cin >> t;
			}else{
                //int t;
				cout << "[" << M3Apoio4[i][j] << "]" << endl;
                //cin >> t;
			}
        
        }
    }



    // Calculando o determinante de de M3:
    //cout << "\nO determinante da matriz eh: " << Deter << endl;

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

    int tamMatriz = 0;

    cout << "-------------------------------------" << endl;
    cout << "      IF Sudeste MG - Rio Pomba" << endl;
    cout << "       Joao Victor - Hernando" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Digite qual o tamanho da matriz:" << endl;

	while(tamMatriz == 0){
		
		cin >> tamMatriz;
		
		if(tamMatriz == 0){
			cout << "Erro, Matriz de tamanho 0! Escreva novamente o tamanho desejado. :D " << endl;
		}
	}
    

    if (tamMatriz == 1){
        Matriz_1x1();
    }else if(tamMatriz == 2){
        Matriz_2x2();
    }else if(tamMatriz == 3){
        Matriz_3x3();
    }else if(tamMatriz == 4){
        Matriz_4x4();
    }else{
    //    Matriz_NxN();
    }
    


    return 0;
}
