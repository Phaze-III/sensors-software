/*
 *	airRohr firmware
 *	Copyright (C) 2016-2018  Code for Stuttgart a.o.
 *
 *  Bulgarian translations
 *
 *	Texts should be as short as possible
 *	We only have 512 kB for the entire firmware
 */

const char INTL_LANG[] = "BG";
#define INTL_PM_SENSOR "Сензор за прахови частици"
const char INTL_CONFIGURATION[] PROGMEM = "Конфигурация";
#define INTL_WIFI_SETTINGS "Настройки за WiFi"
#define INTL_WIFI_NETWORKS "Зареждането WiFi мрежи ..."
#define INTL_LANGUAGE "Език"
const char INTL_NO_NETWORKS[] PROGMEM =  "Няма намерени мрежи";
const char INTL_NETWORKS_FOUND[] PROGMEM = "Намерени мрежи: ";
const char INTL_AB_HIER_NUR_ANDERN[] PROGMEM = "Разширени настройки (само ако знаете какво правите)";
const char INTL_SAVE[] PROGMEM = "Запиши";
const char INTL_SENSORS[] PROGMEM = "Сензори";
const char INTL_MORE_SENSORS[] PROGMEM = "More Сензори";
const char INTL_SDS011[] PROGMEM = "SDS011 ({pm})";
const char INTL_PMS[] PROGMEM = "Plantower PMS(1,3,5,6,7)003 ({pm})";
const char INTL_HPM[] PROGMEM = "Honeywell сензора за прахови частици";
const char INTL_SPS30[] PROGMEM = "Sensirion SPS30 ({pm})";
const char INTL_PPD42NS[] PROGMEM = "PPD42NS ({pm})";
const char INTL_DHT22[] PROGMEM = "DHT22 ({t}, {h})";
const char INTL_HTU21D[] PROGMEM = "HTU21D ({t}, {h})";
const char INTL_BMP180[] PROGMEM = "BMP180 ({t}, {p})";
const char INTL_BMX280[] PROGMEM = "BMP280/BME280 ({t}, {h}, {p})";
const char INTL_DS18B20[] PROGMEM = "DS18B20 ({t})";
const char INTL_SHT3X[] PROGMEM = "SHT3X ({t}, {h})";
const char INTL_DNMS[] PROGMEM = "DNMS ({l_a})";
const char INTL_DNMS_CORRECTION[] PROGMEM = "корекция в dB (A)";
const char INTL_TEMP_CORRECTION[] PROGMEM = "Корекция в °C";
const char INTL_NEO6M[] PROGMEM = "GPS (NEO 6M)";
const char INTL_BASICAUTH[] PROGMEM = "Оторизация";
#define INTL_REPORT_ISSUE "Подаване на сигнал за проблем"

