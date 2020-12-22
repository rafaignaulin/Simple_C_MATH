#include <iostream>

using namespace std;

void multiplicar(int vet1[], int vet2[], int tam);

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


  multiplicar(vetor1, vetor2, tam);



}

void multiplicar(int vet1[], int vet2[], int tam){
  int vetor[tam]= {0};
  
  cout << "O resultado  da multiplicacao dos dois vetores eh: ";
  for(int x=0; x<tam; ++x){
    vetor[x] = vet1[x] * vet2[x];  
    cout << vetor[x] << " ";
  }


}