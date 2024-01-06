int data;
// motor driver 1 RIGHT wheels
// motor 1 
#define in1 7
#define in2 6
// motor 2
#define in3 5
#define in4 4

// Motor driver 2 LEFT wheels
//motor 3
#define in5 12
#define in6 11
// Motor 4
#define in7 10
#define in8 9

void setup() {
  Serial.begin(9600);
  
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);

  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

  pinMode(in5,OUTPUT);
  pinMode(in6,OUTPUT);

  pinMode(in7,OUTPUT);
  pinMode(in8,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0)
  {
    data=Serial.read();
    if(data=='F')
    {  
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);

      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);

      digitalWrite(in5,HIGH);
      digitalWrite(in6,LOW);

      digitalWrite(in7,HIGH);
      digitalWrite(in8,LOW);
      }
    else if (data=='B') 
    {
      
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);

      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH);

      digitalWrite(in5,LOW);
      digitalWrite(in6,HIGH);

      digitalWrite(in7,LOW);
      digitalWrite(in8,HIGH);
      
      }
      else if (data=='L') 
    {
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);

      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);

      digitalWrite(in5,LOW);
      digitalWrite(in6,HIGH);

      digitalWrite(in7,LOW);
      digitalWrite(in8,HIGH);

      
      
      }
      else if (data=='R') 
    {
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);

      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);

      digitalWrite(in5,LOW);
      digitalWrite(in6,HIGH);

      digitalWrite(in7,LOW);
      digitalWrite(in8,HIGH);
     
      }
      else if (data=='S') 
    {
      
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);

      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);

      digitalWrite(in5,LOW);
      digitalWrite(in6,LOW);

      digitalWrite(in7,LOW);
      digitalWrite(in8,LOW);
      
      }

      
    // Serial.println(data);
  }
}
