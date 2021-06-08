#include <iostream>
#include <math.h>
using namespace std;
main()
{
    setlocale(LC_CTYPE, "Spanish");
    float m1,m2,b1,b2,y1,y2,x;
    cout << "Ingrese la pendiente de la recta 1" << endl;
    cin>> m1;
    cout << "Ingrese el término independiente de la recta 1" << endl;
    cin>> b1;
    cout << "Ingrese la pendiente de la recta 2" << endl;
    cin>> m2;
    cout << "Ingrese el término independiente de la recta 2" << endl;
    cin>> b2;
    if ((m1-m2)==0)
    {
         if(b1==b2)
            {
                cout<< "Las rectas son iguales, se intersecan en todos sus puntos" <<endl;
            }else{
                cout<< "Las rectas son paralelas, no hay intersección." <<endl;
            }

    }else
    {
        x=(b2-b1)/(m1-m2);
        y1=(m1*x)+b1;
        y2=(m2*x)+b2;
        if (y1==y2)
                {
                cout<< "Las rectas se intersecan en las coordenadas: ("<<x<<";"<<y1<<")"<< endl;
                }
    }
    return 0;
}