const char INTL_FS_WIFI_DESCRIPTION[] PROGMEM = "WiFi сензор в режим на конфигуриране";
const char INTL_FS_WIFI_NAME[] PROGMEM = "Име";
const char INTL_MORE_SETTINGS[] PROGMEM = "Още настройки";
const char INTL_AUTO_UPDATE[] PROGMEM = "Автоматична актуализация";
const char INTL_USE_BETA[] PROGMEM = "Зареждане на бета актуализация";
const char INTL_DISPLAY[] PROGMEM = "OLED SSD1306";
const char INTL_SH1106[] PROGMEM = "OLED SH1106";
const char INTL_FLIP_DISPLAY[] PROGMEM = "OLED дисплей обръщане";
const char INTL_LCD1602_27[] PROGMEM = "LCD 1602 (I2C: 0x27)";
const char INTL_LCD1602_3F[] PROGMEM = "LCD 1602 (I2C: 0x3F)";
const char INTL_LCD2004_27[] PROGMEM = "LCD 2004 (I2C: 0x27)";
const char INTL_LCD2004_3F[] PROGMEM = "LCD 2004 (I2C: 0x3F)";
const char INTL_DISPLAY_WIFI_INFO[] PROGMEM = "Показване на WiFi информация";
const char INTL_DISPLAY_DEVICE_INFO[] PROGMEM = "Информация за устройството на дисплея";
const char INTL_DEBUG_LEVEL[] PROGMEM = "Debug&nbsp;Level";
const char INTL_MEASUREMENT_INTERVAL[] PROGMEM = "Интервал на измерване";
const char INTL_DURATION_ROUTER_MODE[] PROGMEM = "Продължителност като рутер";
const char INTL_MORE_APIS[] PROGMEM = "Още API";
const char INTL_SEND_TO_OWN_API[] PROGMEM = "Изпращане към собствено API";
const char INTL_SERVER[] PROGMEM = "Сървър";
const char INTL_PATH[] PROGMEM = "Път";
const char INTL_PORT[] PROGMEM = "Порт";
const char INTL_USER[] PROGMEM = "Потребител";
const char INTL_PASSWORD[] PROGMEM = "Парола";
const char INTL_SEND_TO[] PROGMEM = "Изпрати до {v}";
const char INTL_READ_FROM[] PROGMEM = "Получено от {v}";
const char INTL_SENSOR_IS_REBOOTING[] PROGMEM = "Сензорът се рестартира.";
const char INTL_RESTART_DEVICE[] PROGMEM = "Рестартирайте устройството";
const char INTL_DELETE_CONFIG[] PROGMEM = "Изтриване на Конфигурацията";
const char INTL_RESTART_SENSOR[] PROGMEM = "Рестартиране на сензора";
#define INTL_HOME "Начало"
#define INTL_BACK_TO_HOME "Обратно към начало"
const char INTL_CURRENT_DATA[] PROGMEM = "Текущи данни";
const char INTL_DEVICE_STATUS[] PROGMEM = "Статус на устройството";
#define INTL_ACTIVE_SENSORS_MAP "Карта на активните сензори (външен линк)"
#define INTL_CONFIGURATION_DELETE "Изтриване на Конфигурацията"
#define INTL_CONFIGURATION_REALLY_DELETE "Наистина ли искате да изтриете конфигурацията?"
#define INTL_DELETE "Изтрий"
#define INTL_CANCEL "Отказ"
#define INTL_REALLY_RESTART_SENSOR "Наистина ли искате да рестартирате сензора?"
#define INTL_RESTART "Рестарт"
const char INTL_SAVE_AND_RESTART[] PROGMEM = "Запис и рестарт";
#define INTL_FIRMWARE "Софтуер версия"
const char INTL_DEBUG_SETTING_TO[] PROGMEM = "Настройки дебъгването на";
#define INTL_NONE "изключено"
#define INTL_ERROR "само грешки"
#define INTL_WARNING "предупреждения"
#define INTL_MIN_INFO "минимална информация"
#define INTL_MED_INFO "средна информация"
#define INTL_MAX_INFO "пълна информация"
#define INTL_CONFIG_DELETED "Конфигурацията е изтрита"
#define INTL_CONFIG_CAN_NOT_BE_DELETED "Конфигурацията не може да бъде изтрита"
#define INTL_CONFIG_NOT_FOUND "Конфигурацията не е открита"
const char INTL_TIME_TO_FIRST_MEASUREMENT[] PROGMEM = "Oще {v} секунди до първото измерване.";
const char INTL_TIME_SINCE_LAST_MEASUREMENT[] PROGMEM = " секунди от последното измерване.";
const char INTL_PARTICLES_PER_LITER[] PROGMEM = "частици/литър";
const char INTL_PARTICULATE_MATTER[] PROGMEM = "Прахови частици";
const char INTL_TEMPERATURE[] PROGMEM = "Температура";
const char INTL_HUMIDITY[] PROGMEM = "Влажност на въздуха";
const char INTL_PRESSURE[] PROGMEM = "Атмосферно налягане";
const char INTL_LEQ_A[] PROGMEM = "LAeq";
const char INTL_LA_MIN[] PROGMEM = "LA min";
const char INTL_LA_MAX[] PROGMEM = "LA max";
const char INTL_LATITUDE[] PROGMEM = "Географска ширина";
const char INTL_LONGITUDE[] PROGMEM = "Географска дължина";
const char INTL_ALTITUDE[] PROGMEM = "Надморска височина";
const char INTL_DATE[] PROGMEM = "Дата";
const char INTL_TIME[] PROGMEM = "Дата";
const char INTL_SIGNAL_STRENGTH[] PROGMEM = "Сила на сигнала";
const char INTL_SIGNAL_QUALITY[] PROGMEM = "Качество на сигнала";
#define INTL_NUMBER_OF_MEASUREMENTS "Брой измервания"
#define INTL_TIME_SENDING_MS "Време, прекарано в изпращане"
#define INTL_SENSOR "Сензор"
#define INTL_PARAMETER "Параметър"
#define INTL_VALUE "Стойност"

