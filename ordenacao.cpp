#include <iostream>
#include <algorithm>
using namespace std;

void ordenar(int vet1[], int vet2[], int tam);

int main() {
  int tam;
  int elem;
  int result;

  cout << "Digite o tamanho dos vetores \n";
  cin >> tam;
  int vetor1[tam];
  int vetor2[tam];

  cout << "Tudo bem, agora digite os valores do vetor 1.\n";

  for(int x = 0; x < tam; x++){
    cout << "Digite o valor:" << x+1 << endl;
    cin >> vetor1[x];
  }


  cout << "Agora digite os valores do vetor 2.\n";

  for(int x = 0; x < tam; x++){
    cout << "Digite o valor:" << x+1 << endl;
    cin >> vetor2[x];
  }

  ordenar(vetor1, vetor2, tam);



}

void ordenar(int vet1[], int vet2[], int tam){
int swap;
      for (int i = 0; i < tam; ++i){
        for (int j = i + 1; j < tam; ++j){
          if (vet1[i] > vet1[j]){
              swap =  vet1[i];

              vet1[i] = vet1[j];

              vet1[j] = swap;
          }
        }
      }
   
      for (int i = 0; i < tam; ++i){
        for (int j = i + 1; j < tam; ++j){
          if (vet2[j] > vet2[i]){
              swap =  vet2[i];

              vet2[i] = vet2[j];

              vet2[j] = swap;
          }
        }
      }

  cout << "O vetor ordenado na ordem crescente eh: ";
  for(int x = 0; x < tam; x++){
    cout << " " << vet1[x] << " ";
  }

  cout << "\nO vetor ordenado na ordem decrescente eh: ";

  for(int x = 0; x < tam; x++){
    cout << " " << vet2[x] << " ";
  }


}