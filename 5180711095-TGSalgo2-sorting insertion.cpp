#include <iostream>
using namespace std;
int main(){
int abc[1000],a,j,t,d;
cout<<"Jumlah Data   : ";cin>>d;
cout<<"Masukkan Data : "<<endl;
for (a=1;a<=d;a++)
    {cout<<"Data Ke-"<<a+1<<" = ";cin>>abc[a];
    }
for(a=1;a<=d;a++)
    {for (j=a+1;j<=d;j++)
        {
            if(abc[a]>abc[j])
            {t=abc[a];
             abc[a]=abc[j];
             abc[j]=t;
            }
        }
    }cout<<"Sorting Ascending  ";
    for(a=1;a<=d;a++)
    {cout<<abc[a]<<"  ";
    }cout<<endl;
for(a=1;a<=d;a++)
    {for (j=a+1;j<=d;j++)
        {
            if(abc[a]<abc[j])
            {t=abc[a];
             abc[a]=abc[j];
             abc[j]=t;
            }
        }
    }cout<<"Sorting Descending ";
    for(a=1;a<=d;a++)
    {cout<<abc[a]<<"  ";
    }
}

