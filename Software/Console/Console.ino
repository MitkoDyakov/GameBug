#include <Arduino.h>

//LEFT PAD
#define LEFT_JOYSTICK_X_AXIS     (A3)
#define LEFT_JOYSTICK_Y_AXIS     (A2)
//#define LEFT_SHOULDER_BTN        ()
//#define LEFT_BTN_UP              ()
//#define LEFT_BTN_LEFT            ()
//#define LEFT_BTN_RIGHT           ()
//#define LEFT_BTN_DOWN            ()
//#define LEFT_SELECTOR_A          ()
//#define LEFT_SELECTOR_B          ()

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
//#define RIGHT_SELECTOR_A         ()
//#define RIGHT_SELECTOR_B         ()

//#define RIGHT_VIBRATOR_MOTOR     ()
//#define RIGHT_LIGHT_RED          ()
//#define RIGHT_LIGHT_GREEN        ()
//#define RIGHT_LIGHT_BLUE         ()

void setup() 
{
                 
#ifdef LEFT_JOYSTICK_X_AXIS   
  pinMode(LEFT_JOYSTICK_X_AXIS, INPUT);
#endif

#ifdef LEFT_JOYSTICK_Y_AXIS   
  pinMode(LEFT_JOYSTICK_Y_AXIS, INPUT);
#endif          
   
#ifdef LEFT_SHOULDER_BTN      
  pinMode(LEFT_SHOULDER_BTN, INPUT);
#endif

#ifdef LEFT_BTN_UP          
  pinMode(LEFT_BTN_UP, INPUT);
#endif
  
#ifdef LEFT_BTN_LEFT      
  pinMode(LEFT_BTN_LEFT, INPUT);
#endif
    
#ifdef LEFT_BTN_RIGHT     
  pinMode(LEFT_BTN_RIGHT, INPUT);
#endif
    
#ifdef LEFT_BTN_DOWN 
  pinMode(LEFT_BTN_DOWN, INPUT);
#endif
         
#ifdef LEFT_SELECTOR_A 
  pinMode(LEFT_SELECTOR_A, INPUT);
#endif
       
#ifdef LEFT_SELECTOR_B 
  pinMode(LEFT_SELECTOR_B, INPUT);
#endif
            
#ifdef LEFT_VIBRATOR_MOTOR    
  pinMode(LEFT_VIBRATOR_MOTOR, OUTPUT);
#endif

#ifdef LEFT_LIGHT_RED  
  pinMode(LEFT_LIGHT_RED, OUTPUT);
#endif
       
#ifdef LEFT_LIGHT_GREEN
  pinMode(LEFT_LIGHT_GREEN, OUTPUT);
#endif
       
#ifdef LEFT_LIGHT_BLUE   
  pinMode(LEFT_LIGHT_BLUE, OUTPUT);
#endif     
                  
#ifdef RIGHT_JOYSTICK_X_AXIS  
  pinMode(RIGHT_JOYSTICK_X_AXIS, INPUT);
#endif

#ifdef RIGHT_JOYSTICK_Y_AXIS  
  pinMode(RIGHT_JOYSTICK_Y_AXIS, INPUT);
#endif
                        
#ifdef RIGHT_SHOULDER_BTN   
  pinMode(RIGHT_SHOULDER_BTN, INPUT);
#endif
  
#ifdef RIGHT_BTN_UP 
  pinMode(RIGHT_BTN_UP, INPUT);
#endif
          
#ifdef RIGHT_BTN_LEFT   
  pinMode(RIGHT_BTN_LEFT, INPUT);
#endif
      
#ifdef RIGHT_BTN_RIGHT  
  pinMode(RIGHT_BTN_RIGHT, INPUT);
#endif
      
#ifdef RIGHT_BTN_DOWN 
  pinMode(RIGHT_BTN_DOWN, INPUT);
#endif
        
#ifdef RIGHT_SELECTOR_A   
  pinMode(RIGHT_SELECTOR_A, INPUT);
#endif
    
#ifdef RIGHT_SELECTOR_B   
  pinMode(RIGHT_SELECTOR_B, INPUT);
#endif    
                        
#ifdef RIGHT_VIBRATOR_MOTOR  
  pinMode(RIGHT_VIBRATOR_MOTOR, OUTPUT);
#endif
 
#ifdef RIGHT_LIGHT_RED    
  pinMode(RIGHT_LIGHT_RED, OUTPUT);
#endif
    
#ifdef RIGHT_LIGHT_GREEN 
  pinMode(RIGHT_LIGHT_GREEN, OUTPUT);
#endif
   
#ifdef RIGHT_LIGHT_BLUE  
  pinMode(RIGHT_LIGHT_BLUE, OUTPUT);
#endif

  Serial.begin(9600);
}

