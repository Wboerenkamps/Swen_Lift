#include "lift.h"
#include <QTimer>
Lift::Lift()
{
}
void Lift::setMotorUp(){
    QTimer timer1;
    timer1.start(1000);
    while(timer1.isActive()){
    }
    setPosition(position + 1);
}
void Lift::setPosition(int position){
   if(position < 4 && position >= 0){
       this->position = position;
   }
}
void Lift::setMotorDown(){

}
