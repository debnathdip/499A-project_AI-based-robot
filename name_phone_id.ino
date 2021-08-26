void namep(){
  
   u8g.firstPage();  
 do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("your name ?  ");

   } while( u8g.nextPage() ); 
   
  
   if(j==0)
   {
   while(1)
   {
  for(L=i;L<21;L++)
  {
nameofp[L]=' ';  
  }
  customKey=kyepart();
  k=customKey;

  
  
  if(customKey)
   {
    if(customKey!='#')
   {
  Serial.print("     n   ");
  Serial.print(k);
  nameofp[i]=customKey;
   // picture loop
 u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("your name ? ");

  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(nameofp);
  m++;
   } while( u8g.nextPage() );
   i++;
   }
  
  
 if(i>20||k==42)
   {
  if(k==42)
//for(int L=i-1;L<21;L++)
//   {
//nameofp[i]=' ';  
//  }
nameofp[i-1]='\0';  
  Serial.println("");  
  Serial.print("String:");
  Serial.println(nameofp);
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("");
 u8g.firstPage();  
 do{
   u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,15);
  u8g.print("your name:");
   
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(nameofp);
   } while( u8g.nextPage() );
  
  i=0;
  j=1;
  k=0;
  m=0;
  L=0;
   }  
   }

if(j==1)
   {
j=0;
break;  
   }
   }
   }

}



///////////////////////////////////////////////////////


void phone() {

   u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("phone number ");

   } while( u8g.nextPage() );


   
   if(j==0)
   {
   while(1)
   {
  for(int L=i;L<21;L++)
   {
phoneofp[L]=' ';  
   }
  customKey=kyepart();
  k=customKey;

  
  
  if(customKey)
   {
    if(customKey!='#')
   {
  Serial.print("     n   ");
  Serial.print(k);
  phoneofp[i]=customKey;
   // picture loop
 u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("phone number ");

  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(phoneofp);
  m++;
   } while( u8g.nextPage() );
   i++;
   }
  
  
 if(i>20||k==42)
   {
  if(k==42)
//for(int L=i-1;L<21;L++)
//   {
phoneofp[i-1]='\0';  
//   }
  Serial.println("");  
  Serial.print("String:");
  Serial.println(phoneofp);
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("");
 u8g.firstPage();  
 do{
   u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,15);
  u8g.print("your number:");
   
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(phoneofp);
   } while( u8g.nextPage() );
  
  i=0;
  j=1;
  k=0;
  m=0;
  L=0;
   }  
   }

if(j==1)
   {
j=0;
break;  
   }
   }
   }

}

/////////////////////////////////////////////////////////////////
void IDofp()
{
  
   u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("ID number ");

   } while( u8g.nextPage() );


   
   if(j==0)
   {
   while(1)
   {
  for(int L=i;L<21;L++)
   {
idofp[L]=' ';  
   }
  customKey=kyepart();
  k=customKey;

  
  
  if(customKey)
   {
    if(customKey!='#')
   {
  Serial.print("     n   ");
  Serial.print(k);
idofp[i]=customKey;
   // picture loop
 u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("ID number ");

  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(idofp);
  m++;
   } while( u8g.nextPage() );
   i++;
   }
  
  
 if(i>20||k==42)
   {
  if(k==42)
//for(int L=i-1;L<21;L++)
//   {
idofp[i-1]='\0';  
//   }
  Serial.println("");  
  Serial.print("String:");
  Serial.println(idofp);
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("");
 u8g.firstPage();  
 do{
   u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,15);
  u8g.print("ID number:");
   
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(idofp);
   } while( u8g.nextPage() );
  
  i=0;
  j=1;
  k=0;
  m=0;
  L=0;
   }  
   }

if(j==1)
   {
j=0;
break;  
   }
   }
   }

  
}
///////////////////////////////////////////
void genderofp()
{
  
   u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("gender ");

   } while( u8g.nextPage() );


   
   if(j==0)
   {
   while(1)
   {
  for(int L=i;L<21;L++)
   {
gen[L]=' ';  
   }
  customKey=kyepart();
  k=customKey;

  
  
  if(customKey)
   {
    if(customKey!='#')
   {
  Serial.print("     n   ");
  Serial.print(k);
gen[i]=customKey;
   // picture loop
 u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("gender ");

  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(gen);
  m++;
   } while( u8g.nextPage() );
   i++;
   }
  
  
 if(i>20||k==42)
   {
  if(k==42)
//for(int L=i-1;L<21;L++)
//   {
gen[i-1]='\0';  
//   }
  Serial.println("");  
  Serial.print("String:");
  Serial.println(gen);
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("");
 u8g.firstPage();  
 do{
   u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,15);
  u8g.print("gender:");
   
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(gen);
   } while( u8g.nextPage() );
  
  i=0;
  j=1;
  k=0;
  m=0;
  L=0;
   }  
   }

