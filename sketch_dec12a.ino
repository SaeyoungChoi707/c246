#define LEDR 5 
#define LEDG 18
#define LEDB 19
#define R_channel 0
#define G_channel 1
#define B_channel 2
#define pwm_Frequency 5000
#define pwm_Resolution 8

void setup() {
  // put your setup code here, to run once:
  ledcAttachPin(LEDR,R_channel);
  ledcAttachPin(LEDG,G_channel);
  ledcAttachPin(LEDB,B_channel);
  ledcSetup(R_channel,pwm_Frequency,pwm_Resolution);
  ledcSetup(G_channel,pwm_Frequency,pwm_Resolution);
  ledcSetup(B_channel,pwm_Frequency,pwm_Resolution);
}

void loop() {
  // put your main code here, to run repeatedly:
  RGB_Color(255,0,0);
  delay(500);
  RGB_Color(0,255,0);
  delay(500);
  RGB_Color(0,0,255);
  delay(500);
  RGB_Color(0,255,255);
  delay(500);
  RGB_Color(255,255,0);
  delay(500);
  RGB_Color(255,0,255);
  delay(500);
  RGB_Color(255,20,147);
}

void RGB_Color(int i,int j,int k) {
  ledcWrite(R_channel,i);
  ledcWrite(G_channel,j);
  ledcWrite(B_channel,k);
}