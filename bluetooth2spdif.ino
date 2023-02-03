#include "BluetoothA2DPSink.h"
#include "SPDIFOut.h"

BluetoothA2DPSink a2dp_sink;
SPDIFOut *sPDIFOut;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting.");
  sPDIFOut = new SPDIFOut();
  a2dp_sink.start("MyMusic2",sPDIFOut);  
  Serial.println("Started BT MyMusic2");
}

void loop() {
}