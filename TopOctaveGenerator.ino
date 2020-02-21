// Top Octave Generator (Teensy 4.0)

void setup() {
  analogWriteFrequency(2, 4186.01);
  analogWriteFrequency(4, 4434.92);
  analogWriteFrequency(5, 4698.64);
  analogWriteFrequency(6, 4978.03);
  analogWriteFrequency(7, 5274.04);
  analogWriteFrequency(10, 5587.65);
  analogWriteFrequency(11, 5919.91);
  analogWriteFrequency(12, 6271.93);
  analogWriteFrequency(13, 6644.88);
  analogWriteFrequency(14, 7040.00);
  analogWriteFrequency(15, 7458.62);
  analogWriteFrequency(18, 7902.13);
  analogWrite(2, 128);
  analogWrite(4, 128);
  analogWrite(5, 128);
  analogWrite(6, 128);
  analogWrite(7, 128);
  analogWrite(10, 128);
  analogWrite(11, 128);
  analogWrite(12, 128);
  analogWrite(13, 128);
  analogWrite(14, 128);
  analogWrite(15, 128);
  analogWrite(18, 128);
  
  // Also generate 6 more frequencies, just to
  // show that more than 12 are possible...
  analogWriteFrequency(19, 1200);
  analogWriteFrequency(22, 1300);
  analogWriteFrequency(28, 1400); // bottom side
  analogWriteFrequency(34, 1500); // bottom side
  analogWriteFrequency(36, 1600); // bottom side
  analogWriteFrequency(38, 1700); // bottom side
  analogWrite(19, 128);
  analogWrite(22, 128);
  analogWrite(28, 128);
  analogWrite(34, 128);
  analogWrite(36, 128);
  analogWrite(38, 128);
}

void loop() {
  asm("wfi"); // optional, put CPU to sleep
}
