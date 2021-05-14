#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n=";cin>>n;
    cout<<"8.1.1)n*8="<<n*8<<endl;
    cout<<"8.1.2)catul impartirii lui n la 4="<<n/4<<endl;
    cout<<"8.1.3)n*10="<<n<<0<<endl;
    cout<<"8.2)";
    if((n&1)==0)
        cout<<"numarul este par;"<<endl;
    else
        cout<<"numarul este impar;"<<endl;
    int m,x;
    cout<<"m[0,15]=";cin>>n;
    cout<<"x=";cin>>x;
    cout<<"8.3)bitul m din x=";
    cout<<(n<<x)-1<<endl;
    cout<<"8.4)"<<(x<<m)<<endl;
    cout<<"8.4.1. numarul x in care se seteaza bitul numarul n la valoarea 0= "<<(1<<x)<<endl;
    cout<<"8.4.2. numarul x in care se seteazi bitul n la valoarea 1= "<<(1<<x)-1<<endl;
    cout<<"8.4.3. numarul x in care se sterge bitul n= "<<(x<<n)<<endl;
    cout<<"8.4.4. numarul x in care se complementeaza bitul n= "<<(n<<x)<<endl;
    int nr1,nr2;
    cout<<"nr1=";cin>>nr1;
    cout<<"nr2=";cin>>nr2;
    cout<<"8.5. Sa se interschimbe valoarea a doua numere intregi nr1, nr2 fara a folosi alte variabile: "<<endl;
    cout<<"8.5.1. folosind operatori aritmetici indicatie (+, -)= "<<endl;
    cout<<"nr2="<<nr1+nr2-nr2<<endl;
    cout<<"nr1="<<nr1+nr2-nr1<<endl;
    cout<<"8.5.2. folosind numai operatori pe biti (indicatie: xor)= "<<"nr1^nr2"<<endl;
    cout<<"8.6. Sa se verifice daca un numar natural n este de forma 2 k sau nu";
    if(n<<x)
        cout<<"da"<<endl;
    else
        cout<<"nu"<<endl;
    int z,y,nn,p;
    cout<<"8.7. Se citesc intregii z, y, nn, p. Sa se copieze in z, incepand din poziția p, ultimii nn biti din y si sa se afiseze noua valoare a lui z="<<endl;
    cout<<"z=";cin>>z;
    cout<<"y=";cin>>y;
    cout<<"nn=";cin>>nn;
    cout<<"pozitia=";cin>>p;
    cout<<(nn<<y<<p)-z;
    return 0;
}
