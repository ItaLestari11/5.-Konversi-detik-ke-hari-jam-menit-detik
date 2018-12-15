#include<iostream>
using namespace std;
int main(){
int hari, jam, menit,sisa,detik;
cout<<"Konversi detik ke hari,jam,menit,detik"<<endl;
cout<<"ITA LESTARI"<<endl;
cout<<"masukan detik:";
cin>>detik;
hari=detik/86400;
sisa=detik%86400;
jam=detik/3600;
sisa=detik%3600;
menit=detik/60;
sisa=detik%60;
cout<<"hari"<<hari<<endl;
cout<<"jam"<<jam<<endl;
cout<<"menit"<<menit<<endl;
cout<<"sisa"<<detik;
return 0;
}
