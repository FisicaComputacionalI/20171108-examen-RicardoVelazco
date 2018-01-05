//Ricardo Alfonso Velazco Castillo
//i)Si el valor que se le da es mayor que 5 el resultado es el mismo valor que se la dio.
//ii)Si el valor es menor o igual que 5, entonces lo siguiente que hace es verificar si es divisible por 3: si no es divisible entre 3 imprime el valor que se le dio desde el principio, despues le suma 2 y vuelve a verificar si es menor o igual que 5, enseguida vuelve a verificar si es divisible por 3 si no lo es lo imprime y si lo es lo es imprime, continua con el proceso hasta llegar a un número mayor que 5. 
#include <iostream>
using namespace std;
int main(){
    int x=1;
    
    //cout<<"Dame un número"<<endl;
    //cin>> x;
    if(x<=5)
    {
        while(x<=5)
        { 
            if(x%3==0)
            {
                x=x+2;
            }
            else
            {
              cout<<"El valor es"<<" "<<x<<endl;
              x=x+2;
            }
        }
    }
return 0;
}
