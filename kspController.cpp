#include <KerbalSimpit.h>

KerbalSimpit mySimpit(Serial);





void setup() {
    Serial.begin(115200);
    while (!mySimpit.init());

    mySimpit.inboundHandler(myCallbackHandler);

}

void loop() {
  mySimpit.update();
}

void myCallbackHandler(byte messageType, byte message[], byte messageSize) {
  switch(messageType) {
  case MESSAGE_TYPE_1:
    // Handle the first type of message.
    break;
  case MESSAGE_TYPE_2:
    // Handle the second type of message.
    break;
  }
}