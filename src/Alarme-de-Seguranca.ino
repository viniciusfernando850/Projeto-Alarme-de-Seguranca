const int BUTTON = 3;
const int BUZZER = 2;
const int PINO_LDR = A0;
int leituraLDR = 0;
int leituraBotao;

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(PINO_LDR, INPUT);
  pinMode(BUTTON, INPUT_PULLUP);

}

void loop() {
  leituraLDR = analogRead(PINO_LDR);
  leituraBotao = digitalRead(BUTTON);

  if (leituraLDR <= 512)
    tone(BUZZER, 1000);
  else if (leituraBotao == LOW)
    noTone(BUZZER);

}
