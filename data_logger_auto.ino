int p=0;
int patient =p;
String message ;
int age = 30;
char str1[15] = "ABC";

char gender='M';
int pulse = 90 ;
int sys=120;
int dias=80;
int spO2=99;
int temp=33;
int ecg=10;
int id=0;
char str2[15]="01700000000";
char symptoms[15]="normal";
char doctor[15]="doctor";
void setup()
{
Serial.begin(9600);

Serial.println("CLEARDATA");
Serial.println("LABEL, Date   Time, patient Name ID# Phone, gender , age ,pulse, Bp systolic, bp diastolic, SpO2, temperature,symptoms ,Doctor refered to ");
Serial.println("RESETTIMER");
}
void loop(){
  
// if (Serial.available()> 0)
{
    message =Serial.readString();

   
  


Serial.print("DATA, TIME DATE ,");



Serial.print("Name:");
Serial.print(str1);
Serial.print("  ");
Serial.print("Phone: ");
Serial.print(str2);
Serial.print("  ");
Serial.print("ID:");
Serial.print(id);
Serial.print(" ,");


Serial.print(gender);
//Serial.print("C");
Serial.print(" ,");


Serial.print(age);
//Serial.print("%");
Serial.print(" ,");



Serial.print(pulse);
  //Serial.print("%");
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
  //Serial.print("%");
Serial.println(" ,");
  
  
  sys++;
  dias++;
  p++;
   if(p==3)
  { 
    p=0;
    
  }
 
 id++;
 
delay(1500);
  }
}
