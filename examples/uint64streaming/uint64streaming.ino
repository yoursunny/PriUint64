/**
 * @file
 *
 * PriUint64.h can integrate with Streaming 6 library.
 * Streaming is available at: https://github.com/janelia-arduino/Streaming
 * To enable integration, include Streaming.h before PriUint64.h.
 */

#include <Streaming.h>

#include <PriUint64.h>

void
demo(uint64_t x) {
  Serial << x << endl;
  Serial << _HEX(x) << endl;
  Serial << _DEC(x) << endl;
  Serial << _OCT(x) << endl;
  Serial << _BIN(x) << endl;
  Serial << _WIDTH(x, 24) << endl;
  Serial << _WIDTHZ(x, 24) << endl;
  Serial << _WIDTH(_HEX(x), 24) << endl;
  Serial << _WIDTHZ(_HEX(x), 24) << endl;
  Serial << _FMT("%/%/%/%", x, _HEX(x), _WIDTHZ(x, 24), _WIDTHZ(_HEX(x), 24)) << endl;
  Serial.println();
}

void
setup() {
  Serial.begin(115200);
  Serial.println();

  demo(0x0);
  demo(0x10000);
  demo(0x9aa567b200);
  demo(0xffffffffffffffff);

  // Streaming of non-uint64 types still works.
  Serial << _HEX(31) << endl;
  Serial << _DEC(31) << endl;
  Serial << _OCT(31) << endl;
  Serial << _BIN(31) << endl;
  Serial << endl;
}

void
loop() {}
