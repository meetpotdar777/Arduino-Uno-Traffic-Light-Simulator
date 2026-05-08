// Traffic Light Controller
// Red → Green → Yellow → Red cycle, 2 seconds per phase.
//
// Pin assignments:
//   D13 — Red LED    (via 220 Ω resistor)
//   D12 — Yellow LED (via 220 Ω resistor)
//   D11 — Green LED  (via 220 Ω resistor)

static const uint8_t PIN_RED    = 13;
static const uint8_t PIN_YELLOW = 12;
static const uint8_t PIN_GREEN  = 11;

static const uint32_t PHASE_MS  = 2000UL;   // 2 seconds per color

// Helper — turn all LEDs off then light only the requested pin.
static void showOnly(uint8_t pin) {
    digitalWrite(PIN_RED,    LOW);
    digitalWrite(PIN_YELLOW, LOW);
    digitalWrite(PIN_GREEN,  LOW);
    digitalWrite(pin, HIGH);
}

void setup() {
    pinMode(PIN_RED,    OUTPUT);
    pinMode(PIN_YELLOW, OUTPUT);
    pinMode(PIN_GREEN,  OUTPUT);

    Serial.begin(115200);
    Serial.println(F("Traffic light starting..."));

    // Start with red.
    showOnly(PIN_RED);
}

void loop() {
    // --- RED ---
    showOnly(PIN_RED);
    Serial.println(F("RED"));
    delay(PHASE_MS);

    // --- GREEN ---
    showOnly(PIN_GREEN);
    Serial.println(F("GREEN"));
    delay(PHASE_MS);

    // --- YELLOW ---
    showOnly(PIN_YELLOW);
    Serial.println(F("YELLOW"));
    delay(PHASE_MS);
}
