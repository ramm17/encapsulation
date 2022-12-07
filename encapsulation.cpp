#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class CALC
{
private:
    //hidden from outside the world
    float result;
public:
    CALC(float i=0)//constructor
    {
        result=i;
    }
    void addnumber(float num1, float num2)
    {
        result=num1+num2;
    }
    void subnumber(float num1, float num2)
    {
      result=num1-num2;
    }
    void mulnumber(float num1, float num2)
    {
      result=num1*num2;
    }
    void divnumber(float num1, float num2)
    {
        result=num1/num2;
    }
    float getresult()
    {
        return result;
    }
};
int main()
{
    CALC cob;//object create
    float a,b;
    int c;
    char ch;
    do{
    system("cls");
    cout<<"====================="<<endl;
    cout<<"ARITHMETIC CALCULATOR"<<endl;
    cout<<"====================="<<endl;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter the operator(+,-,/,*): ";
    cin>>ch;
    switch(ch)
    {
    case '+':
        cob.addnumber(a,b);
        cout<<"Summation = "<<cob.getresult()<<"\n";
        break;
        case '-':
         cob.subnumber(a,b);
        cout<<"Subtraction = "<<cob.getresult()<<"\n";
        break;
    case '*':
        cob.mulnumber(a,b);
        cout<<"Multiplication = "<<cob.getresult()<<"\n";
        break;
    case '/':
        cob.divnumber(a,b);
        cout<<"Division = "<<cob.getresult()<<"\n";
        break;
    default:
        cout<<"Wrong operator...Exiting...Press a key..";
        break;
    }
    getch();
    cout<<"\nDo you want to continue...(1-Yes/0-No): ";
    cin>>c;
}while(c==1);
getch();
return 0;
}
