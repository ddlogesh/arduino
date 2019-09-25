#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

ESP8266WebServer server(80);

int led = 2;

void setup()
{
  delay(1000);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

  //password must be min 8chars
  setOwnAP("quentinos","logesh555");
  //connectToAP("quentinos","logesh555");
  
  server.on("/on", turnOnLED);
  server.on("/off", turnOffLED);
  server.on("/", handleRoot);
  server.begin();
  delay(1000);
  Serial.println("Server started!");
}

void loop()
{
  server.handleClient();
  delay(1);
}

void setOwnAP(const char* ssid, const char* password)
{
  Serial.printf("Creating softAP %s ", ssid);
  WiFi.softAP(ssid, password);
  delay(1000);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("Connected to AP!! IP Address = ");
  Serial.println(myIP);
}

void connectToAP(const char* ssid, const char* password)
{
  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" connected");
  Serial.print("AP created!! IP Address = ");
  Serial.println(WiFi.localIP());
}

void turnOnLED()
{
  digitalWrite(led, HIGH);
  server.sendContent("<h1>Turned On LED</h1>");
}

void turnOffLED()
{
  digitalWrite(led, LOW);
  server.sendContent("<h1>Turned Off LED</h1>");
}

void handleRoot()
{
  server.sendContent("<html><script>");
  server.sendContent("function askToTurnOnLED(turnOn){");
  server.sendContent("var xhttp = new XMLHttpRequest();");
  server.sendContent("xhttp.open(\"GET\", turnOn?\"on\":\"off\", true);");
  server.sendContent("xhttp.send();}");
  server.sendContent("</script><body><h1 style=\"text-align: center;\">HomeAutomation - Workshop demo</h1>");
  server.sendContent("<button onclick=\"askToTurnOnLED(true)\" style=\"display:block;padding:20px;font-size:150%;margin:100px\"> Turn On Light </button>");
  server.sendContent("<button onclick=\"askToTurnOnLED(false)\" style=\"display:block;padding:20px;font-size:150%;margin:100px\"> Turn Off Light</button>");
  server.sendContent("</body></html>");
}

