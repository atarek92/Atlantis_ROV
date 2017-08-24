
  #include <Servo.h> 
 
  int incomingByte = 0;
  
  int pos = 0; 
 
  Servo servo1;          // Horizontal Back
  Servo servo2;          // Horizontal Front
  Servo servo3;          // Vertical Front
  Servo servo4;          // Vertical Back
 
  int relay1 = 2;
  int relay2 = 4;
  int relay3 = 12;
  int relay4 = 13;

  void setup() 
 
  {                 
  Serial.begin(9600); 

  servo1.attach(6);   
  servo2.attach(9);   
  servo3.attach(10);   
  servo4.attach(11);
  
  pinMode(relay1, OUTPUT);  
  pinMode(relay2, OUTPUT);  
  pinMode(relay3, OUTPUT);  
  pinMode(relay4, OUTPUT);  
  }

  void loop() 
   {
     if (Serial.available() > 0) 
    {incomingByte = Serial.read();}
    
    switch (incomingByte) 
   {
  
    case 0:

   {
    servo1.write(90);    
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
   }
    
    break;
    
    
    
    case 1:

   for(pos = 115; pos < 125; pos += 1)  
  {                                   
    servo1.write(pos);            // Forward
  }
   break;
 
     
    
    case 2:

   for(pos = 115; pos < 125; pos += 1)   
  {                                
    servo2.write(pos);           // backward      
  }
   break;
 
   
 
 
 case 3:
   
 for(pos = 115; pos < 125; pos += 1)   
  {                                
              
  }
   break;
   
   
  case 4:

    for(pos = 115; pos < 125; pos += 1)   
  {                                
    servo1.write(pos);
    servo2.write(pos);          // left            
  }
   break;
  
  
  
   case 5:

   for(pos = 115; pos < 125; pos += 1)  
  {                                  
    servo2.write(pos);         // Clockwise      
  }
   break;
 
  
         
   case 6:

   for(pos = 115; pos < 125; pos += 1)  
  {                                 
    servo1.write(pos);        // Anti-clockwise  
  }
   break;
   
  
   
   case 7:

    for(pos = 60; pos > 50; pos -= 1)  
  {                                   
    servo3.write(pos);        // Up
    servo4.write(pos);               
  }
   break;
   
  
   
   case 8:

    for(pos = 115; pos < 125; pos += 1)  
  {                                 
    servo3.write(pos);        // Down  
    servo4.write(pos); 
  }
   break;
  
  
   
    case 9:

    for(pos = 60; pos > 50; pos -= 1)  
  {                                   
    servo3.write(pos);        // Tilt Right
    servo4.write(pos);               
  }
   break;
   
  
   
   case 10:

    for(pos = 115; pos < 125; pos += 1)  
  {                                 
    servo3.write(pos);        // Tilt Left  
    servo4.write(pos); 
  }
   break;
   
   case 11:
   
   for(pos = 60; pos > 50; pos -= 1)  
  {                                   
    servo3.write(pos);               // Pan Forward 
  }
  
   for(pos = 115; pos < 125; pos += 1)  
  {                                 
    servo4.write(pos); 
  }
   break;
  
  
   
   case 12:
                           
    for(pos = 60; pos > 50; pos -= 1)  
  {                                   
    servo4.write(pos);               // Pan Backward 
  }
  
   for(pos = 115; pos < 125; pos += 1)  
  {                                 
    servo3.write(pos); 
  }  
    break;
   
   
     
     case 13:
                           
    digitalWrite(relay1, HIGH);
    digitalWrite(relay2, LOW);
    digitalWrite(relay3, LOW);
    digitalWrite(relay4, LOW); 
    
    break;
    
    
     case 14:
                           
    digitalWrite(relay2, HIGH); 
    digitalWrite(relay1, LOW);
    digitalWrite(relay3, LOW);
    digitalWrite(relay4, LOW);
    
    break;
    
    
     
  }
   int incomingByte = 0;  
  }
