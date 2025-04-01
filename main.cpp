#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// función hash
long long prhf(string S)
{
    int n = S.length();
    int p = 31;
    int m = 1e9 + 9;
    long long valorHash = 0;
    long long potencia = 1;

    for (int i = 0; i < n; i++)
    {
        valorHash = (valorHash + (S[i] - 'a' + 1) * potencia) % m;
        potencia = (potencia * p) % m;
    }

    return valorHash;
}

int main()
{
    string input;
    cout << "Ingrese su cadena: "; // mensaje para usuario
    getline(cin, input);           // leer linea (con espacios)

    long long hashValue = prhf(input);
    cout << hashValue << endl; // imprimir

    return 0;
}