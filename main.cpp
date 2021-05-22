#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int casos, cont = 0, popa, popb, anos;
    double cresa, cresb;
    cin >> casos;
    while (cont < casos){
        cin >> popa;
        cin >> popb;
        cin >> cresa;
        cin >> cresb;
        anos = 0;
        while (true){
            if (anos == 101){
                cout << "Mais de 1 seculo." <<endl;
                break;
            }
            if (popa <= popb){
                popa = popa + ((popa * cresa) / 100);
                popb = popb + ((popb * cresb) / 100);
                anos++;
            }else{
                cout << anos << " anos." <<endl;
                break;
            }
        }
        cont++;
    }
    return 0;
}
