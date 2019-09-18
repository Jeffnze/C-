#include <iostream>

using namespace std;


/*void ejer1(int num){
    int a;
    int b;
    int c;
    int d;
    int e;
    a = num/10000;
    b = (num-(a*10000))/1000;
    c = (num-(a*10000+b*1000))/100;
    d = (num-(a*10000+b*1000+c*100))/10;
    e = num%10;
    cout<<a<< '\t' <<b<< '\t' <<c<< '\t' <<d<< '\t' << e<<endl;

    return ;
}
int main()
{
    int num;
    cout << "ingrese un numero de 5 digitos: " ;
    cin >> num;
    ejer1(num);
    return 0;
}


void ejer2(int num){
    int a;
    a = 0;
    while(num!=0){
        num = num/10;
        a = a+1;
    }
    cout << "tiene " << a << " digitos" << endl;
    return;
}

int main()
{
    int num;
    cout << "ingrese un numero; ";
    cin >> num;
    ejer2(num);
    return 0;
}

bool ejer3(int num){
    int a;
    int b;
    int c;
    int d;
    int e;
    a = num/10000;
    b = (num-(a*10000))/1000;
    c = (num-(a*10000+b*1000))/100;
    d = (num-(a*10000+b*1000+c*100))/10;
    e = num%10;
    if (a==e && b==d){
        cout<< "Si es un palindrome"<<endl;
        return true;
    }else{
        cout<< "No es un palindrome"<<endl;
        return false;
    }
}

int main()
{
    int num;
    cout<<"Ingrese un numero de 5 digitos: ";
    cin>>num;
    ejer3(num);
    return 0;
}
void ejer5(char a){
    int n=static_cast<int>(a);
    if (n>=48 && n<=57){
        cout<<a<<" es un numero"<< endl;
    } else{
        cout<<a<<" no es un numero"<< endl;
    }
    return;
}

int main()
{
    char a;
    cout<<"ingrese un caracter: ";
    cin>>a;
    ejer5(a);
    return 0;
}
*/


