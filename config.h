//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"","$HOME/.config/dwm/autostart/./bar.sh lock_keys",2,13},
    {"","$HOME/.config/dwm/autostart/./bar.sh layout",0,12},
    {" ","$HOME/.config/dwm/autostart/./bar.sh vol",0,10},
    {" ","$HOME/.config/dwm/autostart/./bar.sh net",5,4},
    {"", "$HOME/.config/dwm/autostart/./bar.sh bat",5,3},
    {" ","$HOME/.config/dwm/autostart/./bar.sh date",1,21},
};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "|";
