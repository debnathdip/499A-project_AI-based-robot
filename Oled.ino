void draw(void) {
  u8g.setFont(u8g_font_profont12);
  u8g.setPrintPos(0, 10);
  u8g.print("This is the 1.3\"");
  u8g.setPrintPos(0, 25);
  u8g.print("White i2c OLED from");
  u8g.setPrintPos(0, 40);
  u8g.print("ICStation.com.");
}

void draw2(void) {
  u8g.setFont(u8g_font_profont12);
  u8g.setPrintPos(0, 10);
  u8g.print("Check out the project");
  u8g.setPrintPos(0, 25);
  u8g.print("and review on");
  u8g.setPrintPos(0, 40);
  u8g.setFont(u8g_font_profont10);
  u8g.print("electorials.weebly.com.");
}
