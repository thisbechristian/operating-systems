typedef unsigned short color_t;

void clear_screen();
void exit_graphics();
void init_graphics();
char getkey();
void sleep_ms(long ms);

void draw_pixel(int x, int y, color_t color);
void draw_rect(int x1, int y1, int width, int height, color_t c);
void draw_circle(int x1, int y1, int r, color_t c);

int main(int argc, char** argv)
{
	int i;

	init_graphics();

	char key;
	int x = (640-100)/2;
	int y = (480-100)/2;

	do
	{
	
		//draw a black rectangle to erase the old one
		draw_rect(x, y, 20, 20, 0);
		draw_circle(x, y, 50, 0);
		key = getkey();
		if(key == 'w') y-=10;
		else if(key == 's') y+=10;
		else if(key == 'a') x-=10;
		else if(key == 'd') x+=10;
		//draw a blue rectangle
		draw_rect(x, y, 20, 20, 15);
		draw_circle(x, y, 50, 15);
		sleep_ms(20);
		clear_screen();

	} while(key != 'q');

	exit_graphics();

	return 0;

}
