#ifndef LIFT_H
#define LIFT_H


class Lift
{
public:
    Lift();
private:
    int position;
    bool emergency;
    bool doorOpen;
    bool motorUp;
    bool motorDown;
    int callLocation;
public:
    void setPosition(int position);
    void setMotorUp();
    void setMotorDown();
    void ToPosition();
    void DoorOpen();
    void setEmergency();

};

#endif // LIFT_H
