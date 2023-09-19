#define PIN_LED 7
int cnt,toggle=0;

void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  digitalWrite(7, toggle);
  delay(1000);
}

void loop() {
  while(cnt<11){
    toggle=toggle_state(toggle);
    digitalWrite(PIN_LED, toggle);
    delay(200);
    cnt++;
  }
  if(cnt==12){
    while(1){}
  }
  
}

int toggle_state(int toggle){
  if(toggle==0){
    toggle=1;
  }else if(toggle==1){
    toggle=0;
  }
  return toggle;
}
