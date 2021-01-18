const int push_button = 6;
const int LED = 7;

void setup() {
pinMode(LED, OUTPUT);
pinMode(push_button, INPUT);
}
void loop() {
digitalWrite(LED,digitalRead(push_button));
}
