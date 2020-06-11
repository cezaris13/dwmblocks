//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"","$HOME/.config/dwm/autostart/./lock_keys.sh",2,13},
    {"","$HOME/.config/dwm/autostart/./layout.sh",0,12},
    {" ","$HOME/.config/dwm/autostart/./volume.sh",0,10},
    {" ","$HOME/.config/dwm/autostart/./net.sh",5,4},
    {"", "$HOME/.config/dwm/autostart/./battery_status.sh",5,3},
    {" ","$HOME/.config/dwm/autostart/./date.sh",1,21},
};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "|";
