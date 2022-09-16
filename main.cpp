#include<iostream>
#include<wiringPi.h>
#include<softPwm.h>


int main()
{
    std::cout<< "Hello dongmin!" <<std::endl;
    int pwmPin = 26;
    wiringPiSetup();
    softPwmCreate(pwmPin,0,100);

    while(1)
    {
        softPwmWrite(pwmPin,40);
        delay(2000);

        softPwmWrite(pwmPin,70);
        delay(2000);

        softPwmWrite(pwmPin,90);
        delay(2000);

        softPwmWrite(pwmPin,99);
        delay(2000);
    }
    return 0;
}