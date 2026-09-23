# Okapi_Library

[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.3766504.svg)](https://doi.org/10.5281/zenodo.3766504)

An Arduino-compatible library for utilizing the basic and logging features of the [Okapi](https://github.com/NorthernWidget-Skunkworks/Project-Okapi) data logger.

Data-logger management. Basic operations, power management, on-board sensing, and links to external devices. Manages logging, power, telemetry, and on-board sensing for the Okapi data logger. Supports solar charging, Particle Boron telemetry, external interrupt counting, RTC-driven sleep/wake cycles, and SD-card data logging.

**Installation:** included in [NorthernWidget-libraries](https://github.com/NorthernWidget/NorthernWidget-libraries).

```cpp
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
    Serial.println("begin() reported an error; check LED color for details.");
  }
}

void loop() {
  logger.Run(update, 60);
}
```

See [examples/](examples/) for this demo.

**Full API reference:** https://docs.northernwidget.com/Okapi_Library/
