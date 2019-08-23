#include <iostream>

using namespace std;

int main()
{
    cout<< "Ingrese el 1er numero: ";
    int a;
      cin>> a;
    cout<< "Ingrese el 2do numero: ";
    int b;
      cin>> b;
    cout<< "Ingrese el 3er numero: ";
    int c;
      cin>> c;
    if ((a>b) && (a>c))
        cout<<a<< " es el mayor"<< endl;
    if ((b>a) && (b>c))
        cout<<b<< " es el mayor"<< endl;
    if ((c>a) && (c>b))
        cout<<c<< " es el mayor"<< endl;


    return 0;
}
