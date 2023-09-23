static const char *background_color = "#000000";
static const char *border_color = "#000000";
static const char *font_color = "#eeeeee";
static const char *font_pattern = "JetBrainsMono NerdFont:size=11";
static const unsigned line_spacing = 5;
static const unsigned int padding = 20;

static const unsigned int width = 450;
static const unsigned int border_size = 1;
static const unsigned int pos_x = 30;
static const unsigned int pos_y = 60;

enum corners { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT };
enum corners corner = TOP_RIGHT;

static const unsigned int duration = 2; /* in seconds */

#define DISMISS_BUTTON Button1
#define ACTION_BUTTON Button3
