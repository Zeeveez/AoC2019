#ifndef INPUTS_H
#define INPUTS_H

#include <vector>
#include <tuple>
#include <string>
#include <map>
#include "Helpers/Parser.h"

std::vector<int> AoC_1_Input = Parser::LoadIntLines(1);

long long AoC_2_A_Input_Noun = 12;
long long AoC_2_A_Input_Verb = 2;
long long AoC_2_B_Input_Solution = 19690720;
std::vector<long long> AoC_2_Input = Parser::LoadCSV(2);

std::vector<std::pair<char, int>> AoC_3_Input_A = {
    {'R',1009},	{'U',263},	{'L',517},	{'U',449},	{'L',805},	{'D',78},	{'L',798},	{'D',883},
    {'L',777},	{'D',562},	{'R',652},	{'D',348},	{'R',999},	{'D',767},	{'L',959},	{'U',493},
    {'R',59},	{'D',994},	{'L',225},	{'D',226},	{'R',634},	{'D',200},	{'R',953},	{'U',343},
    {'L',388},	{'U',158},	{'R',943},	{'U',544},	{'L',809},	{'D',785},	{'R',618},	{'U',499},
    {'L',476},	{'U',600},	{'L',452},	{'D',693},	{'L',696},	{'U',764},	{'L',927},	{'D',346},
    {'L',863},	{'D',458},	{'L',789},	{'U',268},	{'R',586},	{'U',884},	{'L',658},	{'D',371},
    {'L',910},	{'U',178},	{'R',524},	{'U',169},	{'R',973},	{'D',326},	{'R',483},	{'U',233},
    {'R',26},	{'U',807},	{'L',246},	{'D',711},	{'L',641},	{'D',75},	{'R',756},	{'U',365},
    {'R',203},	{'D',377},	{'R',624},	{'U',430},	{'L',422},	{'U',367},	{'R',547},	{'U',294},
    {'L',916},	{'D',757},	{'R',509},	{'D',332},	{'R',106},	{'D',401},	{'L',181},	{'U',5},
    {'L',443},	{'U',197},	{'R',406},	{'D',829},	{'R',878},	{'U',35},	{'L',958},	{'U',31},
    {'L',28},	{'D',362},	{'R',188},	{'D',582},	{'R',358},	{'U',750},	{'R',939},	{'D',491},
    {'R',929},	{'D',513},	{'L',541},	{'U',418},	{'R',861},	{'D',639},	{'L',917},	{'U',582},
    {'R',211},	{'U',725},	{'R',711},	{'D',718},	{'L',673},	{'U',921},	{'L',157},	{'U',83},
    {'L',199},	{'U',501},	{'L',66},	{'D',993},	{'L',599},	{'D',947},	{'L',26},	{'U',237},
    {'L',981},	{'U',833},	{'L',121},	{'U',25},	{'R',641},	{'D',372},	{'L',757},	{'D',645},
    {'R',287},	{'U',390},	{'R',274},	{'U',964},	{'R',288},	{'D',209},	{'R',109},	{'D',364},
    {'R',983},	{'U',715},	{'L',315},	{'U',758},	{'R',36},	{'D',500},	{'R',626},	{'U',893},
    {'L',840},	{'U',716},	{'L',606},	{'U',831},	{'L',969},	{'D',643},	{'L',300},	{'D',838},
    {'R',31},	{'D',751},	{'L',632},	{'D',702},	{'R',468},	{'D',7},	{'L',169},	{'U',149},
    {'R',893},	{'D',33},	{'R',816},	{'D',558},	{'R',152},	{'U',489},	{'L',237},	{'U',415},
    {'R',434},	{'D',472},	{'L',198},	{'D',874},	{'L',351},	{'U',148},	{'R',761},	{'U',809},
    {'R',21},	{'D',25},	{'R',586},	{'D',338},	{'L',568},	{'U',20},	{'L',157},	{'U',221},
    {'L',26},	{'U',424},	{'R',261},	{'D',227},	{'L',551},	{'D',754},	{'L',90},	{'U',110},
    {'L',791},	{'U',433},	{'R',840},	{'U',323},	{'R',240},	{'U',124},	{'L',723},	{'D',418},
    {'R',938},	{'D',173},	{'L',160},	{'U',293},	{'R',773},	{'U',204},	{'R',192},	{'U',958},
    {'L',472},	{'D',703},	{'R',556},	{'D',168},	{'L',263},	{'U',574},	{'L',845},	{'D',932},
    {'R',165},	{'D',348},	{'R',811},	{'D',834},	{'R',960},	{'U',877},	{'R',935},	{'D',141},
    {'R',696},	{'U',748},	{'L',316},	{'U',236},	{'L',796},	{'D',566},	{'R',524},	{'U',449},
    {'R',378},	{'U',480},	{'L',79},	{'U',227},	{'R',867},	{'D',185},	{'R',474},	{'D',757},
    {'R',366},	{'U',153},	{'R',882},	{'U',252},	{'R',861},	{'U',900},	{'R',28},	{'U',381},
    {'L',845},	{'U',642},	{'L',849},	{'U',352},	{'R',134},	{'D',294},	{'R',788},	{'D',406},
    {'L',693},	{'D',697},	{'L',433},	{'D',872},	{'R',78},	{'D',364},	{'R',240},	{'U',995},
    {'R',48},	{'D',681},	{'R',727},	{'D',825},	{'L',583},	{'U',44},	{'R',743},	{'D',929},
    {'L',616},	{'D',262},	{'R',997},	{'D',15},	{'R',575},	{'U',341},	{'R',595},	{'U',889},
    {'R',254},	{'U',76},	{'R',962},	{'D',944},	{'R',724},	{'D',261},	{'R',608},	{'U',753},
    {'L',389},	{'D',324},	{'L',569},	{'U',308},	{'L',488},	{'D',358},	{'L',695},	{'D',863},
    {'L',712},	{'D',978},	{'R',149},	{'D',177},	{'R',92}
};