void loop() {
  int axis;
  uint8_t tmp = 0;

  Serial.println("\tLeft\t\tRight");
  Serial.print("X\t");
  
#ifdef LEFT_JOYSTICK_X_AXIS
  axis = analogRead(LEFT_JOYSTICK_X_AXIS);
  Serial.print(axis);
#else 
  Serial.print("NA");
#endif
  Serial.print("\t\t");
#ifdef RIGHT_JOYSTICK_X_AXIS
  axis = analogRead(RIGHT_JOYSTICK_X_AXIS);
  Serial.println(axis);
#else 
  Serial.println("NA");
#endif

Serial.print("Y\t");  
#ifdef LEFT_JOYSTICK_Y_AXIS
  axis = analogRead(LEFT_JOYSTICK_Y_AXIS);
  Serial.print(axis);
#else 
  Serial.print("NA");
#endif
  Serial.print("\t\t");
#ifdef RIGHT_JOYSTICK_Y_AXIS
  axis = analogRead(RIGHT_JOYSTICK_Y_AXIS);
  Serial.println(axis);
#else 
  Serial.println("NA");
#endif

  
  Serial.print("Sh\t");
#ifdef LEFT_SHOULDER_BTN
  tmp = digitalRead(LEFT_SHOULDER_BTN);
  Serial.print(tmp);
#else
  Serial.print("NA");
#endif
  Serial.print("\t\t");
#ifdef RIGHT_SHOULDER_BTN
  tmp = digitalRead(RIGHT_SHOULDER_BTN);
  Serial.println(tmp);
#else
  Serial.println("NA");
#endif
  
  Serial.print("L\t");
#ifdef LEFT_BTN_LEFT
  tmp = digitalRead(LEFT_BTN_LEFT);
  Serial.print(tmp);
#else
  Serial.print("NA");
#endif
  Serial.print("\t\t");
#ifdef RIGHT_BTN_LEFT
  tmp = digitalRead(RIGHT_BTN_LEFT);
  Serial.println(tmp);
#else
  Serial.println("NA");
#endif
  
  Serial.print("R\t");
#ifdef LEFT_BTN_RIGHT
  tmp = digitalRead(LEFT_BTN_RIGHT);
  Serial.print(tmp);
#else
  Serial.print("NA");
#endif
  Serial.print("\t\t");
#ifdef RIGHT_BTN_RIGHT
  tmp = digitalRead(RIGHT_BTN_RIGHT);
  Serial.println(tmp);
#else
  Serial.println("NA");
#endif
  
  Serial.print("U\t");
#ifdef LEFT_BTN_UP
  tmp = digitalRead(LEFT_BTN_UP);
  Serial.print(tmp);
#else
  Serial.print("NA");
#endif
  Serial.print("\t\t");
#ifdef RIGHT_BTN_UP
  tmp = digitalRead(RIGHT_BTN_UP);
  Serial.println(tmp);
#else
  Serial.println("NA");
#endif
  
  Serial.print("D\t");
#ifdef LEFT_BTN_DOWN
  tmp = digitalRead(LEFT_BTN_DOWN);
  Serial.print(tmp);
#else
  Serial.print("NA");
#endif
  Serial.print("\t\t");
#ifdef RIGHT_BTN_DOWN
  tmp = digitalRead(RIGHT_BTN_DOWN);
  Serial.println(tmp);
#else
  Serial.println("NA");
#endif
  
  Serial.print("SA\t");
#ifdef LEFT_SELECTOR_A
  tmp = digitalRead(LEFT_SELECTOR_A);
  Serial.print(tmp);
#else
  Serial.print("NA");
#endif
  Serial.print("\t\t");
#ifdef RIGHT_SELECTOR_A
  tmp = digitalRead(RIGHT_SELECTOR_A);
  Serial.println(tmp);
#else
  Serial.println("NA");
#endif
  
  Serial.print("SB\t");
#ifdef LEFT_SELECTOR_B
  tmp = digitalRead(LEFT_SELECTOR_B);
  Serial.print(tmp);
#else
  Serial.print("NA");
#endif
  Serial.print("\t\t");
#ifdef RIGHT_SELECTOR_B
  tmp = digitalRead(RIGHT_SELECTOR_B);
  Serial.println(tmp);
#else
  Serial.println("NA");
#endif

  Serial.println();
  Serial.println("send L for LED demo or M for motor demo");
  Serial.println("-----------------------------------------------------------------");
  Serial.println();


  uint8_t i = 0;
  int incomingByte = 0;

  if (Serial.available() > 0) 
  {
    incomingByte = Serial.read();

    if('l' == incomingByte || 'L' == incomingByte)
    {
#ifdef LEFT_LIGHT_RED      
        for(i=0;i<255;i++)
        {
          analogWrite(LEFT_LIGHT_RED, i);
          delay(2);
        }  
        for(i=0;i<255;i++)
        {
          analogWrite(LEFT_LIGHT_RED, 255-i);
          delay(5);
        } 
        analogWrite(LEFT_LIGHT_RED, 0);
#endif
#ifdef LEFT_LIGHT_GREEN       
        for(i=0;i<255;i++)
        {
          analogWrite(LEFT_LIGHT_GREEN, i);
          delay(2);
        }  
        for(i=0;i<255;i++)
        {
          analogWrite(LEFT_LIGHT_GREEN, 255-i);
          delay(5);
        } 
        analogWrite(LEFT_LIGHT_GREEN, 0);
#endif
#ifdef LEFT_LIGHT_BLUE   
        for(i=0;i<255;i++)
        {
          analogWrite(LEFT_LIGHT_BLUE, i);
          delay(2);
        }  
        for(i=0;i<255;i++)
        {
          analogWrite(LEFT_LIGHT_BLUE, 255-i);
          delay(5);
        } 
        analogWrite(LEFT_LIGHT_BLUE, 0);
#endif
#ifdef RIGHT_LIGHT_RED      
        for(i=0;i<255;i++)
        {
          analogWrite(RIGHT_LIGHT_RED, i);
          delay(2);
        }  
        for(i=0;i<255;i++)
        {
          analogWrite(RIGHT_LIGHT_RED, 255-i);
          delay(5);
        } 
        analogWrite(RIGHT_LIGHT_RED, 0);
#endif
#ifdef RIGHT_LIGHT_GREEN       
        for(i=0;i<255;i++)
        {
          analogWrite(RIGHT_LIGHT_GREEN, i);
          delay(2);
        }  
        for(i=0;i<255;i++)
        {
          analogWrite(RIGHT_LIGHT_GREEN, 255-i);
          delay(5);
        } 
        analogWrite(RIGHT_LIGHT_GREEN, 0);
#endif
#ifdef RIGHT_LIGHT_BLUE   
        for(i=0;i<255;i++)
        {
          analogWrite(RIGHT_LIGHT_BLUE, i);
          delay(2);
        }  
        for(i=0;i<255;i++)
        {
          analogWrite(RIGHT_LIGHT_BLUE, 255-i);
          delay(5);
        } 
        analogWrite(RIGHT_LIGHT_BLUE, 0);
#endif        
    }

    if('m' == incomingByte || 'M' == incomingByte)
    {
#ifdef LEFT_VIBRATOR_MOTOR
        for(i=0;i<255;i++)
        {
          analogWrite(LEFT_VIBRATOR_MOTOR, i);
          delay(5);
        }  
        for(i=0;i<255;i++)
        {
          analogWrite(LEFT_VIBRATOR_MOTOR, 255-i);
          delay(5);
        } 
        analogWrite(LEFT_VIBRATOR_MOTOR, 0);      
#endif  

#ifdef RIGHT_VIBRATOR_MOTOR
        for(i=0;i<255;i++)
        {
          analogWrite(RIGHT_VIBRATOR_MOTOR, i);
          delay(5);
        }  
        for(i=0;i<255;i++)
        {
          analogWrite(RIGHT_VIBRATOR_MOTOR, 255-i);
          delay(5);
        } 
        analogWrite(RIGHT_VIBRATOR_MOTOR, 0);      
#endif  
    }
  }

    delay(500);
}