//const char LUFTDATEN_INFO_LOGO_SVG[] PROGMEM = "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"128\" height=\"128\" viewBox=\"0 0 128 128\"><path fill=\"#009A93\" d=\"M123.58 77.76c0-6.22-3.2-11.66-7.96-14.66 2.36-3.87 3.73-8.42 3.73-13.3 0-14.1-11.44-25.52-25.53-25.52-4 0-7.8.93-11.17 2.57C80.63 19.6 74 14.3 66.1 14.3c-7.7 0-14.22 5.07-16.4 12.07-3.05-1.2-6.4-1.87-9.88-1.87-14.94 0-27.06 12.07-27.16 27-5.43 4.47-8.9 11.3-8.9 18.95 0 13.5 10.8 24.45 24.1 24.45h79.32c9.07-.06 16.4-7.7 16.4-17.14z\"/><path fill=\"#fff\" d=\"M55.5 49.92v19.05c0 9.37-7.64 17-17.1 17-9.36 0-17-7.63-17-17 0-9.38 7.64-17.02 17-17.02h.7V56h-.7c-7.1 0-12.88 5.84-12.88 12.96 0 7.13 5.77 12.97 12.9 12.97 7.2 0 12.96-5.85 12.96-12.97V49.92c0-7.2-5.77-12.97-12.97-12.97-7.1 0-12.8 5.78-12.8 12.9v.75h-4.2v-.75c0-9.37 7.7-17.02 17-17.02 9.5 0 17.1 7.65 17.1 17.1zm-5.47 0v19.05c0 6.37-5.17 11.54-11.62 11.54-6.3 0-11.5-5.1-11.5-11.5 0-6.3 5.2-11.5 11.6-11.5h.7v4.1h-.7c-4.1 0-7.5 3.4-7.5 7.5s3.4 7.5 7.5 7.5c4.2 0 7.6-3.4 7.6-7.5V49.9c0-4.2-3.3-7.57-7.5-7.57-4.1 0-7.5 3.38-7.5 7.5v.75H27v-.75c0-6.37 5.17-11.55 11.54-11.55 6.46 0 11.63 5.18 11.63 11.62zm-5.47 0v19.05c0 3.37-2.7 6.14-6.15 6.14-3.3 0-6-2.7-6-6.1 0-3.4 2.7-6.1 6.1-6.1h.7V67h-.7c-1.1 0-2 .9-2 2.02 0 1.1.9 2 2 2 1.2 0 2.1-.9 2.1-2V49.9c0-1.2-.9-2.1-2.1-2.1-1.1 0-2 .9-2 2.03v.75h-4.1v-.75c0-3.38 2.7-6.08 6.1-6.08 3.5 0 6.2 2.7 6.2 6.15zm13.94-2.17v-15h4.05v15H58.5zm4.05 38.16H58.5V49.2h4.05v36.7zm1.42-38.1v-15h4.05v15h-4.05zm0 38.2V49.2h4.05v36.7h-4.05zm5.48-38.1v-15h4.04v15h-4.1zm0 38.2V49.2h4.04v36.7h-4.1zM93.43 33c9.38 0 17.02 7.56 17.02 17 0 9.37-7.64 17-17 17h-.7v-4.1h.68c7.13 0 12.9-5.76 12.9-12.9 0-7.2-5.77-12.95-12.9-12.95-7.2 0-12.96 5.78-12.96 12.98v36h-4.05V49.9c0-9.45 7.57-17.02 17.02-17.02zm0 5.4c6.38 0 11.55 5.16 11.55 11.6 0 6.37-5.17 11.54-11.54 11.54h-.68v-4.1h.67c4.13 0 7.5-3.37 7.5-7.5 0-4.2-3.37-7.5-7.5-7.5-4.2 0-7.5 3.3-7.5 7.5V86h-4.1V49.9c-.03-6.46 5.17-11.6 11.6-11.6zM91.33 86H87.3V49.9c0-3.37 2.76-6.14 6.14-6.14s6.07 2.8 6.07 6.17-2.7 6.06-6 6.06h-.7v-4.1h.7c1.2 0 2.1-.9 2.1-2.1s-.9-2.1-2-2.1-2.1.9-2.1 2.1v36.1zm8.18 0h-4V68.24c1.4-.2 2.7-.5 4-.9.1.6.2 1.16.2 1.68v17zm5.5 0h-4V69c0-.76-.1-1.44-.3-2.1 1.3-.6 2.5-1.28 3.6-2.1.5 1.5.8 2.62.8 4.2v17zm1.4-17c0-1.8-.3-3.38-.9-5.03 1.1-1.04 2-2.1 3-3.22 1.4 2.8 2.1 5.1 2.1 8.27v17h-4.1V69zm-79.8 39.1c1.3.4 1.8 1.27 1.8 2.7 0 2.1-1.2 3-3.9 3h-3.4c-.2 0-.4-.12-.4-.4v-10.45c0-.26.2-.4.4-.4h3.2c2.7 0 4 .9 4 2.96 0 1.3-.5 2.1-1.5 2.6v.1zm-2.4-.86c1.3 0 1.9-.46 1.9-1.46s-.5-1.46-1.9-1.46h-1.5v2.94h1.5zm.3 4.8c1.3 0 1.9-.48 1.9-1.53s-.6-1.5-1.9-1.5h-1.8v3.1h1.8zm16.2-1.96c0 2.55-1.4 3.94-3.9 3.94s-3.9-1.37-3.9-3.92v-7.13c0-.26.1-.4.4-.4h1.3c.2 0 .4.14.4.4v6.98c0 1.58.6 2.32 1.9 2.32 1.3 0 1.9-.74 1.9-2.32v-6.98c0-.26.1-.4.4-.4h1.2c.2 0 .4.14.4.4v7.13zm12 3.34c0 .28-.1.4-.4.4h-6.2c-.2 0-.4-.12-.4-.4v-10.45c0-.26.2-.4.4-.4h1.3c.3 0 .4.14.4.4v9.1h4.5c.3 0 .4.14.4.4v.97zm11.9-3.54c0 2.7-1.4 4.16-4 4.16s-4.1-1.43-4.1-4.06v-3.52c0-2.63 1.4-4.07 4.1-4.07 1.7 0 3 .6 3.7 1.9.1.2.1.4-.1.5l-.9.5c-.2.1-.4 0-.5-.2-.5-.8-1.2-1.1-2.2-1.1-1.3 0-2 .8-2 2.5v3.1c0 1.7.7 2.5 2.1 2.5 1.4 0 2.1-.9 2.1-2.6v-.4H61c-.25 0-.4-.2-.4-.4v-1c0-.3.15-.4.4-.4h3.27c.28 0 .4.1.4.4v1.9zm12.9 3.5c.1.28 0 .45-.3.45h-1.4c-.2 0-.3-.1-.4-.3l-.5-1.77h-4l-.5 1.76c-.02.2-.2.3-.4.3h-1.3c-.3 0-.4-.16-.3-.43l3.4-10.5c.08-.2.2-.3.45-.3h1.5c.2 0 .35.1.4.3l3.4 10.5zm-4.6-8.4L71.2 110h3l-1.5-5.06zm11.1 8.46c0 .27-.1.4-.4.4h-1.2c-.2 0-.4-.13-.4-.4v-10.46c0-.26.2-.4.4-.4h3.1c2.8 0 4.1 1.15 4.1 3.5 0 1.75-.7 2.85-2.2 3.3l2.3 4c.2.26.1.46-.2.46H88c-.2 0-.37-.08-.47-.27l-2.1-3.96H84v3.9zm1.5-5.6c1.4 0 2.1-.55 2.1-1.72 0-1.2-.6-1.77-2-1.77H84v3.5h1.46zm10.9 5.6c0 .27-.1.4-.4.4h-1.2c-.2 0-.4-.13-.4-.4v-10.46c0-.26.2-.4.4-.4H96c.26 0 .4.14.4.4v10.47zm13.6-.04c.1.27 0 .44-.3.44h-1.3c-.2 0-.4-.1-.4-.32l-.5-1.76h-4l-.52 1.76c-.1.22-.2.32-.45.32H101c-.3 0-.4-.17-.33-.44l3.4-10.5c.08-.2.2-.3.45-.3h1.5c.2 0 .34.1.4.3l3.4 10.5zm-4.6-8.42l-1.4 5.05h3l-1.42-5.05h-.02z\"/></svg>";

