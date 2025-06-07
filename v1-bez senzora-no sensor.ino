#define BUZZER_PIN 3 // PWM pin D3

// tonovi za daleko, blizu i preblizu
#define tone_daleko 600
#define tone_blizu tone_daleko + 100
#define tone_preblizu tone_blizu + 100

// delay-evi za daleko, blizu
#define delay_daleko 250
#define delay_blizu 100

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}
void daleko(){
  tone(BUZZER_PIN, tone_daleko);
  delay(delay_daleko);
  noTone(BUZZER_PIN);
  delay(delay_daleko);
}
void blizu(){
  tone(BUZZER_PIN, tone_blizu);
  delay(delay_blizu);
  noTone(BUZZER_PIN);
  delay(delay_blizu);
}
void preblizu(){
  tone(BUZZER_PIN, tone_preblizu);
  delay(500);
}
//TEST
void test(void funkcija()){
  int i = 0; 
  for(i = 0; i < 5; i++)
    funkcija();
  delay(delay_daleko);
}

void loop() {
  test(daleko);
  test(blizu);
  preblizu();
}
