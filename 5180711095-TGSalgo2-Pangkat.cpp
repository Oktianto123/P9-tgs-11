#include <iostream>
using namespace std;
double ABC(float awal, int pangkat){
    if(pangkat==0)
        return 1;
    else if(pangkat>=1)
        return awal*ABC(awal, pangkat-1);
    else if(pangkat<0)
        return 1/awal*ABC(awal, pangkat+1);
    }
main(){
int q,w;
cout<<"AWAL     : ";cin>>q;
cout<<"PANGKAT  : ";cin>>w;
cout<<ABC(q,w);}
