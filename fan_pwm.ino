int sensorPin = A0;
int PWM = 3;
int sensorVal;
int PWMVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  pinMode(PWM, OUTPUT);
  Serial.begin(9600);

}

xxx
  //map and assign pwm values to the fan output 0 to 255 corresponds to 0 to 100%
  PWMVal = map(sensorVal, 450, 800, 26, 255);

  //set 450 as out cutout or cut in limit where the fan switches from off to the lower PWM limit
  if(sensorVal <450){
    PWMVal = 0;
  }

  //write the PWM value to the pwm output pin
  analogWrite(PWM, PWMVal);

}
