#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid = "it";
const char* password = "sbtvc2565";
const char* mqtt_server = "192.168.68.200";
const int mqtt_port = 1883;
const char* mqtt_Client = "ESP-32";
const char* mqtt_username = "pi";
const char* mqtt_password = "raspberry";

WiFiClient espClient;
PubSubClient client(espClient);
char msg[150];

void reconnect() {
while (!client.connected()) {
Serial.print("Attempting MQTT connection...");
if (client.connect(mqtt_Client, mqtt_username, mqtt_password)) {
Serial.println("connected");
client.subscribe("/test/lui/");
} else {
Serial.print("failed, rc=");
Serial.print(client.state());
Serial.println("try again in 5 seconds");
delay(5000);
}
}
}
void callback(char* topic, byte* payload, unsigned int length) {
Serial.print("Message arrived [");
Serial.print(topic);
Serial.print("] ");
String message;
for (int i = 0; i < length; i++) {
message = message + (char)payload[i];
}
Serial.println(message);
if(String(topic) == "/test/lui/") {
if(message == "hello"){
client.publish("/test/lui/111", "111");
Serial.println("111");
}
else if (message == "hi"){
client.publish("/test/lui/111", "222");
Serial.println("222");
}
}
}
void loop() {
if (!client.connected()) {
reconnect();
}
client.loop();

}
