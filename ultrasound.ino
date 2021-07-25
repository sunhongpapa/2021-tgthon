int trigPin = 13; 
int echoPin = 12; 
 
void setup(){
  Serial.begin(9600);             
  pinMode(echoPin, INPUT);     
  pinMode(trigPin, OUTPUT);  
}
 
void loop(){
 
  long duration, distance; 
  digitalWrite(trigPin, HIGH);          
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); 
  duration = pulseIn(echoPin, HIGH);    
  distance = ((float)(340 * duration) / 1000) / 2; 

  Serial.print("DIstance:");         
  Serial.print(distance);
  Serial.println("mm\n");
 
  delay(500); 
 
}     
