#include <iostream>
#include <cmath>

using namespace std;

/*Ionutz lucreaza la Mega Image.Nu are un sef foarte bun, tocmai de aceea
l-a pus sa aranjeze produsele de la raionul cu rechizite.El trebuie sa le
aranjeze in ordine crescatoare dupa pret. Fiind baiat destept, Ionutz
foloseste un algoritm de sortare.Prima cerinta :
 1) Ajuta-l pe Ionutz sa sorteze rechizitele si astfel sa isi
 multumeasca seful.


*/
int main()

{
    int opmode;
    cin >> opmode;
    switch (opmode)
    {
    case 1:
        int n, i, v[1005], aux, j;

        cout << " Dati numarul de preturi care trebuie sortate " << '\n';
        cin >> n;
        cout << " Intoduceti preturile care trebuie sortate de Ionutz " << '\n';
        for (i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        for (i = 1; i <= n - 1; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                if (v[i] > v[j])
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        }
        for (i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }cout << '\n';
        cout << " Felicitari ! L-ai ajutat pe Ionutz in prima lui sarcina . " << endl;
        cout << "Nu te entuziasma ! Mai ai multe de facut <3!" << endl;
        break;
        /*
        Acum ajuta-l pe Ionutz sa faca inventarul. Nu se pricepe la matematica,
        insa il ajuta informatica. La raionul de dulciuri sunt mai multe tipuri de
        ciocolata.
        Fiecare are un pret diferit, respectiv:
        Ciocolata Kinder- 4.99 lei;
        Ciocolata Milka- 7.99 lei;
        Ciocolata Poiana - 1.49 lei;
        Ciocolata Alba - 3.99 lei;
        Ciocolata Heidi - 9.99 lei;
        Trufe Belgiene - 19.99;
        Borcane de Nuttela - 24.99 lei;
        */
    case 2:
        float Kinder, Milka, Poiana, Alba, Heidi, Tbel, Bnutt;
        cout << "Fiecare are un pret diferit, respectiv:"<<endl;
        cout << "Ciocolata Kinder - 4.99 lei;" << endl;
        cout << "Ciocolata Milka - 7.99 lei;" << endl;
        cout << "Ciocolata Poiana - 1.49 lei;" << endl;
        cout << "Ciocolata Alba - 3.99 lei; " <<endl;
        cout << "Ciocolata Heidi - 9.99 lei;" << endl;
        cout << "Trufe Belgiene - 19.99; " << endl;
        cout << "Borcane de Nuttela - 24.99 lei;" << endl;
    }
    return; 
}

