#include <QString>
#include <QDebug>

int main()
{
    QString str1("I'm Havva YILMAZ");
    QString str2="Hi!,I'm Havva YILMAZ";
    QString str3(15,'H');
    QString str4;
    str4.resize(2);
    str4[0]=QChar('H');
    str4[1]=QChar('Y');
    QString str5="HAVVA";
    str5.insert(5," ");
    str5.append("YILMAZ");

   {

    qDebug()<<"str1 : "<<str1;
    qDebug()<<"str2 : "<<str2;
    qDebug()<<"str3 : "<<str3;
    qDebug()<<"str4[0] : "<<str4[0];
    qDebug()<<"str4[1] : "<<str4[1];
    qDebug()<<"str5 : "<<str5;
    str5.clear();
    qDebug()<<"str5 is clear : "<<str5;
    int x=str1.compare(str2);
    if(x==0){
        qDebug()<<"strings are equal";
    }
    else{
        qDebug()<<"strings are not equal";
    }
    bool b1=str5.contains(str4[0]);
    if(b1==0){
       qDebug()<< "str5 contains str4[0]";
    }
    else
        qDebug()<<"str5 not contains str4[0]";

    int number=str1.count('a');
    qDebug()<<"str1 contains "<<number<<" times a";

    }
    return 0;
}
