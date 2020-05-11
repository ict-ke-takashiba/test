void setup() {
    Serial.begin(115200);
}

void loop() {
    static unsigned long counter = 0;

    Serial.print("Hello World: ");
    Serial.println(counter++);
    delay(1000);
    delay(200);
}