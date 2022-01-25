#include <Arduino.h>
#include <XInput.h>

//LEFT PAD
#define LEFT_JOYSTICK_X_AXIS     (A3)
#define LEFT_JOYSTICK_Y_AXIS     (A2)

#define LEFT_VIBRATOR_MOTOR      (10)
#define LEFT_LIGHT_RED           (3)
#define LEFT_LIGHT_GREEN         (5)
#define LEFT_LIGHT_BLUE          (6)

//RIGHT PAD
#define RIGHT_JOYSTICK_X_AXIS    (A0)
#define RIGHT_JOYSTICK_Y_AXIS    (A1)
#define RIGHT_SHOULDER_BTN       (14)
#define RIGHT_BTN_UP             (9)
#define RIGHT_BTN_LEFT           (7)
#define RIGHT_BTN_RIGHT          (16)
#define RIGHT_BTN_DOWN           (8)

const int ADC_Max = 1023;  // 10 bit

void setup() 
{                
  pinMode(LEFT_JOYSTICK_X_AXIS, INPUT);
  pinMode(LEFT_JOYSTICK_Y_AXIS, INPUT);
  pinMode(LEFT_VIBRATOR_MOTOR, OUTPUT);
  pinMode(LEFT_LIGHT_RED, OUTPUT);
  pinMode(LEFT_LIGHT_GREEN, OUTPUT);
  pinMode(LEFT_LIGHT_BLUE, OUTPUT);

  pinMode(RIGHT_JOYSTICK_X_AXIS, INPUT);
  pinMode(RIGHT_JOYSTICK_Y_AXIS, INPUT);
  pinMode(RIGHT_SHOULDER_BTN, INPUT);
  pinMode(RIGHT_BTN_LEFT, INPUT);
  pinMode(RIGHT_BTN_RIGHT, INPUT);
  pinMode(RIGHT_BTN_DOWN, INPUT);

  XInput.setJoystickRange(0, ADC_Max);  // Set joystick range to the ADC
  XInput.setAutoSend(false);  // Wait for all controls before sending

  XInput.begin();
}

void loop() 
{
  boolean tmpVal = 0;
  int tmpJoyX = 0;
  int tmpJoyY = 0;
  
  tmpVal = digitalRead(RIGHT_BTN_DOWN);
  XInput.setButton(BUTTON_A, tmpVal);

  tmpVal = digitalRead(RIGHT_BTN_RIGHT);
  XInput.setButton(BUTTON_B, tmpVal);

  tmpVal = digitalRead(RIGHT_BTN_LEFT);
  XInput.setButton(BUTTON_X, tmpVal);
  
  tmpVal = digitalRead(RIGHT_BTN_UP);
  XInput.setButton(BUTTON_Y, tmpVal);

  tmpVal = digitalRead(RIGHT_SHOULDER_BTN);
  XInput.setButton(BUTTON_RB, tmpVal);
  
  tmpJoyX = analogRead(LEFT_JOYSTICK_X_AXIS);
  tmpJoyY = analogRead(LEFT_JOYSTICK_Y_AXIS);
  XInput.setJoystickX(JOY_LEFT, tmpJoyX, true);
  XInput.setJoystickY(JOY_LEFT, tmpJoyY, true);

  tmpJoyX = analogRead(RIGHT_JOYSTICK_X_AXIS);
  tmpJoyY = analogRead(RIGHT_JOYSTICK_Y_AXIS);
  XInput.setJoystickX(JOY_RIGHT, tmpJoyX, true);
  XInput.setJoystickY(JOY_RIGHT, tmpJoyY, true);

  // Send control data to the computer
  XInput.send();
}
