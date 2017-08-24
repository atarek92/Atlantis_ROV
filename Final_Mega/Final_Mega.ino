
  #include <Servo.h> 
 
  int incomingByte = 0;
  
  int pos = 0; 
 
  Servo servo1;          // Horizontal Back
  Servo servo2;          // Horizontal Front
  Servo servo3;          // Vertical Front
  Servo servo4;          // Vertical Back  
 
  int relay1 = 46;
  int relay2 = 48;
  int relay3 = 50;
  int relay4 = 52;

  void setup() 
 
  {                 
  Serial1.begin(9600); 
  Serial3.begin(9600);

  servo1.attach(6);   
  servo2.attach(3);   
  servo3.attach(8);   
  servo4.attach(5);
  
  pinMode(relay1, OUTPUT);  
  pinMode(relay2, OUTPUT);  
  pinMode(relay3, OUTPUT);  
  pinMode(relay4, OUTPUT);  
  }

  void loop() 
   {
     if (Serial1.available() > 0) 
    {incomingByte = Serial1.read();}
    Serial3.write(incomingByte);
    switch (incomingByte) 
   {
  
    case 0:

   {
    servo1.write(90);    
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, LOW);
    digitalWrite(relay3, LOW);
    digitalWrite(relay4, LOW); 
   }
    
    break;
    
    
    
    case 1:

   for(pos = 115; pos < 125; pos += 1)  
  {                                   
    servo1.write(pos);               // Forward
  }
   break;
 
     
    
    case 2:

   for(pos = 115; pos < 125; pos += 1)   
  {                                
    servo2.write(pos);               // backward            
  }
   break;
 
   
 
 
 case 3:
     for(pos = 115; pos < 125; pos += 1)   
  {                                
    servo1.write(pos);
    servo2.write(pos);               // Right            
  }
   break;
 
   
   
  case 4:

  for(pos = 115; pos < 125; pos += 1)   
  {                                
            
  }
   break;
  
  
  
   case 5:

   for(pos = 115; pos < 125; pos += 1)  
  {                                  
    servo1.write(pos);              // Clockwise
  }
   break;
 
  
         
   case 6:

   for(pos = 115; pos < 125; pos += 1)  
  {                                 
    servo2.write(pos);            // Anti-clockwise  
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

     for(pos = 115; pos < 125; pos += 1)  
  {                                 
    servo3.write(pos);        // Tilt Right  
    servo4.write(pos); 
  }
   break;
   
  
   
   case 10:

   for(pos = 60; pos > 50; pos -= 1)  
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
    
         
    break;
    
    
     case 15:
                           
    digitalWrite(relay3, HIGH); 
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, LOW);
    digitalWrite(relay4, LOW);
    
    break;
    
    
     case 16:
                           
    digitalWrite(relay4, HIGH); 
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, LOW);
    digitalWrite(relay3, LOW);
    
    break;
   
  
   
  }
   int incomingByte = 0;  
  }
