#include <LiquidCrystal.h>

// Initialize the library by associating any needed LCD interface pin
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int buttonPin = 7;    // the number of the pushbutton pin
int buttonState = 0;int light=0;int push=0;        // variable for reading the pushbutton status

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(20, 4);
  // Print a message to the LCD

  // initialize the pushbutton pin as an input with internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is LOW:
  if (buttonState == LOW && light==1) {
    push=1 - push;
    delay(100);
    }
    light=buttonState;
  if(push==1){
     lcd.setCursor(0,0);
    lcd.print("            ");
    lcd.setCursor(1,3);
    lcd.print("");
    lcd.setCursor(2,1);
    lcd.print("MACHINE IS UNDER");
    lcd.setCursor(5,2);
    lcd.print("MAINTANENCE");
  }
   
    // Print a message to the LCD.
    
  else {
    // Clear the LCD screen
    lcd.clear();
    
  }
}
