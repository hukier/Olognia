#include <iostream>
#include <vector>
#include <queue>
#include "Heroe.h"
#include "Esbirro.h"

using namespace std;

int main()
{
    int v, n; // vida del heroe y cantidad de esbirros
    cin >> v >> n;

    vector<int> vidas(n);
    vector<int> ataques(n);
    vector<bool> canos(n);

    // lectura de la vida de los esbirros
    for (int i = 0; i < n; i++)
    {
        cin >> vidas[i];
    }

    // lectura de los ataques de los esbirros
    for (int i = 0; i < n; i++)
    {
        cin >> ataques[i];
    }

    // lectura de los canos
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        canos[i] = (x == 1);
    }

    Heroe heroe(v);
    queue<Esbirro> q; // cola de esbirros

    // Orden de entrada de esbirros en la cola (queue)
    for (int i = 0; i < n; i++)
    {
        q.push(Esbirro(vidas[i], ataques[i], canos[i]));
    }

    long long DamageTotal = 0; // Acumulador del daño hecho por el heroe

    // Simulacion de la batalla

    while (!q.empty() && heroe.getVida() > 0)
    {
        Esbirro esbirro = q.front(); // saco
        q.pop();                     // saco el esbirro de la cola

        // El heroe ataca al esbirro
        int ataqueActual = heroe.getAtaque();
        esbirro.recibirAtaque(ataqueActual);
        DamageTotal += ataqueActual; // Acumulo el daño hecho por el heroe

        // Ver si murio el esbirro
        if (esbirro.getVida() <= 0)
        {
            heroe.sumarKill();
        }
        else
        {
            // si es cano y ya recibio 2 ataques, se divide
            if (esbirro.debeDividirse())
            {
                int vidaClon = esbirro.getVida() - 1;
                int ataqueClon = esbirro.getAtaque() - 1;

                q.push(Esbirro(vidaClon, ataqueClon, false));
                q.push(Esbirro(vidaClon, ataqueClon, false));
            }
            else
            {
                // si vive y no se divide, lo vuelvo a poner en la cola
                q.push(esbirro);
            }
        }

        // El esbirro ataca al heroe
        heroe.recibirAtaque(esbirro.getAtaque());
        if (heroe.getVida() <= 0)
        {
            cout << "RIP mechón" << endl;
            return 0; // El heroe ha muerto, termina la simulacion
        }
    }

    cout << "\n"
         << endl;
    cout << DamageTotal << endl; // Imprimo el daño total hecho por el heroe
    if (heroe.getVida() > 0)
    {
        cout << " EZ pizzi\n"
             << endl;
    }
    else
    {
        cout << " RIP mechón\n"
             << endl;
    }

    return 0; // Fin del programa
}