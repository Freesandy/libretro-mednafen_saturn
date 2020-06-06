#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include <libretro.h>
#include <retro_inline.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */

struct retro_core_option_definition option_defs_us[] = {
   {
      "beetle_saturn_region",
      "System Region",
      "Choose which region the system is from.",
      {
         { "Auto Detect",   NULL },
         { "Japan",   NULL },
         { "North America",   NULL },
         { "Europe",   NULL },
         { "South Korea",   NULL },
         { "Asia (NTSC)",   NULL },
         { "Asia (PAL)",   NULL },
         { "Brazil",   NULL },
         { "Latin America",   NULL },
         { NULL, NULL },
      },
      "Auto Detect"
   },
   {
      "beetle_saturn_cart",
      "Cartridge",
      "Certain games require an external cartridge to run (ROM Cart, 1M RAM Cart, 4M RAM Cart).",
      {
         { "Auto Detect",   NULL },
         { "None",   NULL },
         { "Backup Memory",   NULL },
         { "Extended RAM (1MB)",   NULL },
         { "Extended RAM (4MB)",   NULL },
         { "The King of Fighters '95",   NULL },
         { "Ultraman: Hikari no Kyojin Densetsu",   NULL },
         { NULL, NULL },
      },
      "Auto Detect"
   },
   {
      "beetle_saturn_multitap_port1",
      "6Player Adaptor on Port 1",
      "Enable multitap on Saturn port 1.",
      {
         { "disabled",   NULL },
         { "enabled",   NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "beetle_saturn_multitap_port2",
      "6Player Adaptor on Port 2",
      "Enable multitap on Saturn port 2.",
      {
         { "disabled",   NULL },
         { "enabled",   NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "beetle_saturn_analog_stick_deadzone",
      "Analog Stick Deadzone",
      "Configure the '3D Control Pad' Device Type's analog deadzone.",
      {
         { "0%",   NULL },
         { "5%",   NULL },
         { "10%",   NULL },
         { "15%",   NULL },
         { "20%",   NULL },
         { "25%",   NULL },
         { "30%",   NULL },
         { NULL, NULL },
      },
      "15%"
   },
   {
      "beetle_saturn_trigger_deadzone",
      "Trigger Deadzone",
      "Configure the '3D Control Pad' Device Type's trigger deadzone.",
      {
         { "0%",   NULL },
         { "5%",   NULL },
         { "10%",   NULL },
         { "15%",   NULL },
         { "20%",   NULL },
         { "25%",   NULL },
         { "30%",   NULL },
         { NULL, NULL },
      },
      "15%"
   },
   {
      "beetle_saturn_mouse_sensitivity",
      "Mouse Sensitivity",
      "Configure the 'Mouse' device type's sensitivity.",
      {
         { "5%",   NULL },
         { "10%",   NULL },
         { "15%",   NULL },
         { "20%",   NULL },
         { "25%",   NULL },
         { "30%",   NULL },
         { "35%",   NULL },
         { "40%",   NULL },
         { "45%",   NULL },
         { "50%",   NULL },
         { "55%",   NULL },
         { "60%",   NULL },
         { "65%",   NULL },
         { "70%",   NULL },
         { "75%",   NULL },
         { "80%",   NULL },
         { "85%",   NULL },
         { "90%",   NULL },
         { "95%",   NULL },
         { "100%",   NULL },
         { "105%",   NULL },
         { "110%",   NULL },
         { "115%",   NULL },
         { "120%",   NULL },
         { "125%",   NULL },
         { "130%",   NULL },
         { "135%",   NULL },
         { "140%",   NULL },
         { "145%",   NULL },
         { "150%",   NULL },
         { "155%",   NULL },
         { "160%",   NULL },
         { "165%",   NULL },
         { "170%",   NULL },
         { "175%",   NULL },
         { "180%",   NULL },
         { "185%",   NULL },
         { "190%",   NULL },
         { "195%",   NULL },
         { "200%",   NULL },
         { NULL, NULL },
      },
      "100%"
   },
   {
      "beetle_saturn_virtuagun_crosshair",
      "Gun Crosshair",
      "Choose the crosshair for the 'Stunner' and 'Virtua Gun' device types. Setting it to Off disables the crosshair.",
      {
         { "Cross",   NULL },
         { "Dot",   NULL },
         { "Off",   NULL },
         { NULL, NULL },
      },
      "Cross"
   },
   {
      "beetle_saturn_virtuagun_input",
      "Gun Input Mode",
      "",
      {
         { "Lightgun",   NULL },
         { "Touchscreen",   NULL },
         { NULL, NULL },
      },
      "Lightgun"
   },
   {
      "beetle_saturn_cdimagecache",
      "CD Image Cache (Restart)",
      "Loads the complete image in memory at startup. Can potentially decrease loading times at the cost of increased startup time. Requires a restart in order for a change to take effect.",
      {
         { "disabled",   NULL },
         { "enabled",   NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "beetle_saturn_midsync",
      "Mid-frame Input Synchronization",
      "Mid-frame synchronization can reduce input latency, but it will increase CPU requirements.",
      {
         { "disabled",   NULL },
         { "enabled",   NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "beetle_saturn_autortc",
      "Automatically set RTC on game load",
      "Automatically set the SMPC's emulated Real-Time Clock to the host system's current time and date upon game load.",
      {
         { "enabled",   NULL },
         { "disabled",   NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "beetle_saturn_autortc_lang",
      "BIOS language",
      "Also affects language used in some games (e.g. the European release of 'Panzer Dragoon').",
      {
         { "english", "English" },
         { "german",  "German" },
         { "french",  "French" },
         { "spanish", "Spanish" },
         { "italian", "Italian" },
         { "japanese", "Japanese" },
         { NULL, NULL },
      },
      "english"
   },
   {
      "beetle_saturn_horizontal_overscan",
      "Horizontal Overscan Mask",
      "Self-explanatory.",
      {
         { "0",       NULL },
         { "2",       NULL },
         { "4",       NULL },
         { "6",       NULL },
         { "8",       NULL },
         { "10",       NULL },
         { "12",       NULL },
         { "14",       NULL },
         { "16",       NULL },
         { "18",       NULL },
         { "20",       NULL },
         { "22",       NULL },
         { "24",       NULL },
         { "26",       NULL },
         { "28",       NULL },
         { "30",       NULL },
         { "32",       NULL },
         { "34",       NULL },
         { "36",       NULL },
         { "38",       NULL },
         { "40",       NULL },
         { "42",       NULL },
         { "44",       NULL },
         { "46",       NULL },
         { "48",       NULL },
         { "50",       NULL },
         { "52",       NULL },
         { "54",       NULL },
         { "56",       NULL },
         { "58",       NULL },
         { "60",       NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "beetle_saturn_initial_scanline",
      "Initial scanline",
      "Adjust the first displayed scanline in NTSC mode.",
      {
         { "0",       NULL },
         { "1",       NULL },
         { "2",       NULL },
         { "3",       NULL },
         { "4",       NULL },
         { "5",       NULL },
         { "6",       NULL },
         { "7",       NULL },
         { "8",       NULL },
         { "9",       NULL },
         { "10",       NULL },
         { "11",       NULL },
         { "12",       NULL },
         { "13",       NULL },
         { "14",       NULL },
         { "15",       NULL },
         { "16",       NULL },
         { "17",       NULL },
         { "18",       NULL },
         { "19",       NULL },
         { "20",       NULL },
         { "21",       NULL },
         { "22",       NULL },
         { "23",       NULL },
         { "24",       NULL },
         { "25",       NULL },
         { "26",       NULL },
         { "27",       NULL },
         { "28",       NULL },
         { "29",       NULL },
         { "30",       NULL },
         { "31",       NULL },
         { "32",       NULL },
         { "33",       NULL },
         { "34",       NULL },
         { "35",       NULL },
         { "36",       NULL },
         { "37",       NULL },
         { "38",       NULL },
         { "39",       NULL },
         { "40",       NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "beetle_saturn_last_scanline",
      "Last scanline",
      "Adjust the last displayed scanline in NTSC mode.",
      {
         { "210",       NULL },
         { "211",       NULL },
         { "212",       NULL },
         { "213",       NULL },
         { "214",       NULL },
         { "215",       NULL },
         { "216",       NULL },
         { "217",       NULL },
         { "218",       NULL },
         { "219",       NULL },
         { "220",       NULL },
         { "221",       NULL },
         { "222",       NULL },
         { "223",       NULL },
         { "224",       NULL },
         { "225",       NULL },
         { "226",       NULL },
         { "227",       NULL },
         { "228",       NULL },
         { "229",       NULL },
         { "230",       NULL },
         { "231",       NULL },
         { "232",       NULL },
         { "233",       NULL },
         { "234",       NULL },
         { "235",       NULL },
         { "236",       NULL },
         { "237",       NULL },
         { "238",       NULL },
         { "239",       NULL },
         { NULL, NULL },
      },
      "239"
   },
   {
      "beetle_saturn_initial_scanline_pal",
      "Initial scanline (PAL)",
      "Adjust the first displayed scanline in PAL mode.",
      {
         { "0",       NULL },
         { "1",       NULL },
         { "2",       NULL },
         { "3",       NULL },
         { "4",       NULL },
         { "5",       NULL },
         { "6",       NULL },
         { "7",       NULL },
         { "8",       NULL },
         { "9",       NULL },
         { "10",       NULL },
         { "11",       NULL },
         { "12",       NULL },
         { "13",       NULL },
         { "14",       NULL },
         { "15",       NULL },
         { "16",       NULL },
         { "17",       NULL },
         { "18",       NULL },
         { "19",       NULL },
         { "20",       NULL },
         { "21",       NULL },
         { "22",       NULL },
         { "23",       NULL },
         { "24",       NULL },
         { "25",       NULL },
         { "26",       NULL },
         { "27",       NULL },
         { "28",       NULL },
         { "29",       NULL },
         { "30",       NULL },
         { "31",       NULL },
         { "32",       NULL },
         { "33",       NULL },
         { "34",       NULL },
         { "35",       NULL },
         { "36",       NULL },
         { "37",       NULL },
         { "38",       NULL },
         { "39",       NULL },
         { "40",       NULL },
         { "41",       NULL },
         { "42",       NULL },
         { "43",       NULL },
         { "44",       NULL },
         { "45",       NULL },
         { "46",       NULL },
         { "47",       NULL },
         { "48",       NULL },
         { "49",       NULL },
         { "50",       NULL },
         { "51",       NULL },
         { "52",       NULL },
         { "53",       NULL },
         { "54",       NULL },
         { "55",       NULL },
         { "56",       NULL },
         { "57",       NULL },
         { "58",       NULL },
         { "59",       NULL },
         { "60",       NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "beetle_saturn_last_scanline_pal",
      "Last scanline (PAL)",
      "Adjust the last displayed scanline in PAL mode.",
      {
         { "230",       NULL },
         { "231",       NULL },
         { "232",       NULL },
         { "233",       NULL },
         { "234",       NULL },
         { "235",       NULL },
         { "236",       NULL },
         { "237",       NULL },
         { "238",       NULL },
         { "239",       NULL },
         { "240",       NULL },
         { "241",       NULL },
         { "242",       NULL },
         { "243",       NULL },
         { "244",       NULL },
         { "245",       NULL },
         { "246",       NULL },
         { "247",       NULL },
         { "248",       NULL },
         { "249",       NULL },
         { "250",       NULL },
         { "251",       NULL },
         { "252",       NULL },
         { "253",       NULL },
         { "254",       NULL },
         { "255",       NULL },
         { "256",       NULL },
         { "257",       NULL },
         { "258",       NULL },
         { "259",       NULL },
         { "260",       NULL },
         { "261",       NULL },
         { "262",       NULL },
         { "263",       NULL },
         { "264",       NULL },
         { "265",       NULL },
         { "266",       NULL },
         { "267",       NULL },
         { "268",       NULL },
         { "269",       NULL },
         { "270",       NULL },
         { "271",       NULL },
         { "272",       NULL },
         { "273",       NULL },
         { "274",       NULL },
         { "275",       NULL },
         { "276",       NULL },
         { "277",       NULL },
         { "278",       NULL },
         { "279",       NULL },
         { "280",       NULL },
         { "281",       NULL },
         { "282",       NULL },
         { "283",       NULL },
         { "284",       NULL },
         { "285",       NULL },
         { "286",       NULL },
         { "287",       NULL },
         { NULL, NULL },
      },
      "271"
   },
   {
      "beetle_saturn_horizontal_blend",
      "Enable Horizontal Blend(blur)",
      "Enable horizontal blend(blur) filter. Has a more noticeable effect with the Saturn's higher horizontal resolution modes(640/704).",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
struct retro_core_option_definition option_defs_chs[] = {
   {
      "beetle_saturn_region",
      "系统区域",
      "选择系统区域。",
      {
         { "Auto Detect",   "自动检测" },
         { "Japan",   "日本" },
         { "North America",   "北美" },
         { "Europe",   "欧洲" },
         { "South Korea",   "南韩" },
         { "Asia (NTSC)",   "亚洲（NTSC）" },
         { "Asia (PAL)",   "亚洲（PAL）" },
         { "Brazil",   "巴西" },
         { "Latin America",   "拉丁美洲" },
         { NULL, NULL },
      },
      "Auto Detect"
   },
   {
      "beetle_saturn_cart",
      "扩展卡",
      "游戏游戏需要特定的外部扩展卡才能运行（ROM卡，1M内存卡，4M内存卡）",
      {
         { "Auto Detect",   "自动监测" },
         { "None",   "无" },
         { "Backup Memory",   "记忆卡" },
         { "Extended RAM (1MB)",   "扩展内存（1MB）" },
         { "Extended RAM (4MB)",   "扩展内存（4MB）" },
         { "The King of Fighters '95",   "拳皇'95" },
         { "Ultraman: Hikari no Kyojin Densetsu",   "奥特曼：光之巨人传说" },
         { NULL, NULL },
      },
      "Auto Detect"
   },
   {
      "beetle_saturn_multitap_port1",
      "插槽1六分插",
      "在插槽1启用6手柄分插器。",
      {
         { "disabled",   NULL },
         { "enabled",   NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "beetle_saturn_multitap_port2",
      "插槽2六分插",
      "在插槽2启用6手柄分插器。",
      {
         { "disabled",   NULL },
         { "enabled",   NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "beetle_saturn_analog_stick_deadzone",
      "模拟摇杆盲区",
      "设置'3D控制手柄'设备的模拟摇杆盲区。",
      {
         { "0%",   NULL },
         { "5%",   NULL },
         { "10%",   NULL },
         { "15%",   NULL },
         { "20%",   NULL },
         { "25%",   NULL },
         { "30%",   NULL },
         { NULL, NULL },
      },
      "15%"
   },
   {
      "beetle_saturn_trigger_deadzone",
      "扳机键盲区",
      "设置'3D控制手柄'设备的扳机键盲区。",
      {
         { "0%",   NULL },
         { "5%",   NULL },
         { "10%",   NULL },
         { "15%",   NULL },
         { "20%",   NULL },
         { "25%",   NULL },
         { "30%",   NULL },
         { NULL, NULL },
      },
      "15%"
   },
   {
      "beetle_saturn_mouse_sensitivity",
      "鼠标灵敏度",
      "设置'鼠标'设备的灵敏度。",
      {
         { "5%",   NULL },
         { "10%",   NULL },
         { "15%",   NULL },
         { "20%",   NULL },
         { "25%",   NULL },
         { "30%",   NULL },
         { "35%",   NULL },
         { "40%",   NULL },
         { "45%",   NULL },
         { "50%",   NULL },
         { "55%",   NULL },
         { "60%",   NULL },
         { "65%",   NULL },
         { "70%",   NULL },
         { "75%",   NULL },
         { "80%",   NULL },
         { "85%",   NULL },
         { "90%",   NULL },
         { "95%",   NULL },
         { "100%",   NULL },
         { "105%",   NULL },
         { "110%",   NULL },
         { "115%",   NULL },
         { "120%",   NULL },
         { "125%",   NULL },
         { "130%",   NULL },
         { "135%",   NULL },
         { "140%",   NULL },
         { "145%",   NULL },
         { "150%",   NULL },
         { "155%",   NULL },
         { "160%",   NULL },
         { "165%",   NULL },
         { "170%",   NULL },
         { "175%",   NULL },
         { "180%",   NULL },
         { "185%",   NULL },
         { "190%",   NULL },
         { "195%",   NULL },
         { "200%",   NULL },
         { NULL, NULL },
      },
      "100%"
   },
   {
      "beetle_saturn_virtuagun_crosshair",
      "光枪准心",
      "选择'Stunner'和'Virtua Gun'设备的准心，设为关闭禁用准心。",
      {
         { "Cross",   "十字" },
         { "Dot",   "点" },
         { "Off",   "关闭" },
         { NULL, NULL },
      },
      "Cross"
   },
   {
      "beetle_saturn_virtuagun_input",
      "光枪输入模式",
      "",
      {
         { "Lightgun",   "光枪" },
         { "Touchscreen",   "触摸屏" },
         { NULL, NULL },
      },
      "Lightgun"
   },
   {
      "beetle_saturn_cdimagecache",
      "CD镜像缓存（须重启）",
      "启动时载入整个镜像文件到内存中。\n"
	  "可以减少读盘次数，但是会增加启动时间。须要重启内核以生效。",
      {
         { "disabled",   NULL },
         { "enabled",   NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "beetle_saturn_midsync",
      "帧间输入同步",
      "帧间输入同步可减少输入延迟，但是会增加CPU占用。",
      {
         { "disabled",   NULL },
         { "enabled",   NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "beetle_saturn_autortc",
      "游戏载入自动设置RTC",
      "游戏载入时自动设置SMPC模拟实时时钟为当前系统日期和时间。",
      {
         { "enabled",   NULL },
         { "disabled",   NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "beetle_saturn_autortc_lang",
      "BIOS语言",
      "同时会影响某些游戏内部使用的语言（例如欧版'Panzer Dragoon'）",
      {
         { "english", "英语" },
         { "german",  "德语" },
         { "french",  "法语" },
         { "spanish", "西班牙语" },
         { "italian", "意大利语" },
         { "japanese", "日语" },
         { NULL, NULL },
      },
      "english"
   },
   {
      "beetle_saturn_horizontal_overscan",
      "剪切水平过扫描",
      "剪切水平过扫描区域。",
      {
         { "0",       NULL },
         { "2",       NULL },
         { "4",       NULL },
         { "6",       NULL },
         { "8",       NULL },
         { "10",       NULL },
         { "12",       NULL },
         { "14",       NULL },
         { "16",       NULL },
         { "18",       NULL },
         { "20",       NULL },
         { "22",       NULL },
         { "24",       NULL },
         { "26",       NULL },
         { "28",       NULL },
         { "30",       NULL },
         { "32",       NULL },
         { "34",       NULL },
         { "36",       NULL },
         { "38",       NULL },
         { "40",       NULL },
         { "42",       NULL },
         { "44",       NULL },
         { "46",       NULL },
         { "48",       NULL },
         { "50",       NULL },
         { "52",       NULL },
         { "54",       NULL },
         { "56",       NULL },
         { "58",       NULL },
         { "60",       NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "beetle_saturn_initial_scanline",
      "第一条扫描线",
      "调整NTSC模式下第一条显示的扫描线。",
      {
         { "0",       NULL },
         { "1",       NULL },
         { "2",       NULL },
         { "3",       NULL },
         { "4",       NULL },
         { "5",       NULL },
         { "6",       NULL },
         { "7",       NULL },
         { "8",       NULL },
         { "9",       NULL },
         { "10",       NULL },
         { "11",       NULL },
         { "12",       NULL },
         { "13",       NULL },
         { "14",       NULL },
         { "15",       NULL },
         { "16",       NULL },
         { "17",       NULL },
         { "18",       NULL },
         { "19",       NULL },
         { "20",       NULL },
         { "21",       NULL },
         { "22",       NULL },
         { "23",       NULL },
         { "24",       NULL },
         { "25",       NULL },
         { "26",       NULL },
         { "27",       NULL },
         { "28",       NULL },
         { "29",       NULL },
         { "30",       NULL },
         { "31",       NULL },
         { "32",       NULL },
         { "33",       NULL },
         { "34",       NULL },
         { "35",       NULL },
         { "36",       NULL },
         { "37",       NULL },
         { "38",       NULL },
         { "39",       NULL },
         { "40",       NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "beetle_saturn_last_scanline",
      "最后一条扫描线",
      "调整NTSC模式下最后一条显示的扫描线。",
      {
         { "210",       NULL },
         { "211",       NULL },
         { "212",       NULL },
         { "213",       NULL },
         { "214",       NULL },
         { "215",       NULL },
         { "216",       NULL },
         { "217",       NULL },
         { "218",       NULL },
         { "219",       NULL },
         { "220",       NULL },
         { "221",       NULL },
         { "222",       NULL },
         { "223",       NULL },
         { "224",       NULL },
         { "225",       NULL },
         { "226",       NULL },
         { "227",       NULL },
         { "228",       NULL },
         { "229",       NULL },
         { "230",       NULL },
         { "231",       NULL },
         { "232",       NULL },
         { "233",       NULL },
         { "234",       NULL },
         { "235",       NULL },
         { "236",       NULL },
         { "237",       NULL },
         { "238",       NULL },
         { "239",       NULL },
         { NULL, NULL },
      },
      "239"
   },
   {
      "beetle_saturn_initial_scanline_pal",
      "第一条扫描线（PAL）",
      "调整PAL模式下第一条显示的扫描线。",
      {
         { "0",       NULL },
         { "1",       NULL },
         { "2",       NULL },
         { "3",       NULL },
         { "4",       NULL },
         { "5",       NULL },
         { "6",       NULL },
         { "7",       NULL },
         { "8",       NULL },
         { "9",       NULL },
         { "10",       NULL },
         { "11",       NULL },
         { "12",       NULL },
         { "13",       NULL },
         { "14",       NULL },
         { "15",       NULL },
         { "16",       NULL },
         { "17",       NULL },
         { "18",       NULL },
         { "19",       NULL },
         { "20",       NULL },
         { "21",       NULL },
         { "22",       NULL },
         { "23",       NULL },
         { "24",       NULL },
         { "25",       NULL },
         { "26",       NULL },
         { "27",       NULL },
         { "28",       NULL },
         { "29",       NULL },
         { "30",       NULL },
         { "31",       NULL },
         { "32",       NULL },
         { "33",       NULL },
         { "34",       NULL },
         { "35",       NULL },
         { "36",       NULL },
         { "37",       NULL },
         { "38",       NULL },
         { "39",       NULL },
         { "40",       NULL },
         { "41",       NULL },
         { "42",       NULL },
         { "43",       NULL },
         { "44",       NULL },
         { "45",       NULL },
         { "46",       NULL },
         { "47",       NULL },
         { "48",       NULL },
         { "49",       NULL },
         { "50",       NULL },
         { "51",       NULL },
         { "52",       NULL },
         { "53",       NULL },
         { "54",       NULL },
         { "55",       NULL },
         { "56",       NULL },
         { "57",       NULL },
         { "58",       NULL },
         { "59",       NULL },
         { "60",       NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "beetle_saturn_last_scanline_pal",
      "最后一条扫描线（PAL）",
      "调整PAL模式下最后一条显示的扫描线。",
      {
         { "230",       NULL },
         { "231",       NULL },
         { "232",       NULL },
         { "233",       NULL },
         { "234",       NULL },
         { "235",       NULL },
         { "236",       NULL },
         { "237",       NULL },
         { "238",       NULL },
         { "239",       NULL },
         { "240",       NULL },
         { "241",       NULL },
         { "242",       NULL },
         { "243",       NULL },
         { "244",       NULL },
         { "245",       NULL },
         { "246",       NULL },
         { "247",       NULL },
         { "248",       NULL },
         { "249",       NULL },
         { "250",       NULL },
         { "251",       NULL },
         { "252",       NULL },
         { "253",       NULL },
         { "254",       NULL },
         { "255",       NULL },
         { "256",       NULL },
         { "257",       NULL },
         { "258",       NULL },
         { "259",       NULL },
         { "260",       NULL },
         { "261",       NULL },
         { "262",       NULL },
         { "263",       NULL },
         { "264",       NULL },
         { "265",       NULL },
         { "266",       NULL },
         { "267",       NULL },
         { "268",       NULL },
         { "269",       NULL },
         { "270",       NULL },
         { "271",       NULL },
         { "272",       NULL },
         { "273",       NULL },
         { "274",       NULL },
         { "275",       NULL },
         { "276",       NULL },
         { "277",       NULL },
         { "278",       NULL },
         { "279",       NULL },
         { "280",       NULL },
         { "281",       NULL },
         { "282",       NULL },
         { "283",       NULL },
         { "284",       NULL },
         { "285",       NULL },
         { "286",       NULL },
         { "287",       NULL },
         { NULL, NULL },
      },
      "271"
   },
   {
      "beetle_saturn_horizontal_blend",
      "启用水平混合（模糊效果）",
      "启用水平混合（模糊效果）滤镜。\n"
	  "在土星高分辨率模式（640/704）下有更加明显的效果。",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

/*
 ********************************
 * Language Mapping
 ********************************
*/

struct retro_core_option_definition *option_defs_intl[RETRO_LANGUAGE_LAST] = {
   option_defs_us, /* RETRO_LANGUAGE_ENGLISH */
   NULL,           /* RETRO_LANGUAGE_JAPANESE */
   NULL,           /* RETRO_LANGUAGE_FRENCH */
   NULL,           /* RETRO_LANGUAGE_SPANISH */
   NULL,           /* RETRO_LANGUAGE_GERMAN */
   NULL,           /* RETRO_LANGUAGE_ITALIAN */
   NULL,           /* RETRO_LANGUAGE_DUTCH */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   NULL,           /* RETRO_LANGUAGE_RUSSIAN */
   NULL,           /* RETRO_LANGUAGE_KOREAN */
   NULL,           /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   option_defs_chs,/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   NULL,           /* RETRO_LANGUAGE_ESPERANTO */
   NULL,           /* RETRO_LANGUAGE_POLISH */
   NULL,           /* RETRO_LANGUAGE_VIETNAMESE */
   NULL,           /* RETRO_LANGUAGE_ARABIC */
   NULL,           /* RETRO_LANGUAGE_GREEK */
   NULL,           /* RETRO_LANGUAGE_TURKISH */
};

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should be called as early as possible - ideally inside
 * retro_set_environment(), and no later than retro_load_game()
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb)
{
   unsigned version = 0;

   if (!environ_cb)
      return;

   if (environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version) && (version == 1))
   {
      struct retro_core_options_intl core_options_intl;
      unsigned language = 0;

      core_options_intl.us    = option_defs_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = option_defs_intl[language];

      environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_intl);
   }
   else
   {
      size_t i;
      size_t num_options               = 0;
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine number of options */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      /* Allocate arrays */
      variables  = (struct retro_variable *)calloc(num_options + 1, sizeof(struct retro_variable));
      values_buf = (char **)calloc(num_options, sizeof(char *));

      if (!variables || !values_buf)
         goto error;

      /* Copy parameters from option_defs_us array */
      for (i = 0; i < num_options; i++)
      {
         const char *key                        = option_defs_us[i].key;
         const char *desc                       = option_defs_us[i].desc;
         const char *default_value              = option_defs_us[i].default_value;
         struct retro_core_option_value *values = option_defs_us[i].values;
         size_t buf_len                         = 3;
         size_t default_index                   = 0;

         values_buf[i] = NULL;

         if (desc)
         {
            size_t num_values = 0;

            /* Determine number of values */
            while (true)
            {
               if (values[num_values].value)
               {
                  /* Check if this is the default value */
                  if (default_value)
                     if (strcmp(values[num_values].value, default_value) == 0)
                        default_index = num_values;

                  buf_len += strlen(values[num_values].value);
                  num_values++;
               }
               else
                  break;
            }

            /* Build values string */
            if (num_values > 1)
            {
               size_t j;

               buf_len += num_values - 1;
               buf_len += strlen(desc);

               values_buf[i] = (char *)calloc(buf_len, sizeof(char));
               if (!values_buf[i])
                  goto error;

               strcpy(values_buf[i], desc);
               strcat(values_buf[i], "; ");

               /* Default value goes first */
               strcat(values_buf[i], values[default_index].value);

               /* Add remaining values */
               for (j = 0; j < num_values; j++)
               {
                  if (j != default_index)
                  {
                     strcat(values_buf[i], "|");
                     strcat(values_buf[i], values[j].value);
                  }
               }
            }
         }

         variables[i].key   = key;
         variables[i].value = values_buf[i];
      }
      
      /* Set variables */
      environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);

error:

      /* Clean up */
      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
