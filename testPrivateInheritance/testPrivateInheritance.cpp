// ---- Program Info Start----
//FileName:     testPrivateInheritance.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-18 10:01:09
// ---- Program Info End  ----

#include <iostream>

using namespace std;

class Timer{
    public:
        explicit Timer(int tickFrequency){
            cout<<"Timer(tickFrequency) Constructor"<<endl;
        }
        virtual void onTick();
};
void Timer::onTick(){
    cout<<"Timer::Tic-Toc!"<<endl;
}

class Widget:private Timer{
    private:
        virtual void onTick() const;
    public:
        explicit Widget():Timer(0){}

        //Non-Virtual Interface (NVI)
        void displayTime(){
            onTick();
        }
};
void Widget::onTick() const{
    cout<<"Widget::Tic-Toc!"<<endl;
}
class DerivedWidget:public Widget{
    private:
        virtual void onTick() const;
    public:
        explicit DerivedWidget(){};
};
void DerivedWidget::onTick() const{
    cout<<"DerivedWidget::Tic-Toc!"<<endl;
}

int main(int argc, char *argv[])
{

    DerivedWidget a;
    Widget *b = &a;
    b->displayTime();
    return 0;
}
