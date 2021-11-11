/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

/* number of colours */

static const char *colorname[NUMCOLS] = {
	[INIT]   = "#000000",   /* after initialization */
	[INPUT]  = "#282c34",   /* during input */
	[FAILED] = "#be5046",   /* wrong password */
  [CAPS]   = "#f4ff44",   /* caps input */
};

/* text color */
static const char * text_color = "#ffffff";

/* lock screen opacity */
static const float alpha = 0.44;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Love heals everything.";

/* text size (must be a valid size) */
static const char * font_name = "Noto Sans CHK JP:style=Regular";

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;

/* time in seconds before the monitor shuts down */
static const int monitortime = 15;

/* Xresources preferences to load at startup */
ResourcePref resources[] = {
  { "color0",       STRING,  &colorname[INIT] },
  { "color4",       STRING,  &colorname[INPUT] },
  { "color1",       STRING,  &colorname[FAILED] },
  { "color3",       STRING,  &colorname[CAPS] },
};
