#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int
        deslocamento,
        letras;
    char
        abecedario[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' },
        frase[100];
    
    cout << "Diz-me o deslocamento que vais usar >> ";
    cin >> deslocamento;

    cout << "Quantas letras tem a tua frase/palavra >> ";
    cin >> letras;

    cout << "Diz-me a frase para usar a Cifra >> ";
    for (int i = 0; i < letras; i++)
    {
        cin >> frase[i];
    }

    for (int i = 0; i < letras; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (frase[i] == abecedario[j])
            {
                cout << abecedario[j + deslocamento];
            }
        }
    }
}