//Ricardo Alfonso Velazco Castillo
//i)Si el valor que se le da es mayor que 5 el resultado es el mismo valor que se la dio.
//ii)Si el valor es menor o igual que 5, entonces lo siguiente que hace es verificar si es divisible entre 3: 
//*)si no es divisible entre 3 imprime el valor que se le dio desde el principio; //
//**)si es divisible entre 3, al número dado le suma 2, ahora el número resultante ya no divisible entre 3 y lo imprime independientemente si es mayor o no que 5.
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Dame un número"<<endl;
    cin>> x;
    if(x<=5)
    {
            if(x%3==0)
            {
               x=x+2; 
               cout<<"El valor es"<<" "<<x<<endl;
            }
            else
            {
                cout<<"El valor es"<<" "<<x<<endl;
            }
    }
    return 0;
}