if(j==1)
   {
j=0;
break;  
   }
   }
   }

  
}
/////////////////////////////////////////////////
void ageofp()
{
  
   u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("age ");

   } while( u8g.nextPage() );


   
   if(j==0)
   {
   while(1)
   {
  for(int L=i;L<21;L++)
   {
age[L]=' ';  
   }
  customKey=kyepart();
  k=customKey;

  
  
  if(customKey)
   {
    if(customKey!='#')
   {
  Serial.print("     n   ");
  Serial.print(k);
age[i]=customKey;
   // picture loop
 u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("age ");

  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(age);
  m++;
   } while( u8g.nextPage() );
   i++;
   }
  
  
 if(i>20||k==42)
   {
  if(k==42)
//for(int L=i-1;L<21;L++)
//   {
age[i-1]='\0';  
//   }
  Serial.println("");  
  Serial.print("String:");
  Serial.println(age);
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("");
 u8g.firstPage();  
 do{
   u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,15);
  u8g.print("age:");
   
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(age);
   } while( u8g.nextPage() );
  
  i=0;
  j=1;
  k=0;
  m=0;
  L=0;
   }  
   }

if(j==1)
   {
j=0;
break;  
   }
   }
   }

}
/////////////////////////////////////////////////////
void symptomsofp()
{
  
   u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("symptoms ");

   } while( u8g.nextPage() );


   
   if(j==0)
   {
   while(1)
   {
  for(int L=i;L<21;L++)
   {
symptoms[L]=' ';  
   }
  customKey=kyepart();
  k=customKey;

  
  
  if(customKey)
   {
    if(customKey!='#')
   {
  Serial.print("     n   ");
  Serial.print(k);
symptoms[i]=customKey;
   // picture loop
 u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("symptoms ");

  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(symptoms);
  m++;
   } while( u8g.nextPage() );
   i++;
   }
  
  
 if(i>20||k==42)
   {
  if(k==42)
//for(int L=i-1;L<21;L++)
//   {
symptoms[i-1]='\0';  
//   }
  Serial.println("");  
  Serial.print("String:");
  Serial.println(symptoms);
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("");
 u8g.firstPage();  
 do{
   u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,15);
  u8g.print("symptoms:");
   
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(symptoms);
   } while( u8g.nextPage() );
  
  i=0;
  j=1;
  k=0;
  m=0;
  L=0;
   }  
   }

if(j==1)
   {
j=0;
break;  
   }
   }
   }

  
}

//////////////////////////////////////
void doectoref()
{
  
   u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("doctor referred ");

   } while( u8g.nextPage() );


   
   if(j==0)
   {
   while(1)
   {
  for(int L=i;L<21;L++)
   {
doctor[L]=' ';  
   }
  customKey=kyepart();
  k=customKey;

  
  
  if(customKey)
   {
    if(customKey!='#')
   {
  Serial.print("     n   ");
  Serial.print(k);
doctor[i]=customKey;
   // picture loop
 u8g.firstPage();  
do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 15);
  u8g.print("doctor ");

  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(doctor);
  m++;
   } while( u8g.nextPage() );
   i++;
   }
  
  
 if(i>20||k==42)
   {
  if(k==42)
//for(int L=i-1;L<21;L++)
//   {
doctor[i-1]='\0';  
//   }
  Serial.println("");  
  Serial.print("String:");
  Serial.println(doctor);
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("");
 u8g.firstPage();  
 do{
   u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,15);
  u8g.print("doctor:");
   
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,30);
  u8g.print(doctor);
   } while( u8g.nextPage() );
  
  i=0;
  j=1;
  k=0;
  m=0;
  L=0;
   }  
   }

if(j==1)
   {
j=0;
break;  
   }
   }
   }

  
}
////////////////////////////////////
