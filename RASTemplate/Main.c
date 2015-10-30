#include <RASLib/inc/common.h>
#include <RASLib/inc/motor.h>

static tMotor *Motors[2];
static tBoolean initialized = false;

void initMotors(void);
void setMotorSpeed(float speed);

int main(void) {
    // initialization code can go here
    initMotors();
    setMotorSpeed(1.0);
    
    while (1) {
        // Runtime code can go here
        Printf("Hello World!\n");
        
    }
}


void initMotors(void) {
    if (!initialized) {
        initialized = true;

        Motors[0] = InitializeServoMotor(PIN_A2, false);
        Motors[1] = InitializeServoMotor(PIN_A7, false);
    }
}

void setMotorSpeed(float speed) {
    SetMotor(Motors[0], -speed);
    SetMotor(Motors[1], speed);
}

