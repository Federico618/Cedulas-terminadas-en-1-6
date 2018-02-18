#include <iostream>
using namespace std;

int main()
{
            int Num1,Num2,Num3;
            cout << "Ingrese primer numero : ";
    cin >> Num1;
            cout << "Ingrese segundo numero : ";
    cin >> Num2;
            cout << "Ingrese tercer numero : ";
    cin >> Num3;

    if (Num1<Num2)
    {
       if (Num2<Num3)
       {
        cout << "Orden creciente";
       }
       else
       {
           cout << "No estan introducidos en orden creciente";
           }
    }

    return 0;
}
