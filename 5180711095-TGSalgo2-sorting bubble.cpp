#include <iostream>
using namespace std;
int main(){
int a,b,d,t,abc[100];
cout<<"Masukkan Data : ";cin>>d;
for(a=1;a<=d;a++)
    {cout<<"Data : ";cin>>abc[a];
    }
    for (a=1;a<=(d-1);a++)
    {for (b=d;b>=(a+1);b--)
        {if (abc[b-1]>abc[b])
            {t=abc[b-1];
             abc[b-1]=abc[b];
             abc[b]=t;
            }
        }
    }cout<<"Sorting Ascending  ";
    for (a=1;a<=d;a++)
    {cout<<abc[a]<<" ";
    }cout<<endl;
for (a=1;a<=(d-1);a++)
    {for (b=d;b>=(a+1);b--)
        {if (abc[b-1]<abc[b])
            {t=abc[b-1];
             abc[b-1]=abc[b];
             abc[b]=t;
            }
        }
    }cout<<"Sorting Descending ";
    for (a=1;a<=d;a++)
    {cout<<abc[a]<<" ";
    }return 0;
}
