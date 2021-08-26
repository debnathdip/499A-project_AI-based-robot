///////////////////////////////////////////////////////
#include "U8glib.h"
U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NONE);  // I2C / TWI 

#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 4; 
int indi=0;
int i=0;
int j=0;
char customKey,customKey4;
int k=0;
int m=0;
int L=0;
char hexaKeys1[ROWS][COLS] = {
  {'1', '2', '3', 'a'},
  {'4', '5', '6', 'b'},
  {'7', '8', '9', 'C'},
  {'*', '0', '>', ' '}
};

char hexaKeys2[ROWS][COLS] = {
    {'d','e','f','g'},
    {'h','i','j','k'},
    {'l','m','n','o'},
    {'*','.','<',' '}
};


char hexaKeys3[ROWS][COLS] = {
    {'p','q','r','s'},
    {'t','u','v','w'},
    {'x','y','z','*'},
    {'*','.','#',' '}
};




byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 

Keypad customKeypad1 = Keypad(makeKeymap(hexaKeys1), rowPins, colPins, ROWS, COLS); 
Keypad customKeypad2 = Keypad(makeKeymap(hexaKeys2), rowPins, colPins, ROWS, COLS); 
Keypad customKeypad3 = Keypad(makeKeymap(hexaKeys3), rowPins, colPins, ROWS, COLS); 



/////////////////////////////////////////////////////////////
int p=0;
int patient =p;
String message ;
char age[20];
char nameofp[20];
char phoneofp[20];
char idofp[20];
char gen[20];

int pulse = 90 ;
int sys=120;
int dias=80;
int spO2=99;
int temp=33;
int ecg=10;
int id=0;

char symptoms[20];
char doctor[20];
/////////////////////////////////////////////////
void setup()
{
  ////////////////////////////////////////////
Serial.begin(19200);

Serial.println("CLEARDATA");
Serial.println("LABEL, Date   Time, patient Name ID# Phone, gender , age ,pulse, Bp systolic, bp diastolic, SpO2, temperature,symptoms ,Doctor refered to ");
Serial.println("RESETTIMER");
////////////////////////////////////////////////
//
// Serial.begin(9600);
    if ( u8g.getMode() == U8G_MODE_R3G3B2 ) {
    u8g.setColorIndex(255);     // white
  }
  else if ( u8g.getMode() == U8G_MODE_GRAY2BIT ) {
    u8g.setColorIndex(3);         // max intensity
  }
  else if ( u8g.getMode() == U8G_MODE_BW ) {
    u8g.setColorIndex(1);         // pixel on
  }
  else if ( u8g.getMode() == U8G_MODE_HICOLOR ) {
    u8g.setHiColorByRGB(255,255,255);
  }


 
}


void loop()

{ 

namep(); 
phone();
IDofp();
genderofp();
ageofp();
symptomsofp();
doectoref();
message =Serial.readString();
Serial.print("DATA, TIME DATE ,");

Serial.print("Name:");
Serial.print(nameofp);
Serial.print("  ");
Serial.print("Phone: ");
Serial.print(phoneofp);
Serial.print("  ");
Serial.print("ID:");
Serial.print(idofp);
Serial.print(" ,");


Serial.print(gen);
Serial.print(" ,");


Serial.print(age);
Serial.print(" ,");



Serial.print(pulse);
Serial.print(" ,");


Serial.print(sys);
Serial.print(",");

Serial.print(dias);
Serial.print(",");


Serial.print(spO2);
Serial.print(",");



Serial.print(temp);
Serial.print(",");


Serial.print(symptoms);
Serial.print(",");


Serial.print(doctor);
Serial.println(" ,");
 
   }
