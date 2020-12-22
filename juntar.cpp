#include <iostream>

using namespace std;


void juntar(int vet1[], int vet2[], int tam1, int tam2);

int main() {
  int tam1;
  int tam2;
  int tamMaior;
  int tamMenor;
  int result;

  cout << "Digite o tamanho do vetor 1 \n";
  cin >> tam1;
  int vetor1[tam1] = {0};

  cout << "Tudo bem, agora digite os valores do vetor 1.\n";

  for(int x = 0; x < tam1; x++){
    cout << "Digite o valor:" << x+1 << endl;
    cin >> vetor1[x];
  }

  cout << "Digite o tamanho do vetor 2 \n";
  cin >> tam2;
  int vetor2[tam2] = {0};


  cout << "Agora digite os valores do vetor 2.\n";

  for(int x = 0; x < tam2; x++){
    cout << "Digite o valor:" << x+1 << endl;
    cin >> vetor2[x];
  }
    

  juntar(vetor1, vetor2, tam1, tam2);

  
}

void juntar(int vet1[], int vet2[], int tam1, int tam2){
  int tamT = tam1 + tam2;
  int sum[tamT]= {0};

  
  
    for(int x = 0; x < tamT; x++){

      if(x < tam1){
        sum[x] = vet1[x];
      }
      else{
        sum[x] = vet2[x-tam1];

        
      }
      //for(int z = 0; z < tam2; z++){
        //sum[z+tam1] = vet2[z];
      //}
    }

    cout << "O Valor final da array, de " << tamT << " posicoes eh: ";
    for(int x = 0; x < tamT; x++){
      cout << sum[x] << " ";
    }
}