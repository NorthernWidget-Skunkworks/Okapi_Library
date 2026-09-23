# Okapi_Library

Library for the Okapi ATmega1284p data logger (I²C controller).

## Standards

Follow the NW library standards for all work here. Two sources:
- **Within the NorthernWidget workspace:** the root `CLAUDE.md` (one level above `github/`) has the full checklist and code conventions.
- **Fresh clone / other location:** fetch [NorthernWidget/.github/RELEASING.md](https://github.com/NorthernWidget/.github/blob/main/RELEASING.md) for the release checklist and [NorthernWidget/.github/CONTRIBUTING.md](https://github.com/NorthernWidget/.github/blob/main/CONTRIBUTING.md) for naming and versioning conventions.

Okapi is a **controller** (I²C controller), not a sensor. It calls `Wire.begin()` with no address. Since 2026-09-23 it inherits `NW_Logger` (the core it shares with Margay: card layout, data and status files, run loop, interrupts, self-tests, LED, Page 0 identity) and is a Schema 1 device like Margay: Pages 0 from EEPROM, Pages 2 and 3 its reading of itself per the spec's Okapi appendix (hypothetical; Block 1 power stays zero until the power model is decided). Okapi keeps its rails, ADCs, DAC, port expander and backhaul. Names are camelCase; the PascalCase names are deprecated forwarders, never to be re-added once removed.

## Hard rule

**Never** create a git tag, GitHub release, push to a shared remote, or submit to any external registry (Zenodo, Arduino Library Manager, etc.) unless explicitly asked in the current message. If in doubt, ask.
