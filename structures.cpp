#include<iostream>
using namespace std;


typedef struct employee
{
    /* data */
    int eID;
    char favchar;
    float salary;
} ep;


union money
{
    int rice;        //4
    char car;        //1
    float pounds;     //4     only 4 bytes will be alloted to the program because of the union
};


int main(){

    //structure:-

    //ep saksham;
    // struct employee shreyam;
    // struct employee satyam;
    // saksham.eID=1;
    // saksham.favchar='S';
    // saksham.salary=120000;
    // cout<<"the values of structure are "<<saksham.eID<<endl;
    // cout<<"the values of structure are "<<saksham.favchar<<endl;
    // cout<<"the values of structure are "<<saksham.salary<<endl;

    //union:-

    // union money m1;
    // m1.rice=34;
    // m1.car='c';
    // cout<<m1.car<<endl;

    //enum:-

    enum meal{breakfast,lunch,dinner};
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    meal m1=breakfast;
    cout<<m1;
    return 0;
    
}