#include <AFMotor.h>
AF_DCMotor base(1);
AF_DCMotor redArm(2);
AF_DCMotor triArm(3);
AF_DCMotor claw(4);
void pick();
 // create motor #2
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");
  redArm.setSpeed(200);    
   // set the speed to 200/255
}
void loop() {
 
  // Serial.print("tick");  
  // redArm.run(FORWARD);      // turn it on going forward
  // delay(1000);

  // Serial.print("tick");  
  // redArm.run(BACKWARD);      // turn it on going forward
  // delay(1000);


  
  
  
  // Serial.print("tack");
  // redArm.run(RELEASE);      // stopped
  // delay(1000);
  
  
}

void pick(){
  
  
  redArm.run(BACKWARD);
  delay(1000);
 
  
  triArm.run(BACKWARD);
  delay(1000);

  redArm.run(FORWARD);
  delay(1000);
 
  
  triArm.run(FORWARD);
  delay(1000);
}
