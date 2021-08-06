#include <QChar>
#include <QDebug>
#include <iostream>
using namespace std;
int main()
{
    {
        QChar ch1('H');
        qDebug()<<"ch1 : "<<ch1;
        QChar ch2('9');
        qDebug()<<"ch2 : "<<ch2;
        QChar ch3(122); //ASCII code 'z'
        qDebug()<<"ch3 : "<<ch3;
        QChar ch4(QChar::Mark_SpacingCombining); //Unicode class name Mc
        qDebug()<<"ch4 : "<<ch4;
        qDebug()<<"QChar::Number_Letter : "<<QChar::Number_Letter;
        qDebug()<<"QChar::DirB : "<<QChar::DirB;
        qDebug()<<"QChar::Script_SignWriting : "<<QChar::Script_SignWriting;
        qDebug()<<"QChar::Null : "<<QChar::Null;
        qDebug()<<"QChar::Unicode_Unassigned : "<<QChar::Unicode_Unassigned;
    }
    {
        QChar ch5('Y');
        qDebug()<<"ch5 : "<<ch5;
        bool b1=ch5.isDigit();
        if(b1==0){
            qDebug()<<"b1 : "<<b1;
            qDebug()<<"ch5 is not a digit!";
        }
        else
             qDebug()<<"ch5 is a digit!";

        char c_ch6='A';
        QChar ch6(c_ch6);
        qDebug()<<"c_char : "<<c_ch6;
        qDebug()<<"ch6 : "<<ch6;
        if(!ch6.isLower()){
            qDebug()<<ch6.isLower();
            qDebug()<<"ch6 is not a lower!";
        }
        else
             qDebug()<<"ch6 is a lower!";

    }
    return 0;
}
