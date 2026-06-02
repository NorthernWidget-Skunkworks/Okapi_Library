/**
 * Okapi_Demo
 *
 * Minimal demonstration sketch for the Okapi data logger library.
 * Initializes the logger, then logs on-board sensor data (RTC,
 * temperature, pressure, voltages) plus any string returned by
 * the update() function, at a 60-second interval.
 *
 * Replace the body of update() with calls to your external sensors.
 */

#include <Okapi.h>

Okapi logger;

String update() {
  // Return a comma-separated string of external sensor readings.
  // Example: return myExternalSensor.getString();
  return "";
}

void setup() {
  Serial.begin(38400);
  if (!logger.begin("ExternalData,")) {
    Serial.println("begin() reported an error — check LED color for details.");
  }
}

void loop() {
  logger.Run(update, 60);
}
