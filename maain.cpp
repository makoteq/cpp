#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int tab[9];
    int txt=0;
    for( int x = 0; x <= 9; x++ ){
    cout<<"wprowadz liczbe  "<<x+1<<"   ";
    cin>>tab[x];
    }
    txt=tab[0];
    for( int i = 0; i <= 9; i++ ){
        if(tab[i]>txt){
             txt=tab[i];
        }
    }
 cout<<"najwieksza liczba to "<<txt<<endl;
 return 0;
}
