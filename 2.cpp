#include <iostream>

using namespace std;

int main()
{
            int num1,num2,num3,num4;
            cout << "Ingrese el primer numero:";
     cin >> num1 ;
            cout << "Ingrese el segundo numero:";
     cin >> num2 ;
            cout << "Ingrese el tercer numero::";
     cin >> num3 ;
            cout << "Ingrese el cuarto numero:";
     cin >> num4 ;
    if (num1<num2 && num1<num3 && num1<num4)
    {
      if (num2<num3 && num2<num4 && num3<num4)
       {

        cout << num1;
        cout << num2;
        cout << num3;
        cout << num4;
       }
       else
       {
        cout << num1;
        cout << num4;
        cout << num3;
        cout << num2;
       }

    }
    else if (num2<num1 && num2<num3 && num2<num4)
    {
       if (num1<num3 && num1<num4 && num3<num4)
       {
        cout << num2;
        cout << num1;
        cout << num3;
        cout << num4;
       }
       else
       {
        cout << num2;
        cout << num4;
        cout << num3;
        cout << num1;
       }
    }
    else if (num3<num1 && num3<num2 && num3<num4)
    {
       if (num1<num2 && num1<num4 && num2<num4 )
       {
        cout << num3;
        cout << num1;
        cout << num2;
        cout << num4;
       }
       else
       {
        cout << num3;
        cout << num2;
        cout << num1;
        cout << num4;

       }
    }
else if (num4<num1 && num4<num2 && num4<num3)
    {
       if (num1<num2 && num1<num3 && num2<num3)
       {
        cout << num4;
        cout << num1;
        cout << num2;
        cout << num3;
       }
       else
       {
        cout << num4;
        cout << num3;
        cout << num2;
        cout << num1;
       }
    }

    return 0;
}
