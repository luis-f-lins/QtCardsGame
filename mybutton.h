#ifndef MYBUTTON_H
#define MYBUTTON_H


#include<QPushButton>

class MyButton:public QPushButton{
public:

bool isclicked = false;
public slots:

 bool clicked();

};

#endif // MYBUTTON_H