std::vector<std::pair<char, int>> AoC_3_Input_B = {
    {'L',1003},	{'D',960},	{'L',10},	{'D',57},	{'R',294},	{'U',538},	{'R',867},	{'D',426},
    {'L',524},	{'D',441},	{'R',775},	{'U',308},	{'R',577},	{'D',785},	{'R',495},	{'U',847},
    {'R',643},	{'D',895},	{'R',448},	{'U',685},	{'L',253},	{'U',312},	{'L',312},	{'U',753},
    {'L',89},	{'U',276},	{'R',799},	{'D',923},	{'L',33},	{'U',595},	{'R',400},	{'U',111},
    {'L',664},	{'D',542},	{'R',171},	{'U',709},	{'L',809},	{'D',713},	{'L',483},	{'U',918},
    {'L',14},	{'U',854},	{'L',150},	{'D',69},	{'L',158},	{'D',500},	{'L',91},	{'D',800},
    {'R',431},	{'D',851},	{'L',798},	{'U',515},	{'L',107},	{'U',413},	{'L',94},	{'U',390},
    {'L',17},	{'U',221},	{'L',999},	{'D',546},	{'L',191},	{'U',472},	{'L',568},	{'U',114},
    {'L',913},	{'D',743},	{'L',713},	{'D',215},	{'L',569},	{'D',674},	{'L',869},	{'U',549},
    {'L',789},	{'U',259},	{'L',330},	{'D',76},	{'R',243},	{'D',592},	{'L',646},	{'U',880},
    {'L',363},	{'U',542},	{'L',464},	{'D',955},	{'L',107},	{'U',473},	{'R',818},	{'D',786},
    {'R',852},	{'U',968},	{'R',526},	{'D',78},	{'L',275},	{'U',891},	{'R',480},	{'U',991},
    {'L',981},	{'D',391},	{'R',83},	{'U',691},	{'R',689},	{'D',230},	{'L',217},	{'D',458},
    {'R',10},	{'U',736},	{'L',317},	{'D',145},	{'R',902},	{'D',428},	{'R',344},	{'U',334},
    {'R',131},	{'D',739},	{'R',438},	{'D',376},	{'L',652},	{'U',304},	{'L',332},	{'D',452},
    {'R',241},	{'D',783},	{'R',82},	{'D',317},	{'R',796},	{'U',323},	{'R',287},	{'D',487},
    {'L',302},	{'D',110},	{'R',233},	{'U',631},	{'R',584},	{'U',973},	{'L',878},	{'D',834},
    {'L',930},	{'U',472},	{'R',120},	{'U',78},	{'R',806},	{'D',21},	{'L',521},	{'U',988},
    {'R',251},	{'D',817},	{'R',44},	{'D',789},	{'R',204},	{'D',669},	{'R',616},	{'D',96},
    {'R',624},	{'D',891},	{'L',532},	{'U',154},	{'R',438},	{'U',469},	{'R',785},	{'D',431},
    {'R',945},	{'U',649},	{'R',670},	{'D',11},	{'R',840},	{'D',521},	{'L',235},	{'D',69},
    {'L',551},	{'D',266},	{'L',454},	{'U',807},	{'L',885},	{'U',590},	{'L',647},	{'U',763},
    {'R',449},	{'U',194},	{'R',68},	{'U',809},	{'L',884},	{'U',962},	{'L',476},	{'D',648},
    {'L',139},	{'U',96},	{'L',300},	{'U',351},	{'L',456},	{'D',202},	{'R',168},	{'D',698},
    {'R',161},	{'U',834},	{'L',273},	{'U',47},	{'L',8},	{'D',157},	{'L',893},	{'D',200},
    {'L',454},	{'U',723},	{'R',886},	{'U',92},	{'R',474},	{'U',262},	{'L',190},	{'U',110},
    {'L',407},	{'D',723},	{'R',786},	{'D',786},	{'L',572},	{'D',915},	{'L',904},	{'U',744},
    {'L',820},	{'D',663},	{'R',205},	{'U',878},	{'R',186},	{'U',247},	{'L',616},	{'D',386},
    {'R',582},	{'U',688},	{'L',349},	{'D',399},	{'R',702},	{'U',132},	{'L',276},	{'U',866},
    {'R',851},	{'D',633},	{'R',468},	{'D',263},	{'R',678},	{'D',96},	{'L',50},	{'U',946},
    {'R',349},	{'D',482},	{'R',487},	{'U',525},	{'R',464},	{'U',977},	{'L',499},	{'D',187},
    {'R',546},	{'U',708},	{'L',627},	{'D',470},	{'R',673},	{'D',886},	{'L',375},	{'U',616},
    {'L',503},	{'U',38},	{'L',775},	{'D',8},	{'L',982},	{'D',556},	{'R',159},	{'U',680},
    {'L',124},	{'U',777},	{'L',640},	{'D',607},	{'R',248},	{'D',671},	{'L',65},	{'D',290},
    {'R',445},	{'U',778},	{'L',650},	{'U',679},	{'L',846},	{'D',1},	{'L',769},	{'U',659},
    {'R',734},	{'D',962},	{'R',588},	{'U',178},	{'R',888},	{'D',753},	{'R',223},	{'U',318},
    {'L',695},	{'D',586},	{'R',430},	{'D',61},	{'R',105},	{'U',801},	{'R',953},	{'U',721},
    {'L',856},	{'U',769},	{'R',937},	{'D',335},	{'R',895}
};

int AoC_4_Input_A = 387638;
int AoC_4_Input_B = 919123;

long long AoC_5_Input_A = 1;
long long AoC_5_Input_B = 5;
std::vector<long long> AoC_5_Input = Parser::LoadCSV(5);

