 #include <iostream>

 using namespace std;

 int main(void){
    int nota, idade;

    cout << "Qual a sua idade? ";
    cin >> idade;

    cout << " Qual a nota da sua prova? ";
    cin >> nota;

    if (!(idade <= 18) ){
        cout << " Você é da modalidade Sênior!\n";

        return 0;

    }

    if (nota > 100 || nota < 0) {
        cout << "A nota está em formato inválido!\n";

        return 0;
    }

    if (idade <= 18 && nota >=80){
        cout << " Você ganhou uma medalha na OBI!\n";

        return 0;
    }
    cout << "Infelizmente você não foi premiado na OBI.\n";

    return 0;
 }