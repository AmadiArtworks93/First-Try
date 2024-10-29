#include <Adafruit_CircuitPlayground.h>


int value;
bool slideSwitch;


bool leftButtonPressed;
bool rightButtonPressed;
float X, Y, Z;


void setup() {
 Serial.begin(9600);
 CircuitPlayground.begin();
}


void loop() {


 X = CircuitPlayground.motionX();
 Y = CircuitPlayground.motionY();
 Z = CircuitPlayground.motionZ();


 Serial.print("X: ");
 Serial.print(X);
 Serial.print("  Y: ");
 Serial.print(Y);
 Serial.print("  Z: ");
 Serial.println(Z);


 delay(100);
   //CircuitPlayground.playTone(1150, 165);
   //CircuitPlayground.playTone(550, 160);
    // CircuitPlayground.playTone(1450, 155);
     //  CircuitPlayground.playTone(150, 150);
      
 delay(100);




 CircuitPlayground.clearPixels();




 // //CircuitPlayground.setPixelColor(0, 0xFFB900);
 // CircuitPlayground.setPixelColor(1, 0xFFC52A);
 // CircuitPlayground.setPixelColor(2, 0xFFCF4F);
 // CircuitPlayground.setPixelColor(3, 0xFFD76E);
 // CircuitPlayground.setPixelColor(4, 0xFFDF88);
  // CircuitPlayground.setPixelColor(5, 0xb3ffeb);
 // CircuitPlayground.setPixelColor(6, 0x8bffe0);
 // CircuitPlayground.setPixelColor(7, 0x4cffd0);
 // CircuitPlayground.setPixelColor(8, 0x2effc8);
 // CircuitPlayground.setPixelColor(9, 0x00FFBD);


 value = CircuitPlayground.lightSensor();
  Serial.print("Light Sensor: ");
 Serial.println(value);




 // leftButtonPressed = CircuitPlayground.leftButton();
 // rightButtonPressed = CircuitPlayground.rightButton();
  // Serial.print("Left Button: ");
 // if (leftButtonPressed) {
 //   CircuitPlayground.playTone(1150, 165);
 //   delay(10);
 //    CircuitPlayground.playTone(150, 165);
 //     CircuitPlayground.playTone(1150, 165);
 //     delay(15);
 //      CircuitPlayground.playTone(1150, 165);
 //       CircuitPlayground.playTone(1150, 165);
 //        CircuitPlayground.playTone(1150, 165);
 // } else {
 // CircuitPlayground.setPixelColor(5, 0xb3ffeb);
 // CircuitPlayground.setPixelColor(6, 0x8bffe0);
 // CircuitPlayground.setPixelColor(7, 0x4cffd0);
 // CircuitPlayground.setPixelColor(8, 0x2effc8);
 // CircuitPlayground.setPixelColor(9, 0x00FFBD);
 // }
 // Serial.print("   Right Button: ");
 // if (rightButtonPressed) {
 //   CircuitPlayground.playTone(1450, 155);
 //   CircuitPlayground.playTone(150, 100);
 //   CircuitPlayground.playTone(1450, 155);
 //   CircuitPlayground.playTone(100, 60);
 //   CircuitPlayground.playTone(80, 60);
 //   CircuitPlayground.playTone(50, 60);
 //   delay(50);
 //   CircuitPlayground.playTone(2000, 155);


 // } else {
 // CircuitPlayground.setPixelColor(0, 0xFFB900);
 // CircuitPlayground.setPixelColor(1, 0xFFC52A);
 // CircuitPlayground.setPixelColor(2, 0xFFCF4F);
 // CircuitPlayground.setPixelColor(3, 0xFFD76E);
 // CircuitPlayground.setPixelColor(4, 0xFFDF88);  
 
   
   slideSwitch = CircuitPlayground.slideSwitch();
     leftButtonPressed = CircuitPlayground.leftButton();
 rightButtonPressed = CircuitPlayground.rightButton();
 Serial.print("Slide Switch: ");
 if (slideSwitch) { 
 if (leftButtonPressed) {
   CircuitPlayground.playTone(1150, 165);
   delay(10);
    CircuitPlayground.playTone(150, 165);
     CircuitPlayground.playTone(1150, 165);
     delay(15);
      CircuitPlayground.playTone(1150, 165);
       CircuitPlayground.playTone(1150, 165);
        CircuitPlayground.playTone(1150, 165);
 } else {
 CircuitPlayground.setPixelColor(5, 0xb3ffeb);
 CircuitPlayground.setPixelColor(6, 0x8bffe0);
 CircuitPlayground.setPixelColor(7, 0x4cffd0);
 CircuitPlayground.setPixelColor(8, 0x2effc8);
 CircuitPlayground.setPixelColor(9, 0x00FFBD);
 }
 Serial.print("   Right Button: ");
 if (rightButtonPressed) {
   CircuitPlayground.playTone(1450, 155);
   CircuitPlayground.playTone(150, 100);
   CircuitPlayground.playTone(1450, 155);
   CircuitPlayground.playTone(100, 60);
   CircuitPlayground.playTone(80, 60);
   CircuitPlayground.playTone(50, 60);
   delay(50);
   CircuitPlayground.playTone(2000, 155);


 }
 else {
 CircuitPlayground.setPixelColor(0, 0xFFB900);
 CircuitPlayground.setPixelColor(1, 0xFFC52A);
 CircuitPlayground.setPixelColor(2, 0xFFCF4F);
 CircuitPlayground.setPixelColor(3, 0xFFD76E);
 CircuitPlayground.setPixelColor(4, 0xFFDF88);
   Serial.print("+");
 }
 }else {
   if(rightButtonPressed){
         CircuitPlayground.playTone(1150, 165);
   delay(10);
    CircuitPlayground.playTone(150, 165);
     CircuitPlayground.playTone(1150, 165);
     delay(15);
      CircuitPlayground.playTone(1150, 165);
       CircuitPlayground.playTone(1150, 165);
        CircuitPlayground.playTone(1150, 165);
 }
 else {
CircuitPlayground.setPixelColor(0, 0xFFB900);
 CircuitPlayground.setPixelColor(1, 0xFFC52A);
 CircuitPlayground.setPixelColor(2, 0xFFCF4F);
 CircuitPlayground.setPixelColor(3, 0xFFD76E);
 CircuitPlayground.setPixelColor(4, 0xFFDF88);
 }
if(leftButtonPressed){
     CircuitPlayground.playTone(1450, 155);
   CircuitPlayground.playTone(150, 100);
   CircuitPlayground.playTone(1450, 155);
   CircuitPlayground.playTone(100, 60);
   CircuitPlayground.playTone(80, 60);
   CircuitPlayground.playTone(50, 60);
   delay(50);
   CircuitPlayground.playTone(2000, 155);
   }
else {
 CircuitPlayground.setPixelColor(5, 0xb3ffeb);
 CircuitPlayground.setPixelColor(6, 0x8bffe0);
 CircuitPlayground.setPixelColor(7, 0x4cffd0);
 CircuitPlayground.setPixelColor(8, 0x2effc8);
 CircuitPlayground.setPixelColor(9, 0x00FFBD);


   Serial.print("-");
 }
 Serial.println();
}
}
