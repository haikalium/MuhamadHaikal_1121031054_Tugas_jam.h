#include <iostream>
#include <windows.h>
using namespace std;
//Nama  = Muhamad Haikal
//Nim   = 1121031054
//kelas = B
int main ()
{
    int HH,MM,SS,a,b;
    b=a=0;
    while (b==0)
    {
        count<<"set jam : "<<endl;
        cin>>HH;
        count<<"set menit : "<<endl;
        cin>>MM;
        count<<"set detik : "<<endl;
        cin>>SS;
        if (HH<23&&MM<55&&SS<59)
        b++
        else
        system ("cls")
    }
    while (a==0)
    {
        system ("cls");
        count<<HH<<":"<<MM<<":"<<59<<endl;
        sleep(1000);
        SS++;
        if (SS>59)
        {
                SS=0;
                MM++;
        }
        if (MM>59)
        {
            MM=0;
            HH++;
        }
        if (HH>23)
        {
            HH=0;
        }
    }
    return  ;

    }


