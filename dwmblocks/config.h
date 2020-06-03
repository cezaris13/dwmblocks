//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
// 	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
// 	/* {"",	"music",	0,	11},*/
// 	{"",	"/home/pijus/Downloads/configs/dwmblocks/dwmblocks-master-luke/./pacpackages",	0,	8},
// 	{"",	"./news",		0,	6},
// 	/* {"",	"crypto",	0,	13}, */
// 	/* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, */
// 	/* {"",	"price btc Bitcoin 💰",				0,	21}, */
// 	/* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, */
// 	{"",	"torrent",	20,	7},
// 	/* {"",	"memory",	10,	14}, */
// 	/* {"",	"cpu",		10,	18}, */
// 	/* {"",	"moonphase",	18000,	17}, */
// 	{"",	"/home/pijus/Downloads/configs/dwmblocks/dwmblocks-master-luke/./weather",	18000,	5},
// 	{"",	"mailbox",	180,	12},
// 	/* {"",	"nettraf",	1,	16}, */
// 	{"",	"/home/pijus/Downloads/configs/dwmblocks/dwmblocks-master-luke/./volume",	0,	10},
// 	{"",	"/home/pijus/Downloads/configs/dwmblocks/dwmblocks-master-luke/./battery",	5,	3},
// 	{"",	"/home/pijus/Downloads/configs/dwmblocks/dwmblocks-master-luke/./clock",	60,	1},
// 	{"",	"/home/pijus/Downloads/configs/dwmblocks/dwmblocks-master-luke/./internet",	5,	4},
//     {"","/home/pijus/.config/dwm/autostart/./caps.sh",2,11},
//     {"","/home/pijus/.config/dwm/autostart/./num.sh",2,13},
        {"","/home/pijus/.config/dwm/autostart/./lock_keys.sh",2,13},
    {"","/home/pijus/.config/dwm/autostart/./layout.sh",0,12},
    {" ","/home/pijus/.config/dwm/autostart/./volume.sh",0,10},
    {"", "/home/pijus/.config/dwm/autostart/./battery_status.sh",5,3},
    {" ","/home/pijus/.config/dwm/autostart/./date.sh",1,21},
// 	{"",	"./help-icon",	0,	15},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "|";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
