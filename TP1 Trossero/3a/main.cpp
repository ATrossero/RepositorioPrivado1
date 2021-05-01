  #include <iostream>
#include <math.h>

using namespace std;

main(){
    setlocale(LC_CTYPE,"Spanish");
    float vk;
    cout << "Por favor ingrese velocidad en Km/h" << endl;
    cin>> vk;
    if (vk>=0)
        {
            cout << "La velocidad en m/s es " <<vk/(3.6) << endl;
        }
        else
        {
            cout<< "El valor dado no es una velocidad"<<endl;
        }

    return 0;
}