// SVG is rather large, we can save space by blending this to a PNG:
// convert -size 100x88 -background '#33BBAA' <logo.svg> -dither None -colors 8 -depth 4 -flatten <logo.png>
// optipng -o7 -zm1-9 -strip all <logo.png>
// reduces size from 3909 to 1431 bytes.

constexpr unsigned int LUFTDATEN_INFO_LOGO_PNG_SIZE = 1431;

const char LUFTDATEN_INFO_LOGO_PNG[] PROGMEM = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x81,
  0x04, 0x03, 0x00, 0x00, 0x00, 0x15, 0x8e, 0xc4, 0x63, 0x00, 0x00, 0x00,
  0x15, 0x50, 0x4c, 0x54, 0x45, 0x33, 0xbb, 0xaa, 0x11, 0xaa, 0x99, 0x00,
  0x99, 0x99, 0x66, 0xbb, 0xbb, 0x99, 0xdd, 0xcc, 0xcc, 0xee, 0xee, 0xff,
  0xff, 0xff, 0xf5, 0xa6, 0x01, 0x0a, 0x00, 0x00, 0x05, 0x3d, 0x49, 0x44,
  0x41, 0x54, 0x68, 0xde, 0xed, 0x98, 0xcf, 0x77, 0xa2, 0x30, 0x10, 0xc7,
  0xa3, 0xa0, 0x67, 0x45, 0xb7, 0x67, 0x41, 0xed, 0x99, 0x8a, 0xf5, 0xec,
  0x2a, 0x72, 0x6e, 0x55, 0x38, 0xd3, 0x85, 0xcc, 0xff, 0xff, 0x27, 0xec,
  0xcc, 0x84, 0x42, 0xf8, 0xa5, 0x54, 0x2e, 0xbb, 0xef, 0x99, 0xd7, 0x57,
  0x83, 0x24, 0x1f, 0x66, 0xbe, 0x33, 0x99, 0x10, 0x85, 0x78, 0xb6, 0x67,
  0x7b, 0xb6, 0xff, 0xb2, 0x4d, 0xa7, 0xd3, 0x7e, 0xf3, 0x1d, 0x6a, 0x93,
  0xc7, 0x01, 0x96, 0xe3, 0xf4, 0x43, 0x0c, 0x1d, 0xa7, 0x1f, 0x62, 0x90,
  0x03, 0x1c, 0xbb, 0x9f, 0x0f, 0x0f, 0x1b, 0xa1, 0x99, 0xf0, 0xa0, 0x11,
  0xba, 0x09, 0x8f, 0x19, 0x51, 0x02, 0x38, 0x8b, 0x9e, 0x4e, 0x3c, 0xe4,
  0xc6, 0xb0, 0x4c, 0x60, 0x37, 0x06, 0x5d, 0x32, 0x74, 0xc0, 0xee, 0xdb,
  0x93, 0x8a, 0x0c, 0x44, 0x50, 0xb7, 0xee, 0x59, 0x93, 0xcf, 0xb3, 0x2b,
  0x00, 0x67, 0x61, 0x75, 0x52, 0xb5, 0xfa, 0xe0, 0x96, 0x36, 0xe9, 0x0b,
  0x68, 0x47, 0x74, 0x06, 0xb4, 0x69, 0x31, 0x70, 0xba, 0xb7, 0x45, 0x4f,
  0x13, 0xb0, 0x75, 0x49, 0x80, 0x9f, 0x1b, 0x91, 0x79, 0xb8, 0x0d, 0xc3,
  0xeb, 0x3e, 0x1b, 0xf6, 0x02, 0x7f, 0x02, 0x38, 0x84, 0x61, 0x66, 0xdd,
  0x62, 0x1b, 0x5e, 0x8f, 0xc3, 0x56, 0x23, 0x94, 0x0a, 0x8b, 0x08, 0xa8,
  0x5d, 0x2d, 0x8d, 0x00, 0xa0, 0xae, 0xe6, 0x7c, 0x4f, 0xfe, 0x6e, 0x33,
  0xc2, 0xd2, 0x00, 0x00, 0x69, 0x9d, 0x30, 0xcf, 0x6e, 0xc1, 0xef, 0xe6,
  0x70, 0x28, 0x13, 0x76, 0xdf, 0xa3, 0xe0, 0xa3, 0x4a, 0xc8, 0xe1, 0x00,
  0xc3, 0x46, 0x37, 0xf8, 0xdb, 0x15, 0x3d, 0xdd, 0x33, 0xb6, 0x51, 0x36,
  0x4c, 0x27, 0x10, 0xfc, 0x7a, 0xf4, 0x4e, 0xf8, 0x91, 0x34, 0xba, 0xc1,
  0x86, 0x06, 0x00, 0x17, 0x47, 0x78, 0x83, 0x05, 0x76, 0xe2, 0x32, 0x61,
  0x89, 0x33, 0xf7, 0xb6, 0x21, 0x2c, 0x72, 0xe6, 0xd0, 0xe4, 0x46, 0x66,
  0x42, 0x62, 0xd3, 0x43, 0x2e, 0x64, 0xf2, 0xb0, 0x44, 0x18, 0xa3, 0x63,
  0x4b, 0xfc, 0x56, 0xbe, 0xcd, 0xbf, 0x8d, 0x68, 0x90, 0x01, 0x0d, 0x1d,
  0x06, 0xec, 0xe9, 0x05, 0x61, 0x67, 0x9d, 0x60, 0x47, 0x90, 0x2e, 0x55,
  0x2c, 0x36, 0xbb, 0x4c, 0x89, 0x49, 0x4d, 0x06, 0x1b, 0x4d, 0xff, 0x95,
  0x89, 0x75, 0x08, 0x28, 0x1c, 0x05, 0x61, 0xc5, 0x5f, 0xa9, 0x30, 0x2d,
  0x99, 0x5e, 0x25, 0x58, 0xca, 0x89, 0x0d, 0xd9, 0x79, 0xc2, 0x7f, 0xe9,
  0x9a, 0xe6, 0x15, 0x84, 0x17, 0x90, 0x24, 0xb3, 0x8c, 0x14, 0x3d, 0xa9,
  0x4b, 0xa9, 0x62, 0x97, 0xe2, 0xa8, 0x14, 0x4d, 0xc6, 0xa7, 0xb9, 0xa4,
  0x57, 0x41, 0x08, 0xe0, 0x6b, 0xc7, 0x21, 0x36, 0x99, 0x2e, 0xeb, 0x52,
  0x2a, 0x19, 0xe2, 0x31, 0xc8, 0xc1, 0x7b, 0xb8, 0x5f, 0x00, 0x7c, 0x05,
  0x68, 0x6a, 0x41, 0xc0, 0x3c, 0x42, 0x01, 0x17, 0xa7, 0x70, 0x33, 0x02,
  0x10, 0x4a, 0x08, 0xbb, 0x26, 0x64, 0x04, 0xe7, 0x08, 0xbe, 0x70, 0x04,
  0x7c, 0x8e, 0x21, 0x1d, 0x63, 0x3c, 0x73, 0x02, 0xba, 0x8e, 0x21, 0xd8,
  0xa0, 0x6d, 0x72, 0x8a, 0xc6, 0x45, 0x2a, 0x9e, 0x35, 0x02, 0xc0, 0x1b,
  0xff, 0x01, 0xf9, 0x2c, 0xd7, 0x28, 0x65, 0x4e, 0x50, 0xd7, 0xa4, 0x04,
  0x7c, 0xee, 0xc8, 0xa1, 0x73, 0x95, 0x40, 0x46, 0xa1, 0xe9, 0x33, 0xa5,
  0x17, 0x73, 0x4c, 0x9d, 0xb0, 0x86, 0x04, 0x6d, 0xe2, 0x9c, 0x4f, 0xb9,
  0xff, 0xd5, 0x44, 0x40, 0x4b, 0x57, 0x90, 0xa2, 0x9c, 0x06, 0xbb, 0xe3,
  0xa1, 0x5c, 0xf6, 0xd4, 0xc2, 0xb2, 0x8f, 0x2a, 0xad, 0x69, 0x3a, 0x7e,
  0x19, 0xcf, 0x79, 0xd0, 0x2b, 0x67, 0x6c, 0x03, 0x41, 0x32, 0xfe, 0x0f,
  0xe6, 0x1f, 0x3e, 0xda, 0x45, 0xc2, 0xd2, 0xdb, 0x18, 0xde, 0xd0, 0xf3,
  0x9c, 0x57, 0x22, 0xa0, 0x31, 0x1b, 0x14, 0xcb, 0xb8, 0x43, 0xd8, 0x7d,
  0x87, 0x00, 0xc3, 0x59, 0x78, 0xf1, 0x4a, 0xb1, 0x39, 0x50, 0x08, 0x88,
  0x80, 0xe3, 0x1a, 0x09, 0x45, 0x7b, 0x81, 0x73, 0x1b, 0x81, 0xc5, 0x6a,
  0xb2, 0x41, 0x2b, 0xb2, 0xb3, 0xed, 0xbe, 0x9d, 0x80, 0x12, 0x49, 0x16,
  0xab, 0x4a, 0x28, 0x4c, 0xb0, 0xdf, 0x31, 0x71, 0x6e, 0x10, 0xf8, 0x2e,
  0x8b, 0x55, 0x26, 0x14, 0x00, 0x5a, 0x3d, 0xb7, 0x09, 0xb8, 0x2a, 0x38,
  0x5f, 0x4b, 0x84, 0x62, 0xab, 0xa1, 0x84, 0xbc, 0x4d, 0x48, 0x96, 0x79,
  0x4e, 0xda, 0x0d, 0x2a, 0x50, 0x21, 0x92, 0xbe, 0xdb, 0x4e, 0x10, 0x2e,
  0xd5, 0xb1, 0x59, 0x6d, 0x5d, 0xe4, 0x26, 0xe0, 0xdd, 0x74, 0x78, 0x2b,
  0x16, 0x83, 0xc9, 0x89, 0x6d, 0x94, 0xe5, 0xd5, 0x3d, 0xd0, 0x4c, 0x48,
  0x2d, 0x33, 0x4c, 0xdb, 0x09, 0x26, 0x79, 0x89, 0x45, 0x24, 0x2e, 0x13,
  0x72, 0x27, 0xb0, 0x16, 0xd2, 0xe2, 0xbd, 0x43, 0x48, 0x56, 0x59, 0xa9,
  0x9d, 0xd4, 0x9d, 0x88, 0x58, 0xa7, 0x3b, 0x84, 0x74, 0x1a, 0x80, 0xb4,
  0xca, 0xa1, 0xd0, 0x9c, 0xe0, 0x5a, 0x78, 0x8b, 0x20, 0x2f, 0x16, 0x66,
  0x4c, 0x3c, 0x2b, 0x09, 0x99, 0xcb, 0x80, 0xc5, 0x0b, 0x21, 0xd2, 0xb5,
  0x6e, 0x64, 0x35, 0xa7, 0x1c, 0x0c, 0xc2, 0x92, 0x0c, 0x79, 0x42, 0x62,
  0x95, 0x7b, 0x41, 0x25, 0x66, 0xc7, 0x1b, 0xf9, 0x40, 0x55, 0x18, 0xe2,
  0x35, 0x2e, 0x52, 0x4d, 0x06, 0xab, 0x88, 0x25, 0x4e, 0x4c, 0xe6, 0xf7,
  0x94, 0x44, 0x15, 0x02, 0x92, 0xd2, 0xae, 0x13, 0xb8, 0x34, 0x61, 0xbe,
  0xdd, 0x21, 0xc8, 0xcd, 0x60, 0xc7, 0xeb, 0x62, 0x51, 0x25, 0xf0, 0xc2,
  0xa5, 0x82, 0x7a, 0x27, 0x16, 0xc3, 0x79, 0x52, 0x59, 0x9b, 0x5a, 0x28,
  0xb8, 0x80, 0xc1, 0x8d, 0xd5, 0x2d, 0x8e, 0x2e, 0x8e, 0xc3, 0x41, 0x89,
  0x9e, 0x10, 0x05, 0x41, 0x55, 0xb9, 0xf8, 0x56, 0x85, 0x71, 0x8c, 0xc0,
  0xe5, 0x71, 0xfa, 0x96, 0x53, 0x22, 0xc4, 0xaa, 0xca, 0x9d, 0x6f, 0x54,
  0x39, 0xbc, 0xb1, 0x2e, 0xef, 0xde, 0x55, 0x1b, 0xbe, 0x30, 0xac, 0x48,
  0xa0, 0x5a, 0xdd, 0x46, 0x58, 0x65, 0x84, 0x49, 0xb3, 0x0e, 0xd2, 0xe7,
  0x88, 0x18, 0x1d, 0x08, 0x8b, 0x32, 0x41, 0xdf, 0x71, 0xa6, 0x4c, 0xbb,
  0x4b, 0xb0, 0x2b, 0x0b, 0x4b, 0xed, 0x7a, 0x91, 0x5a, 0x7e, 0xb4, 0x35,
  0xdd, 0x25, 0x38, 0xb5, 0xfa, 0x42, 0x3b, 0x2f, 0xbd, 0x83, 0x6c, 0x78,
  0x1b, 0x8f, 0xbb, 0x12, 0x2c, 0x6d, 0x5d, 0xe0, 0xee, 0x3f, 0x34, 0xfd,
  0x37, 0x55, 0x0b, 0xcf, 0x3f, 0x26, 0xac, 0x59, 0x05, 0x2c, 0x73, 0xf8,
  0xc2, 0x24, 0x27, 0xb4, 0xc5, 0xdd, 0x25, 0x4c, 0x6a, 0x75, 0x96, 0xeb,
  0x43, 0x48, 0xcb, 0x8f, 0x6b, 0x61, 0x47, 0xc2, 0x50, 0xaf, 0x51, 0x2a,
  0x14, 0xf8, 0x26, 0x13, 0xd1, 0xa0, 0x8e, 0x84, 0x62, 0xb7, 0xc8, 0xea,
  0x24, 0xbd, 0x3a, 0xff, 0xe2, 0x5a, 0xd8, 0x91, 0x50, 0x04, 0x83, 0x6b,
  0x35, 0xbe, 0x12, 0x4b, 0x92, 0x92, 0x6a, 0xe1, 0x8f, 0x09, 0xd9, 0x7e,
  0x31, 0x75, 0x66, 0x98, 0x14, 0x9f, 0x8e, 0xd3, 0x35, 0x16, 0xda, 0xc6,
  0xad, 0xf6, 0xac, 0xed, 0x09, 0x94, 0x09, 0x9d, 0x09, 0xda, 0xcb, 0xc3,
  0x28, 0x3f, 0x01, 0x1c, 0x9c, 0x0e, 0x04, 0xbb, 0x7e, 0xca, 0xb7, 0x03,
  0xfd, 0x78, 0xd1, 0x9d, 0xa0, 0xbd, 0x7f, 0x70, 0x31, 0xc7, 0x32, 0xe5,
  0x74, 0x22, 0x2c, 0x1a, 0x0f, 0x9a, 0xb3, 0xad, 0x9f, 0x9f, 0xc6, 0x56,
  0xfe, 0x61, 0xeb, 0x6f, 0x7c, 0xdf, 0x59, 0x87, 0x9f, 0xdc, 0xb1, 0x1c,
  0xdf, 0x7f, 0xf3, 0xfd, 0xa5, 0x7f, 0x74, 0x5a, 0xf6, 0xbd, 0x1f, 0xb6,
  0x47, 0x8f, 0x9a, 0x8d, 0x67, 0xe7, 0xc7, 0x08, 0x93, 0x07, 0x8f, 0xdc,
  0x2d, 0xc7, 0x77, 0xab, 0xa7, 0x09, 0x0f, 0x21, 0xec, 0x5e, 0x27, 0xff,
  0xe6, 0x9f, 0x20, 0xa6, 0x7d, 0x01, 0xea, 0xd7, 0xcc, 0xae, 0xad, 0xc7,
  0x4f, 0x96, 0xcf, 0xf6, 0x7f, 0xb4, 0x51, 0x78, 0xdd, 0x0b, 0x61, 0x1e,
  0x85, 0x89, 0x1f, 0x3e, 0x7f, 0xb5, 0x0d, 0x8f, 0xf4, 0xe1, 0xef, 0xa9,
  0xef, 0xfb, 0xae, 0xe0, 0x7b, 0x34, 0xa6, 0xb1, 0xe1, 0x79, 0x54, 0x22,
  0x27, 0x11, 0xe3, 0x44, 0x08, 0xc0, 0xd1, 0x02, 0x5f, 0x42, 0x80, 0x66,
  0x40, 0x8c, 0xff, 0x68, 0x27, 0xe0, 0xdb, 0xd8, 0x4d, 0x5b, 0x08, 0x89,
  0x87, 0xe3, 0x75, 0xc2, 0x28, 0x15, 0xbb, 0x0f, 0x02, 0xf1, 0xb4, 0xcb,
  0x16, 0x32, 0x42, 0x24, 0x5b, 0x08, 0xb1, 0x88, 0xca, 0x04, 0xea, 0x90,
  0xd1, 0x92, 0x66, 0x04, 0x1f, 0x22, 0x72, 0x15, 0x01, 0x02, 0xb7, 0x85,
  0x60, 0x80, 0x5b, 0x26, 0xc4, 0x4a, 0xa0, 0x04, 0x4a, 0x04, 0x53, 0xee,
  0xf6, 0x6d, 0x3a, 0xa4, 0xa2, 0x42, 0x18, 0x85, 0x17, 0xbc, 0xb1, 0xa7,
  0xab, 0xe0, 0x72, 0xca, 0xbc, 0x18, 0xa5, 0xa3, 0x8f, 0x66, 0x82, 0x8c,
  0x64, 0x8d, 0x40, 0x12, 0x04, 0x6e, 0xb0, 0xd7, 0x95, 0x1c, 0x27, 0x66,
  0xd2, 0x55, 0x87, 0x98, 0x67, 0x44, 0x5e, 0x80, 0xee, 0x04, 0x57, 0x74,
  0x82, 0xaf, 0x77, 0xc9, 0x36, 0x6d, 0x23, 0xe0, 0xb3, 0x50, 0x7f, 0x72,
  0xff, 0x5b, 0x49, 0xec, 0x1b, 0xf4, 0x72, 0x47, 0x3a, 0xa0, 0x12, 0x8a,
  0xc8, 0x61, 0x6f, 0x56, 0x12, 0x6d, 0x30, 0x25, 0x69, 0x96, 0x45, 0x53,
  0x7a, 0xd8, 0x37, 0xa5, 0x7f, 0x4a, 0x89, 0x30, 0xca, 0xbc, 0x80, 0xab,
  0x1f, 0xb9, 0x2d, 0x4a, 0xe2, 0x3c, 0x83, 0xff, 0x0b, 0x7e, 0xae, 0xea,
  0x8f, 0xa8, 0x43, 0x04, 0x43, 0x29, 0xc9, 0x17, 0xfb, 0xf6, 0xac, 0x16,
  0xef, 0x24, 0xbf, 0x08, 0xc3, 0x10, 0x2d, 0x79, 0x07, 0xec, 0x93, 0xf0,
  0x21, 0xf6, 0xf7, 0xe2, 0xe4, 0x0a, 0x13, 0x6d, 0xba, 0xf2, 0xc5, 0xb3,
  0x3d, 0xdb, 0xb3, 0xfd, 0xdb, 0xed, 0x2f, 0x15, 0xb3, 0xc9, 0x2c, 0x69,
  0xa5, 0xba, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae,
  0x42, 0x60, 0x82
};
