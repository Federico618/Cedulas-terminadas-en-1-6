#include <iostream>

using namespace std;

int main()
{

    int Num=1 ;

   cout << "Ingrese un numero del 1 al 7:  ";

    cin >> Num;

    if (Num==1 )
    {
            cout << "Lunes"  ;
    }

    else if (Num==2 )
    {

            cout << "Martes" ;
    }
    else if (Num==3 )
    {

            cout << "Miercoles" ;
    }
    else if (Num==4 )
    {

            cout << "Jueves" ;
    }
    else if (Num==5 )
    {

            cout << "Viernes" ;
    }
    else if (Num==6 )
    {

            cout << "Sabado" ;
    }
    else if (Num==7 )
    {

            cout << "Domingo" ;
    }
    else if (Num>7 )
    {

            cout << "Recuerde que los dias de la semana son 7" ;
    }

return 0;
}
