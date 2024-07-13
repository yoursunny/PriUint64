# PriUint64.h for Arduino

[![GitHub Workflow status](https://img.shields.io/github/actions/workflow/status/yoursunny/PriUint64/build.yml?style=flat)](https://github.com/yoursunny/PriUint64/actions) [![GitHub code size](https://img.shields.io/github/languages/code-size/yoursunny/PriUint64?style=flat)](https://github.com/yoursunny/PriUint64)

This library allows printing `uint64_t` in Arduino.

```cpp
#include <PriUint64.h>

void
setup()
{
  Serial.begin();
  Serial.println();

  uint64_t x = 0x9aa567b200;
  Serial.println(PriUint64<HEX>(x));
}

void
loop()
{
}
```

## Streaming 6 Integration

This library can integrate with [Streaming 6](https://github.com/janelia-arduino/Streaming) library.
To enable this integration, `#include <Streaming.h>` before including this library.

```cpp
#include <Streaming.h>
#include <PriUint64.h>

void
setup()
{
  Serial.begin();
  Serial.println();

  uint64_t x = 0x9aa567b200;
  Serial << x << endl;
  Serial << _HEX(x) << endl;
}

void
loop()
{
}
```