std::vector<std::tuple<std::string, std::string>> AoC_6_Input = {
    {"J1C","J1M"},	{"N2W","2DM"},	{"DST","VZL"},	{"555","45Q"},	{"S4C","DGK"},	{"H51","JLX"},	{"K4L","3F5"},	{"L58","T9K"},	{"GBC","NZT"},	{"L7B","CQB"},	{"L7L","R63"},	{"4LQ","KHZ"},	{"XWW","L61"},	{"R6W","DVN"},	{"91C","GPM"},	{"YWZ","51W"},
    {"XK8","22K"},	{"NV2","DTP"},	{"5LQ","F4V"},	{"4H9","R4B"},	{"29X","R9H"},	{"1G5","W91"},	{"TZL","S4C"},	{"1Z7","1MY"},	{"N7V","1Z4"},	{"7YX","LQ9"},	{"PK9","D1Y"},	{"QVK","K1H"},	{"4FT","3X5"},	{"5M5","29X"},	{"5XH","H5K"},	{"LGK","V51"},
    {"HMN","LNG"},	{"5QX","KHJ"},	{"797","TJR"},	{"SRV","4RT"},	{"1R4","MSZ"},	{"3SJ","XRT"},	{"X6N","J1N"},	{"WM8","LH2"},	{"KGZ","5ZP"},	{"ZY5","9GY"},	{"H5K","2LX"},	{"4QD","1ND"},	{"JDK","WRX"},	{"KSR","4LD"},	{"8Q3","W8B"},	{"51W","QZT"},
    {"HSQ","CV5"},	{"35F","VW2"},	{"8Q9","845"},	{"8FS","XB4"},	{"WFX","N2F"},	{"BDG","G3G"},	{"Q7S","K1X"},	{"1MY","PCB"},	{"FRW","TZL"},	{"N78","Z9K"},	{"J4F","98D"},	{"4J2","6S3"},	{"9QY","1HG"},	{"RRX","SW4"},	{"DH7","CLW"},	{"M8W","4QD"},
    {"9K9","1NV"},	{"KHW","T14"},	{"DQC","ZCG"},	{"R4H","MPG"},	{"FY9","HXB"},	{"7SF","J1C"},	{"SPT","P66"},	{"BB6","XZR"},	{"7MR","MDH"},	{"M4G","DBH"},	{"7RP","BHH"},	{"2H8","QKS"},	{"RL2","8ZM"},	{"598","68Q"},	{"MPG","WWF"},	{"BWN","J2D"},
    {"FRF","JJM"},	{"QFJ","57P"},	{"NSS","BVH"},	{"3SM","HTP"},	{"N1K","SYL"},	{"33P","TY2"},	{"WWF","7SK"},	{"4V3","6PT"},	{"4LD","13S"},	{"9HN","CTC"},	{"Q87","48X"},	{"7MB","96M"},	{"6S3","B65"},	{"KFJ","5YL"},	{"DGK","TS5"},	{"2C3","YL7"},
    {"M79","GRM"},	{"BRG","41X"},	{"GPJ","YLW"},	{"8FS","2LC"},	{"SL5","G5L"},	{"2MW","RHN"},	{"DDZ","J4F"},	{"ZQZ","4LQ"},	{"FZF","Z6X"},	{"XF1","JWS"},	{"B7C","6DM"},	{"GN9","N7V"},	{"F5K","2JX"},	{"7QR","FCC"},	{"3DG","2X7"},	{"L9C","RMW"},
    {"XKM","26Q"},	{"FPK","5VT"},	{"RGQ","XF1"},	{"174","79T"},	{"1CP","KVB"},	{"X5Y","WWH"},	{"M1K","2X2"},	{"L53","76G"},	{"5MS","YX8"},	{"8P2","DPP"},	{"LMJ","B6X"},	{"NKD","24R"},	{"LH2","X86"},	{"D4N","CCC"},	{"1R2","N5J"},	{"LGF","YCQ"},
    {"YL7","Y93"},	{"NCG","7NJ"},	{"RR2","MNR"},	{"24R","FPK"},	{"H62","RC8"},	{"HRX","H53"},	{"ZKS","N86"},	{"B95","RS5"},	{"Z8Y","QY7"},	{"J21","YL8"},	{"T32","FL9"},	{"92L","PLW"},	{"41X","YLV"},	{"8NY","DQC"},	{"3FS","VVC"},	{"2F2","W4C"},
    {"PH4","WGK"},	{"TS5","4WQ"},	{"YMS","RHC"},	{"FW6","PQG"},	{"L3F","RV3"},	{"6XN","KSR"},	{"BZ3","88B"},	{"QJ6","LTG"},	{"BQJ","7J3"},	{"B5P","L22"},	{"MWG","QQ8"},	{"R4B","MGY"},	{"G5L","46V"},	{"XNW","3JL"},	{"QY7","HZV"},	{"2HK","J38"},
    {"Y8W","WQV"},	{"GBT","L7L"},	{"SZP","87F"},	{"FN6","RP1"},	{"43G","4H9"},	{"TTZ","ZP2"},	{"NV2","F3M"},	{"Y3J","9K9"},	{"87F","8HN"},	{"RXZ","PH4"},	{"5YL","QQQ"},	{"S5Q","388"},	{"RJR","5MS"},	{"DBV","7FQ"},	{"D7F","QQ9"},	{"VG5","N78"},
    {"JSD","6YZ"},	{"C7B","TRM"},	{"KVB","P7C"},	{"HL7","WL3"},	{"HNW","75P"},	{"Z9K","H51"},	{"Z4V","43G"},	{"G2D","Q6D"},	{"C94","DBV"},	{"6MK","FYV"},	{"Z4X","P5K"},	{"T9M","D7F"},	{"D4B","PNW"},	{"LB3","JDK"},	{"F3M","LPV"},	{"NJN","Y18"},
    {"FV7","HSQ"},	{"XRT","YQG"},	{"4ML","RJR"},	{"6YZ","2N3"},	{"JCG","HSX"},	{"6MN","5LQ"},	{"TX5","JXH"},	{"596","NRC"},	{"2LC","KMP"},	{"3ML","THS"},	{"BHH","ZQZ"},	{"WLK","62P"},	{"WSB","BBL"},	{"ZBT","J1T"},	{"R1F","DS2"},	{"KBK","BY4"},
    {"BWN","ZW6"},	{"HPP","3SZ"},	{"STM","BRG"},	{"WFX","XGR"},	{"2X2","2HK"},	{"V51","V9K"},	{"8LF","Q6N"},	{"2RB","M6G"},	{"HMW","NKD"},	{"R7R","9VS"},	{"L2Z","JFZ"},	{"W8B","Z99"},	{"PCG","4SK"},	{"4YG","JHN"},	{"WC8","N5C"},	{"798","J6P"},
    {"4XX","MZT"},	{"7K7","XJY"},	{"8QZ","111"},	{"QZT","551"},	{"HQC","7VS"},	{"D5Y","JGF"},	{"X3X","ZHM"},	{"8SD","TVZ"},	{"Y67","N44"},	{"1S1","P2G"},	{"1W4","4BH"},	{"RH1","8NV"},	{"9D6","4W1"},	{"NJN","L2Z"},	{"JXH","1CP"},	{"4L7","3C7"},
    {"3SZ","YL5"},	{"TF4","53L"},	{"96V","KKD"},	{"8TS","NCJ"},	{"C8W","JHB"},	{"GWZ","WDM"},	{"1PL","CLT"},	{"QJX","VDD"},	{"R63","BJT"},	{"1Z4","HHF"},	{"VNM","STM"},	{"Y7C","3BP"},	{"NQM","9V2"},	{"WTK","NKM"},	{"PQZ","584"},	{"26Q","BZ3"},
    {"L6Q","J23"},	{"W7Z","RXZ"},	{"ZHM","PBW"},	{"HFS","9CB"},	{"VVY","822"},	{"64W","27N"},	{"SPS","5ZD"},	{"JJM","TW4"},	{"M5K","7FM"},	{"5ZY","X3Q"},	{"5VT","SYG"},	{"QP4","Z4S"},	{"9V2","FRW"},	{"DTP","VVY"},	{"3YF","4NN"},	{"9GY","5MV"},
    {"WH4","1R2"},	{"2CC","1WL"},	{"39N","MR4"},	{"X21","6MN"},	{"LTG","64W"},	{"RDK","FCQ"},	{"NQ6","7J6"},	{"K7Y","8S7"},	{"M79","PFH"},	{"C21","WTK"},	{"3X5","HWM"},	{"987","BTG"},	{"HYH","Y8L"},	{"XRT","LPK"},	{"JYS","HFS"},	{"S4G","6D7"},
    {"N37","356"},	{"D9F","MWG"},	{"P43","F8L"},	{"RHC","P3S"},	{"MWG","NSZ"},	{"ST7","HYY"},	{"Z4S","RRX"},	{"D39","XJR"},	{"Y3L","4XX"},	{"5X2","79C"},	{"WL1","7Q5"},	{"KYS","RW4"},	{"Q87","74P"},	{"YDN","HNN"},	{"3XH","4LW"},	{"596","VWL"},
    {"RW4","RCF"},	{"WCG","CNL"},	{"S9D","GHQ"},	{"G31","DST"},	{"9VY","WC8"},	{"4WQ","MLF"},	{"388","Y9Y"},	{"845","R7H"},	{"PWR","M2T"},	{"L61","4GP"},	{"LML","L3F"},	{"H1H","GZQ"},	{"C21","DLS"},	{"XB4","L53"},	{"N5J","NQM"},	{"THS","CSB"},
    {"XGR","QCB"},	{"SPT","4FT"},	{"7FQ","WMP"},	{"13S","8QZ"},	{"BVH","WMC"},	{"GSN","7CQ"},	{"ZDY","ZBD"},	{"T2Q","5J3"},	{"J6P","R6W"},	{"N5C","4H7"},	{"KKD","YKQ"},	{"KBJ","P9J"},	{"14B","K27"},	{"N9F","HYS"},	{"2LG","G2D"},	{"3C7","S2G"},
    {"HB9","XT1"},	{"QQX","K1K"},	{"47H","14B"},	{"48Q","FQW"},	{"STP","PWR"},	{"NWW","ZY5"},	{"63F","FRL"},	{"4W1","8G8"},	{"7W6","CVN"},	{"RPS","4NP"},	{"9HN","1MR"},	{"M96","454"},	{"8ZM","RVB"},	{"XVT","7YX"},	{"M6G","WVP"},	{"ZPR","BNN"},
    {"Q83","6SS"},	{"FM2","YMS"},	{"P7R","59B"},	{"WTB","7RP"},	{"YT1","D27"},	{"PW6","QBQ"},	{"J2D","L9L"},	{"8G8","8Q3"},	{"L12","GBC"},	{"FQW","2RB"},	{"Z8T","D1X"},	{"HYS","QQX"},	{"63F","72B"},	{"34Z","DSG"},	{"2GK","3XH"},	{"F5K","LD1"},
    {"DQ3","QVK"},	{"SL5","88N"},	{"XWP","7SF"},	{"NSZ","47H"},	{"1Z2","NT6"},	{"FYV","M7W"},	{"KHJ","91C"},	{"RKZ","FS3"},	{"P7C","GW6"},	{"BYN","33X"},	{"QZN","HRX"},	{"7J5","L6X"},	{"2X8","QH4"},	{"KHZ","BB6"},	{"NCJ","9FL"},	{"JHN","Y67"},
    {"FC5","BYN"},	{"GRM","CYQ"},	{"NST","3SJ"},	{"VZL","3LQ"},	{"1VH","XKM"},	{"LQZ","YD8"},	{"CD5","LGK"},	{"32Y","3V7"},	{"CTH","56S"},	{"K27","VNM"},	{"4NP","C7B"},	{"VDK","DR4"},	{"ZGY","848"},	{"ZNL","M96"},	{"WVP","91F"},	{"RHC","2D1"},
    {"53L","YXF"},	{"CCC","L9C"},	{"81J","K36"},	{"CCM","2HF"},	{"6LG","CWR"},	{"98D","S2R"},	{"N2F","1W4"},	{"DMP","DMT"},	{"BGS","2MP"},	{"BHD","D5Y"},	{"7VS","6LG"},	{"WSN","6SD"},	{"HYP","1CV"},	{"K58","FLX"},	{"2X7","Y8X"},	{"Q6D","Z4V"},
    {"RCF","MTW"},	{"J5B","F5K"},	{"5V1","CP9"},	{"CSQ","ZC8"},	{"J9F","WQW"},	{"8NV","BSQ"},	{"8HV","S7S"},	{"ZP2","3MZ"},	{"1CY","WCG"},	{"RMW","HCL"},	{"46V","J5B"},	{"9QF","JYP"},	{"LPV","LQZ"},	{"K6M","ZTH"},	{"MZQ","VDM"},	{"N16","CD5"},
    {"Y5W","GX3"},	{"XQC","QJ6"},	{"7CQ","CSF"},	{"79C","X23"},	{"W7G","798"},	{"J23","LSZ"},	{"5J3","K4L"},	{"67H","WM3"},	{"GJF","LMX"},	{"TJR","YLG"},	{"3LQ","29L"},	{"BY4","63F"},	{"YL5","MPJ"},	{"BZV","951"},	{"RJ1","VG5"},	{"RTY","KS9"},
    {"51W","BDG"},	{"P66","H62"},	{"Y89","JT5"},	{"KM7","VPJ"},	{"CSF","9HN"},	{"X89","G9X"},	{"G9X","J9F"},	{"CTC","32Y"},	{"FLX","FWV"},	{"6PN","HMN"},	{"V8Y","ST7"},	{"ZZ3","2FT"},	{"J1T","JMT"},	{"FH7","PW6"},	{"Y93","CMF"},	{"DK2","LB3"},
    {"SWN","WSB"},	{"Z6R","QS4"},	{"7LB","29W"},	{"5ZX","96V"},	{"D1X","KFJ"},	{"X23","9F5"},	{"2FT","PR3"},	{"YX8","HL7"},	{"NFY","ZZ3"},	{"756","Y6V"},	{"D2C","LP3"},	{"1MH","1HR"},	{"TFS","NFY"},	{"CMF","271"},	{"1PS","QVR"},	{"J1M","FW6"},
    {"9QF","GYC"},	{"D27","SWN"},	{"WMC","2CC"},	{"J38","RPY"},	{"1HG","1MF"},	{"5LQ","B43"},	{"N4P","ZPS"},	{"PR3","FNP"},	{"4H7","T9M"},	{"3BR","SC6"},	{"K1X","GPR"},	{"9TP","948"},	{"YQG","BRK"},	{"JYP","S4G"},	{"D1Y","4J2"},	{"Y89","RG2"},
    {"DVQ","XY9"},	{"DMT","2MJ"},	{"K27","TY1"},	{"88B","YDT"},	{"43N","HB9"},	{"MGY","1MH"},	{"YFR","CTH"},	{"74N","JYS"},	{"X86","JCG"},	{"948","GY2"},	{"7MR","5RL"},	{"PZL","GR4"},	{"32Y","QZN"},	{"K1T","987"},	{"5ZD","644"},	{"7X3","9R8"},
    {"WGK","XQC"},	{"DLS","2X8"},	{"RHN","T2Q"},	{"GR4","1SJ"},	{"6DM","L7B"},	{"4NP","JBQ"},	{"KS9","YJX"},	{"YLG","X21"},	{"G1S","1R4"},	{"5ZP","8HV"},	{"D1Y","K7Y"},	{"8MW","WY3"},	{"QJX","X75"},	{"GY2","3DG"},	{"CV5","GBG"},	{"K36","X1M"},
    {"BTG","N1K"},	{"RV3","PKZ"},	{"V9K","W11"},	{"22K","G1S"},	{"CMH","M8W"},	{"M1J","LMJ"},	{"CMN","XVT"},	{"BSQ","PMB"},	{"J6P","MH2"},	{"LL3","H7T"},	{"KR1","KWQ"},	{"M7W","NLS"},	{"RS5","P6B"},	{"1ND","Q26"},	{"JBQ","NV2"},	{"RPL","JCW"},
    {"56S","NPJ"},	{"6YZ","XWP"},	{"52S","X5Y"},	{"Z99","1DF"},	{"L22","28X"},	{"GKJ","S9D"},	{"4GP","9QY"},	{"NSZ","HYP"},	{"45Q","3BR"},	{"RSD","61Y"},	{"356","Y89"},	{"P5K","797"},	{"C84","NST"},	{"CJG","LZC"},	{"1MR","DNQ"},	{"LDQ","YZ4"},
    {"61Y","174"},	{"822","R1F"},	{"6PT","VB1"},	{"8YY","QDQ"},	{"VYG","X6C"},	{"HHF","T68"},	{"46F","M9V"},	{"1MR","B7C"},	{"2MP","LL3"},	{"CTK","YWZ"},	{"T98","WL1"},	{"14J","BHD"},	{"J9N","GWM"},	{"MZT","K28"},	{"RPL","FH7"},	{"T58","35F"},
    {"DPP","4L7"},	{"RVB","DQ3"},	{"QBZ","BSY"},	{"TSB","PCG"},	{"RG2","L6N"},	{"8G8","S6P"},	{"DQ3","X6N"},	{"88N","ML3"},	{"6NF","3M4"},	{"JFG","F85"},	{"X3Q","8FS"},	{"96M","3YF"},	{"D4B","SAN"},	{"LD1","P6P"},	{"9B8","416"},	{"BJT","C74"},
    {"QVR","XLT"},	{"B43","RPM"},	{"QS4","6RG"},	{"YD8","96R"},	{"8HN","1G5"},	{"RJ1","9B8"},	{"BRK","ZBT"},	{"BHH","RKZ"},	{"TGZ","2QQ"},	{"NWM","1N6"},	{"WWH","46F"},	{"LP3","SPS"},	{"28X","LNX"},	{"X2X","CMH"},	{"CP9","T43"},	{"9F5","9QW"},
    {"2MP","7MR"},	{"26D","67H"},	{"951","RGQ"},	{"P6P","KYS"},	{"H3H","T6Y"},	{"PY6","N37"},	{"M9V","Y3L"},	{"V56","M29"},	{"XWM","DMP"},	{"B65","3VX"},	{"BBL","W7G"},	{"96W","KHW"},	{"JGF","VNS"},	{"6KR","NWG"},	{"7P8","TQ6"},	{"394","M79"},
    {"7QK","YZZ"},	{"BZ6","1Z2"},	{"D41","14J"},	{"848","LDQ"},	{"HYY","JP5"},	{"S7S","8YF"},	{"7HW","KD6"},	{"TW4","BMN"},	{"VPJ","X89"},	{"QCB","R4H"},	{"QHX","Z6R"},	{"WRX","YT1"},	{"3BP","SPT"},	{"1HR","1Z7"},	{"9LR","26D"},	{"S5Q","2C3"},
    {"9W5","HYH"},	{"72B","BZV"},	{"LMX","MLN"},	{"JFZ","TCD"},	{"271","82P"},	{"8YF","RCS"},	{"9W5","C94"},	{"XJY","2GK"},	{"KMP","NWM"},	{"LZC","2MG"},	{"LPK","7MB"},	{"S2G","14Y"},	{"BMN","5MR"},	{"YL8","TQQ"},	{"TW4","8LF"},	{"HWM","P7R"},
    {"QQQ","KLG"},	{"VFV","BWN"},	{"LKN","RH1"},	{"V51","RKK"},	{"R7H","8S2"},	{"LLY","X2X"},	{"3W9","FRF"},	{"KTP","Y7C"},	{"DSG","5QT"},	{"7J3","NPB"},	{"1R2","HL2"},	{"CSB","HPP"},	{"X7H","NWW"},	{"BSY","F4S"},	{"RS5","GSN"},	{"F85","N62"},
    {"HYP","X7H"},	{"ZTH","KR1"},	{"69D","PTP"},	{"CLT","9JZ"},	{"LT1","GRR"},	{"YXF","LT1"},	{"FNP","QFJ"},	{"HL2","6R1"},	{"ML3","KNR"},	{"LQ9","ZSD"},	{"84B","5ZX"},	{"Q5S","Z8T"},	{"6FJ","P43"},	{"RP1","19V"},	{"GW6","FZF"},	{"2DK","WCR"},
    {"J9X","Q83"},	{"WQW","6TK"},	{"TS5","8P2"},	{"V5R","5H5"},	{"D9Z","7QK"},	{"B6X","T32"},	{"29W","VDB"},	{"MLF","WSN"},	{"COM","5M5"},	{"HZV","XWM"},	{"M2T","9TP"},	{"F4V","ZXJ"},	{"PNQ","NQ6"},	{"YLW","DVQ"},	{"9VS","CTK"},	{"6TK","3ML"},
    {"SHK","8TS"},	{"RC8","596"},	{"NRC","JFG"},	{"9CB","84B"},	{"S2R","263"},	{"W11","8CJ"},	{"7Q5","7J5"},	{"S12","KBK"},	{"DBH","HLK"},	{"DS2","DXC"},	{"9QW","SHK"},	{"BPQ","M4G"},	{"SC6","VV6"},	{"NT6","X8W"},	{"584","G31"},	{"D7S","5X2"},
    {"T6Y","CCM"},	{"JMT","LML"},	{"91F","1CY"},	{"CVN","J9X"},	{"TY2","VFV"},	{"RKK","RTQ"},	{"QZS","Z7G"},	{"MH2","XWW"},	{"ZVQ","DH7"},	{"VB1","HP5"},	{"H7T","3W9"},	{"XN6","51K"},	{"1N6","1S1"},	{"ZSD","HQC"},	{"CYQ","SZP"},	{"NZT","LGF"},
    {"GBG","HNG"},	{"L6X","WH4"},	{"2LJ","FN6"},	{"JT5","XNS"},	{"Q17","C5C"},	{"3JL","D39"},	{"VDD","R7R"},	{"55P","XNW"},	{"S8K","7LB"},	{"N86","8YY"},	{"RPM","X3X"},	{"HCL","XH1"},	{"H53","J9N"},	{"Y4R","MZQ"},	{"7ZX","D9Z"},	{"HTP","Y3J"},
    {"MTW","BWW"},	{"T1M","Q87"},	{"B8K","C8W"},	{"R9H","NCG"},	{"48X","T58"},	{"BZV","N2W"},	{"SYL","YFR"},	{"YCQ","FM2"},	{"ZXJ","2H8"},	{"644","2MW"},	{"1CV","BZ6"},	{"6YD","81J"},	{"LPK","KTP"},	{"QQ8","N4P"},	{"VDM","H1H"},	{"7FM","JJJ"},
    {"VZN","V56"},	{"RPY","62F"},	{"6SD","K1T"},	{"2Y9","BQJ"},	{"76G","598"},	{"CNL","H3H"},	{"S7K","69D"},	{"YYJ","D4B"},	{"WMP","GPJ"},	{"XH1","KM7"},	{"TJS","S77"},	{"6VN","PY6"},	{"N44","5PS"},	{"G3G","GJF"},	{"9FV","M1J"},	{"ZCG","J9T"},
    {"CSF","BBR"},	{"WCR","L6Q"},	{"2HF","Q7S"},	{"9FL","BGS"},	{"P3S","PQZ"},	{"79T","NJN"},	{"ZJY","9FV"},	{"P9J","2PH"},	{"X8W","96W"},	{"GZQ","XH6"},	{"WCG","B81"},	{"HNN","912"},	{"KLG","KBJ"},	{"NLS","19J"},	{"JCW","Y8W"},	{"62F","LLY"},
    {"QH4","V5R"},	{"7NJ","WS7"},	{"TY1","DTS"},	{"MNR","39N"},	{"72B","RL2"},	{"DPP","TF4"},	{"KWQ","1VH"},	{"NPJ","74N"},	{"Z7G","RT6"},	{"5MR","CJG"},	{"82P","TJS"},	{"M29","YDN"},	{"9LR","C21"},	{"26D","NSS"},	{"RT6","Z8Y"},	{"19J","ZJY"},
    {"J71","WFX"},	{"QDQ","QZS"},	{"YZZ","756"},	{"9JZ","KPD"},	{"3V7","QW6"},	{"T9K","QJX"},	{"8S2","5V1"},	{"Y18","6VN"},	{"S6P","TQS"},	{"X75","K8H"},	{"8CJ","Q3J"},	{"ZPS","LYC"},	{"454","RTY"},	{"PBW","STP"},	{"Q26","VDK"},	{"45Q","D9F"},
    {"TVZ","9QF"},	{"N1K","T2S"},	{"L6N","Y5W"},	{"RTQ","RPS"},	{"SSY","LFY"},	{"TQS","WM8"},	{"Y6V","ZKS"},	{"Q83","VXD"},	{"VDB","SSR"},	{"F4S","CMN"},	{"NSV","GWZ"},	{"MDH","D41"},	{"MCT","XK8"},	{"32Q","C84"},	{"QQ9","PK9"},	{"QW6","T1M"},
    {"LGK","HMW"},	{"B81","V8Y"},	{"5RL","4CF"},	{"3SJ","KGZ"},	{"6RG","VMN"},	{"416","ZPR"},	{"T1M","VZN"},	{"PTP","ZDY"},	{"C8P","N16"},	{"3F5","T98"},	{"BNN","DDZ"},	{"6D7","D2C"},	{"YDT","Q5S"},	{"N62","JWH"},	{"YSY","QBZ"},	{"VDK","W5N"},
    {"1DF","5ZY"},	{"9K5","J21"},	{"X6C","1PS"},	{"MSZ","G4Z"},	{"3VX","Z4X"},	{"P2G","K58"},	{"L58","RSD"},	{"51K","W88"},	{"CQB","RDK"},	{"TCD","D4N"},	{"PLW","L12"},	{"78J","LKN"},	{"9FL","QHX"},	{"WY3","5XH"},	{"68Q","J71"},	{"4RT","K6M"},
    {"2MG","ZH1"},	{"19V","32Q"},	{"YJX","9VY"},	{"GHQ","6MK"},	{"KNR","VMM"},	{"GRR","NSV"},	{"JJJ","8NY"},	{"2DM","2DK"},	{"4NN","7P8"},	{"PMB","JSD"},	{"XT1","RR2"},	{"GPR","VS4"},	{"CN8","N9F"},	{"DNQ","6XN"},	{"8Q9","TX5"},	{"MR4","YSY"},
    {"DR4","8Q9"},	{"PNW","CSQ"},	{"VSV","ZNL"},	{"FCC","SSY"},	{"GX3","2LG"},	{"J6G","V9M"},	{"2QH","7W6"},	{"33X","FY9"},	{"QKS","78J"},	{"N37","2L1"},	{"LYC","SRV"},	{"CLW","43N"},	{"91F","92L"},	{"XJR","TFS"},	{"XLT","TSB"},	{"YKQ","J6G"},
    {"5H5","15Z"},	{"HSX","7HW"},	{"ZC8","6YD"},	{"7J6","S8K"},	{"2RN","HNW"},	{"CN8","YYJ"},	{"KPD","7ZX"},	{"VXD","VYG"},	{"ZW6","7K7"},	{"5QT","XN6"},	{"2D1","B95"},	{"P6B","7QR"},	{"MPJ","48Q"},	{"CMH","8MW"},	{"57P","B5P"},	{"GYC","5QX"},
    {"2L1","M5K"},	{"K8H","4V3"},	{"GRR","9LR"},	{"HL7","ZVQ"},	{"WS7","MCT"},	{"57P","FV7"},	{"RJR","PL4"},	{"5MV","CPJ"},	{"5PS","55P"},	{"HLK","4ML"},	{"LNX","ML6"},	{"2MJ","BPQ"},	{"2N3","WLK"},	{"WM3","GN9"},	{"WDM","3SM"},	{"YZ4","B8K"},
    {"LFY","VVJ"},	{"15Z","9K5"},	{"CWR","TGZ"},	{"XBY","6NF"},	{"MLN","MPK"},	{"NRC","33P"},	{"VVJ","PZL"},	{"K1K","6FJ"},	{"Q6N","XBY"},	{"4CF","RJ1"},	{"3M4","NWC"},	{"JP5","DT8"},	{"62P","1PL"},	{"K28","S12"},	{"PQG","S5Q"},	{"X1M","Q17"},
    {"RCS","6PN"},	{"WL3","FC5"},	{"L6X","S7K"},	{"NWC","2LJ"},	{"29L","CN8"},	{"4BH","9W5"},	{"NWG","555"},	{"VWL","RPL"},	{"FRL","VSV"},	{"YLV","394"},	{"FL9","2QH"},	{"8S7","M1K"},	{"VW2","TTZ"},	{"PL4","2Y9"},	{"VV6","SL5"},	{"14Y","D7S"},
    {"74P","G6Y"},	{"SSR","YOU"},	{"Y8L","2RN"},	{"W4C","W7Z"},	{"ML6","PNQ"},	{"K1H","QP4"},	{"75P","ZGY"},	{"W5N","WTB"},	{"WQV","Y4R"},	{"2QQ","9D6"},	{"59B","C8P"},	{"CPJ","3FS"},	{"PFH","KHN"},	{"6SS","2F2"},	{"C74","4YG"},	{"SYG","DK2"},
    {"ZBD","7X3"},	{"W91","13L"},	{"X6C","52S"},	{"T43","8SD"},	{"2PH","GBT"},	{"G4Z","GKJ"},	{"598","L58"},	{"6R1","34Z"},	{"DVN","6KR"},	{"VMM","687"}
};

