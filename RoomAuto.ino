#include<SoftwareSerial.h>

	int Fan = 8;
	int Light = 9;
	int Computer = 10;
	int Music = 11;

SoftwareSerial bt(0,1); /* (Rx,Tx) */

/*str variable for storing input from controling devics like:mobile*/
	String str; 

void setup() {
	/*setting the baud */
	bt.begin(9600);
	Serial.begin(9600);

pinMode(Fan,OUTPUT);
pinMode(Light,OUTPUT);
pinMode(Computer,OUTPUT);
pinMode(Music,OUTPUT);

}

void loop() 
{

	if (bt.available())
 {
	str = bt.read();
	Serial.println(str);
//Fan
	if(str==”Fan on”)
	{
	  digitalWrite(Fan,HIGH);
	  Serial.println(“Fan ON”);	
	}
	else if(str=="Fan off”)
	{
	  digitalWrite(Fan,LOW);
	  Serial.println(“Fan OFF”);	
	}
	else
	{
	  digitalWrite(Fan,LOW);
	}
//Light
	if(str==”Light on”)
	{
	  digitalWrite(Light,HIGH);
	  Serial.println(“Light ON”);
	}
	else if(str==”Light off”)
	{
	  digitalWrite(Light,LOW);
	  Serial.println(“Light OFF”);
	}
	else
	{
	  digitalWrite(Light,LOW);
	}
//Computer
	if(str==”Computer on”)	
	{
	  digitalWrite(Computer,HIGH);
	  Serial.println(“Computer ON”);	
	}
	else if(str==”Computer off”)
	{
	  digitalWrite(Computer,LOW);
	  Serial.println(“Computer is OFF”);	
	}
	else
	{
	  digitalWrite(Computer,LOW);
	}
//Music
	if(str==”Music on”)
	{
	  digitalWrite(Music,HIGH);
	  Serial.println(“Music ON”);
	}
	else if(str==”Music off”)
	{
	  digitalWrite(Music,LOW);
	  Serial.println(“Music OFF”);
	}
	else
	{
	  digitalWrite(Music,LOW);
	}
 }
}
