char kyepart()
{
  
  while(indi==0)
  {
   customKey = customKeypad1.getKey();
  
   if (customKey)
  {
    if(customKey=='>')
    {
    indi=1;
    Serial.print("   e-p"); 
    delay(300);   
    break;
    }
      Serial.println();
    Serial.print(customKey);
    Serial.print("           1-d");    
  }
  break;
  } 

 while(indi==1 )

 {
  customKey = customKeypad2.getKey();

  if (customKey)
  {
     if(customKey=='<')
    {
    indi=2;
    Serial.print("   q-z"); 
    delay(300);
    break;
    }
      Serial.println();
    Serial.print(customKey);
    Serial.print("           e-p");    
  }
  break;
 } 

 while(indi==2 )

 {
   customKey = customKeypad3.getKey();
 
   if (customKey)
  {
    if(customKey=='#')
    {
    indi=0;
    Serial.print("   1-d");
    delay(300);    
    break;
    }
      Serial.println();
    Serial.print(customKey);
    Serial.print("           q-z");    
  }
  break;
 }

return customKey;
}
