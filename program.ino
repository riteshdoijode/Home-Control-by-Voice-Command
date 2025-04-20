/*
------------------------------------------------------------------------
                            ConfusedWalrus
------------------------------------------------------------------------
*/

String voice;
#define relay1 2    //Connect relay1 to pin 2
#define relay2 3    //Connect relay2 to pin 3
#define relay3 4    //Connect relay3 to pin 4
#define relay4 5    //Connect relay4 to pin 5
#define relay5 6    //Connect relay5 to pin 6
#define relay6 7    //Connect relay6 to pin 7
#define relay7 8    //Connect relay7 to pin 8
#define relay8 9    //Connect relay8 to pin 9
void setup()
{
  Serial.begin(9600);            //Set rate for communicating with phone
  pinMode(relay1, OUTPUT);       //Set relay1 as an output
  pinMode(relay2, OUTPUT);       //Set relay2 as an output
  pinMode(relay3, OUTPUT);       //Set relay3 as an output
  pinMode(relay4, OUTPUT);       //Set relay4 as an output
  pinMode(relay5, OUTPUT);       //Set relay5 as an output
  pinMode(relay6, OUTPUT);       //Set relay6 as an output
  pinMode(relay7, OUTPUT);       //Set relay7 as an output
  pinMode(relay8, OUTPUT);       //Set relay8 as an output
  digitalWrite(relay1, LOW);     //Switch relay1 off
  digitalWrite(relay2, LOW);     //Swtich relay2 off
  digitalWrite(relay3, LOW);     //Swtich relay3 off
  digitalWrite(relay4, LOW);     //Swtich relay4 off
  digitalWrite(relay5, LOW);     //Swtich relay5 off
  digitalWrite(relay6, LOW);     //Swtich relay6 off
  digitalWrite(relay7, LOW);     //Swtich relay7 off
  digitalWrite(relay8, LOW);     //Swtich relay8 off
}
void loop()
{
  while(Serial.available())    //Check if there are available bytes to read
  {
    delay(10);                 //Delay to make it stable
    char c = Serial.read();    //Conduct a serial read
    if (c == '#'){
      break;                   //Stop the loop once # is detected after a word
    }
    voice += c;                //Means voice = voice + c
  }
    if (voice.length() >0)
    {
      Serial.println(voice);
      if(voice == "*switch on"){
        switchon();
      }               //Initiate function switchon if voice is switch on
      else if(voice == "*switch off"){
        switchoff();
      }               //Initiate function switchoff if voice is switch off
      else if(voice == "*light off"){   
//You can replace 'lamp on' with anything you want...same applies to others
        digitalWrite(relay1, HIGH);
      }
      else if(voice == "*light on"){
        digitalWrite(relay1, LOW);
      }
      else if(voice == "*fan of"){
        digitalWrite(relay2, HIGH);
      }
      else if(voice == "*fan on"){
        digitalWrite(relay2, LOW);
      }
       else if(voice == "*make it dark"){
        digitalWrite(relay3, HIGH);
      }
      else if(voice == "*make it bright"){
        digitalWrite(relay3, LOW);
      }
      else if(voice == "*stop music"){
        digitalWrite(relay4, HIGH);
      }
      else if(voice == "*play music"){
        digitalWrite(relay4, LOW);
      }
      else if(voice == "*of terminal 5"){
        digitalWrite(relay5, HIGH);
      }
      else if(voice == "*on terminal 5"){
        digitalWrite(relay5, LOW);
      }
      else if(voice == "*of terminal 6"){
        digitalWrite(relay6, HIGH);
      }
      else if(voice == "*on terminal 6"){
        digitalWrite(relay6, LOW);
      }
      else if(voice == "*of terminal 7"){
        digitalWrite(relay7, HIGH);
      }
      else if(voice == "*on terminal 7"){
        digitalWrite(relay7, LOW);
      }
      else if(voice == "*of terminal 8"){
        digitalWrite(relay8, HIGH);
      }
      else if(voice == "*on terminal 8"){
        digitalWrite(relay8, LOW);
      }
      voice="";
    }
}
void switchon()               //Function for turning on relays
{
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  digitalWrite(relay5, HIGH);
  digitalWrite(relay6, HIGH);
  digitalWrite(relay7, HIGH);
  digitalWrite(relay8, HIGH);
}
void switchoff()              //Function for turning on relays
{
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);
  digitalWrite(relay5, LOW);
  digitalWrite(relay6, LOW);
  digitalWrite(relay7, LOW);
  digitalWrite(relay8, LOW);
}

/*

You can add any function you want depending on how many devices you have hooked up.
For example you could have a function called 'cinema' which would dim the lights and
turn the TV on. You can have as many as you have pins on your arduino.
For my relay 'LOW' turns off and 'HIGH' turns on
The outline to follow is this:
   
   void ......()
   {
     digitalWrite(...., LOW/HIGH);
     digitalWrite(...., LOW/HIGH);
   }
   
*/
