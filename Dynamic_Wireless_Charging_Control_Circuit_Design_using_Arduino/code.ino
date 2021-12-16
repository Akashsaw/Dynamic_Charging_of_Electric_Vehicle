const int pwm = 9 ;	  
const int adc = 0 ; 	
void setup()
{
     pinMode(pwm,OUTPUT) ; 	
}
void loop()
{
     int adc  = analogRead(0) ; 	 //reading analog voltage and storing it in an integer 
     adc = map(adc, 0, 1023, 0, 255);  
/*
----------map funtion------------the above funtion scales the output of adc, which is 10 bit and gives values btw 0 to 1023, in values btw 0 to 255 form analogWrite funtion which only receives  values btw this range
*/
  if(adc > 0){
  digitalWrite(pwm, HIGH);
  }
     else
       digitalWrite(pwm, LOW);
}
