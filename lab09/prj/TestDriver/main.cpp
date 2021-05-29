#include <iostream>
#include "ModulesKrivda.h"
#include <string>
#include <windows.h>

using namespace std;


int main()
{
    int i=0;
    cout<<"\tTask 9.1"<<endl;
    int sal[5]={666, 1234, 4321, 11111, 12345},
    years[5]={3, 12, 1, 11, 5},
    perc=0, relsal=0;
    int testper[5]={5, 25, 25, 25, 5};
    int testrlsal[5]={699, 1542, 5401, 13888, 12962};
    for(i=0;i<5;i++){
        salary(&sal[i], &years[i], &perc, &relsal);
        if(perc==testper[i]){
            if(relsal==testrlsal[i]){
                cout<<"Test Case status: passed"<<endl;
            }else{
                cout<<"Test Case status: failed"<<endl;
            }
        }else{
            cout<<"Test Case status: failed"<<endl;
        }
    }

    cout<<"\n"<<endl;


    cout << "\nTask 9.2:" << endl;
    string length[12]={"53","54","55","56","57","58","59","60","61","62","63","51"};
        string sizeh[12]={"XS","XS","S","S","M","M","L","L","XL","XL","E","E"};

        for(int i = 0;i < 12;i++){
            if(Helmetsize(length[i]) == sizeh[i]){
                cout << "Test Case status: passed" << endl;
            }
            if(Helmetsize(length[i]) != sizeh[i]){
                cout << "Test Case status: failed" << endl;
            }
        }
    cout<<"\n"<<endl;

    cout<<"\tTask 9.3"<<endl;
    int n[10]={666, 121212, 123321, 1000001, 789124, 4321298, 10, 666777, 12478978, 537489};
    int result3[10]={5, 11, 10, 12, 14, 8, 2, 11, 13, 12};
    for(int i = 0;i < 10;i++){
        if(BinD15(n[i]) == result3[i]){
            cout << "Test Case status: passed" << endl;
        }
        if(BinD15(n[i]) != result3[i]){
            cout << "Test Case status: failed" << endl;
        }
    }


    system("pause");

}
