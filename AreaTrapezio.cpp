#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Limpar a tela do console.
    system("cls");

    // Declaração das variáveis.
    double b1, b2, h, area;
    
    // Valida as bases.
    do
    {
        cout << "Digite o valor da base menor: ";
        cin >> b1;
        // Garante base menor positiva.
        b1 = abs(b1);
        cout << "Digite o valor da base maior: ";
        cin >> b2;
        // Garante base maior positiva.
        b2 = abs(b2);
    } while ((b1 == 0) || (b2 == 0) || (b2 < b1));

    // valida a altura.
    do
    {
        cout << "Digite o valor da altura: ";
        cin >> h;
        // Garante altura positiva.
        h = abs(h);
    } while (h < 0);

    // Fórmula da área do trapézio.
    area = ((b1 + b2) * h) / 2;
    cout << "\nÁrea Trapézio " << area << endl;

    return 0;
}