std::vector<long long> AoC_7_Input = Parser::LoadCSV(7);

int AoC_8_Input_Width = 25;
int AoC_8_Input_Height = 6;
std::string AoC_8_Input = Parser::LoadSingleLine(8);

long long AoC_9_Input_A = 1;
long long AoC_9_Input_B = 2;
std::vector<long long> AoC_9_Input = Parser::LoadCSV(9);

std::vector<std::string> AoC_10_Input = Parser::LoadLines(10);

std::vector<long long> AoC_11_Input = Parser::LoadCSV(11);

std::vector<std::vector<int>> AoC_12_Input = {
    { -7, -1, 6 },
    { 6, -9, -9 },
    { -12, 2, -7 },
    { 4, -17, -12 }
};

std::vector<long long> AoC_13_Input = Parser::LoadCSV(13);

std::map<std::string, std::pair<int, std::vector<std::pair<int, std::string>>>> AoC_14_Input = {
    {"PVTL",{9,{{2,"RWPCH"}}}},
    {"BLPJK",{4,{{1,"FHFH"}}}},
    {"VJNBT",{5,{{146,"ORE"}}}},
    {"LKPQG",{5,{{8,"KDFNZ"},{1,"ZJGH"},{1,"GSCG"}}}},
    {"BMJR",{2,{{11,"NWDZ"},{2,"WBQR"},{1,"VRQR"}}}},
    {"KQDVM",{4,{{3,"GSCG"}}}},
    {"BCNV",{3,{{5,"QVNKN"},{6,"RPWKC"}}}},
    {"JHXBM",{1,{{10,"QMBM"},{4,"RBXB"},{2,"VRQR"}}}},
    {"MGCQ",{6,{{15,"RPWKC"}}}},
    {"FHFH",{4,{{1,"QWKRZ"}}}},
    {"MZKG",{6,{{10,"RWPCH"}}}},
    {"VQDT",{4,{{11,"JFKGV"},{5,"QVNKN"},{1,"CTVK"}}}},
    {"RPWKC",{5,{{1,"SXKT"}}}},
    {"RBXB",{2,{{1,"VQDT"},{25,"ZVMCB"}}}},
    {"WBQR",{3,{{6,"LGLNV"},{4,"XSNKB"}}}},
    {"SXKT",{2,{{199,"ORE"}}}},
    {"ZKTX",{3,{{1,"XSNKB"},{6,"CWBNX"},{1,"HPKB"},{5,"PVTL"},{1,"JNKH"},{9,"SXKT"},{3,"KQDVM"}}}},
    {"WJDF",{6,{{7,"FDSX"}}}},
    {"CWBNX",{4,{{7,"JLRM"}}}},
    {"PQZXH",{5,{{167,"ORE"}}}},
    {"DGFG",{6,{{13,"JHXBM"},{2,"NWDZ"},{4,"RFLX"},{12,"VRQR"},{10,"FJRFG"},{14,"PVTL"},{2,"JLRM"}}}},
    {"ZJGH",{9,{{12,"HPKB"},{3,"WHVXC"}}}},
    {"FJRFG",{9,{{1,"JLRM"},{2,"ZJGH"},{2,"QVNKN"}}}},
    {"KZFPJ",{7,{{129,"ORE"}}}},
    {"RWPCH",{1,{{2,"QMBM"}}}},
    {"JHDW",{4,{{7,"VJMWM"}}}},
    {"BJVQM",{9,{{7,"PQZXH"},{7,"SXKT"}}}},
    {"FDSX",{7,{{1,"VJMWM"},{4,"JHDW"},{1,"MQXF"}}}},
    {"WHVXC",{7,{{1,"RPWKC"}}}},
    {"ZVMCB",{1,{{1,"ZJGH"}}}},
    {"MPKR",{3,{{1,"RWPCH"}}}},
    {"VJMWM",{8,{{187,"ORE"}}}},
    {"GSCG",{5,{{15,"CTVK"}}}},
    {"RFLX",{2,{{2,"XSNKB"},{15,"ZVMCB"},{3,"KDFNZ"}}}},
    {"XLFZJ",{8,{{18,"QVNKN"}}}},
    {"ZSCX",{8,{{4,"CWBNX"}}}},
    {"NPRST",{9,{{2,"ZJGH"},{1,"JLRM"},{1,"MGCQ"}}}},
    {"QWKRZ",{2,{{13,"BJVQM"},{2,"BCNV"}}}},
    {"VRQR",{2,{{2,"QWKRZ"},{2,"BLPJK"},{5,"XSNKB"}}}},
    {"JLRM",{9,{{13,"HPKB"},{3,"VQDT"}}}},
    {"CTVK",{6,{{2,"SXKT"},{1,"VJNBT"},{5,"VLWQB"}}}},
    {"DZFNW",{8,{{2,"MPKR"},{2,"LMNCH"},{24,"VRQR"}}}},
    {"KDFNZ",{1,{{2,"VQDT"}}}},
    {"QVNKN",{6,{{1,"CTVK"},{6,"FDSX"}}}},
    {"HPKB",{4,{{3,"CTVK"},{1,"QVNKN"}}}},
    {"QMBM",{2,{{3,"NPRST"},{1,"KGSDJ"},{1,"CTVK"}}}},
    {"VLWQB",{5,{{4,"KZFPJ"},{1,"PQZXH"}}}},
    {"KGSDJ",{7,{{2,"VQDT"}}}},
    {"JNKH",{2,{{3,"MPKR"}}}},
    {"XQBS",{5,{{1,"KQDVM"}}}},
    {"JQNF",{6,{{3,"ZKGMX"},{1,"XQBS"},{11,"MZKG"},{11,"NPRST"},{1,"DZFNW"},{5,"VQDT"},{2,"FHFH"}}}},
    {"FUEL",{1,{{2,"FJRFG"},{17,"BMJR"},{3,"BJVQM"},{55,"JQNF"},{8,"DGFG"},{13,"ZJGH"},{29,"ZKTX"}}}},
    {"MQXF",{5,{{27,"KZFPJ"},{5,"VJNBT"}}}},
    {"ZKGMX",{4,{{11,"FDSX"},{1,"WHVXC"},{1,"WJDF"}}}},
    {"NWDZ",{4,{{1,"ZVMCB"}}}},
    {"LGLNV",{6,{{1,"XLFZJ"}}}},
    {"LMNCH",{8,{{13,"ZSCX"},{4,"XLFZJ"}}}},
    {"JFKGV",{8,{{1,"RPWKC"},{1,"FDSX"},{2,"BJVQM"}}}},
    {"XSNKB",{4,{{1,"WJDF"},{1,"LKPQG"}}}}
};

std::vector<long long> AoC_15_Input = Parser::LoadCSV(15);

std::string AoC_16_Input = Parser::LoadSingleLine(16);

std::vector<long long> AoC_17_Input = Parser::LoadCSV(17);

#endif