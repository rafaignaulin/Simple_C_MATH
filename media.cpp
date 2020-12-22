#include <iostream>

using namespace std;


float media(int vet[], int tam);

int main() {
  int tam;
  int elem;
  float result1;
  float result2;

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

  result1 = media(vetor1, tam);
  result2 = media(vetor2, tam);
  
  cout << "A media do vetor 1 é igual a : " << result1 << endl;
  cout << "A media do vetor 2 é igual a : " << result2 << endl;
  cout << "A media entre os dois vetores é igual a : " << (result1 + result2) / 2 << endl;


}

float media(int vet[], int tam){
  int sum=0;
  float media = 0;
  for(int x = 0 ; x < tam; x++){
    sum += vet[x];
  }
  
  media = sum / (tam * 1.0);
  
  cout << media << endl;
  return media;

}