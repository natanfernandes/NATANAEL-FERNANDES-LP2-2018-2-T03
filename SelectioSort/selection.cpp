#include <iostream>
//Compilação
//g++ -o selection -Wall -ansi -pedantic -O0 -g selection.cpp
void selectionSort(int vetor[], int tam){
   for (int i = 0; i < tam; ++i) {
        int temp = i;
        for (int j = i+1; j < tam; ++j) {
            if (vetor[j] < vetor[temp]) {
                temp = j;
            }
        }
        //trocando os valores
        int aux = vetor[i];
        vetor[i] = vetor[temp];
        vetor[temp] = aux;
    }
}


int main(){
    int array[7] = {6,5,13,11,15,1,50};
    //array original
    for(int i =0;i<7;i++){
         std::cout<< array[i] <<std::endl;
    }
    selectionSort(array,7);
    //array ordenado
    for(int i =0;i<7;i++){
        std::cout<< array[i] <<std::endl;
    } 
    return 0;
}