#include QMK_KEYBOARD_H

#ifndef shnob_sitelen_pona_h
#define shnob_sitelen_pona_h

enum sitelen_pona_unicode {
    SP_A,
    SP_AKESI,
    SP_ALA,
    SP_ALASA,
    SP_ALE,
    SP_ANPA,
    SP_ANTE,
    SP_ANU,
    SP_AWEN,
    SP_E,
    SP_EN,
    SP_ESUN,
    SP_IJO,
    SP_IKE,
    SP_ILO,
    SP_INSA,
    SP_JAKI,
    SP_JAN,
    SP_JELO,
    SP_JO,
    SP_KALA,
    SP_KALAMA,
    SP_KAMA,
    SP_KASI,
    SP_KEN,
    SP_KEPEKEN,
    SP_KILI,
    SP_KIWEN,
    SP_KO,
    SP_KON,
    SP_KULE,
    SP_KULUPU,
    SP_KUTE,
    SP_LA,
    SP_LAPE,
    SP_LASO,
    SP_LAWA,
    SP_LEN,
    SP_LETE,
    SP_LI,
    SP_LILI,
    SP_LINJA,
    SP_LIPU,
    SP_LOJE,
    SP_LON,
    SP_LUKA,
    SP_LUKIN,
    SP_LUPA,
    SP_MA,
    SP_MAMA,
    SP_MANI,
    SP_MELI,
    SP_MI,
    SP_MIJE,
    SP_MOKU,
    SP_MOLI,
    SP_MONSI,
    SP_MU,
    SP_MUN,
    SP_MUSI,
    SP_MUTE,
    SP_NANPA,
    SP_NASA,
    SP_NASIN,
    SP_NENA,
    SP_NI,
    SP_NIMI,
    SP_NOKA,
    SP_O,
    SP_OLIN,
    SP_ONA,
    SP_OPEN,
    SP_PAKALA,
    SP_PALI,
    SP_PALISA,
    SP_PAN,
    SP_PANA,
    SP_PI,
    SP_PILIN,
    SP_PIMEJA,
    SP_PINI,
    SP_PIPI,
    SP_POKA,
    SP_POKI,
    SP_PONA,
    SP_PU,
    SP_SAMA,
    SP_SELI,
    SP_SELO,
    SP_SEME,
    SP_SEWI,
    SP_SIJELO,
    SP_SIKE,
    SP_SIN,
    SP_SINA,
    SP_SINPIN,
    SP_SITELEN,
    SP_SONA,
    SP_SOWELI,
    SP_SULI,
    SP_SUNO,
    SP_SUPA,
    SP_SUWI,
    SP_TAN,
    SP_TASO,
    SP_TAWA,
    SP_TELO,
    SP_TENPO,
    SP_TOKI,
    SP_TOMO,
    SP_TU,
    SP_UNPA,
    SP_UTA,
    SP_UTALA,
    SP_WALO,
    SP_WAN,
    SP_WASO,
    SP_WAWA,
    SP_WEKA,
    SP_WILE,
    SP_NAMAKO,
    SP_KIN,
    SP_OKO,
    SP_KIPISI,
    SP_LEKO,
    SP_MONSUTA,
    SP_TONSI,
    SP_JASIMA,
    SP_KIJETESANTAKALU,
    SP_SOKO,
    SP_MESO,
    SP_EPIKU,
    SP_KOKOSILA,
    SP_LANPAN,
    SP_N,
    SP_MISIKEKE,
    SP_KU,
    SP_CARTOUCHE_L,
    SP_CARTOUCHE_R,
};

const uint32_t PROGMEM unicode_map[] = {
    [SP_A]        = 0xF1900,
    [SP_AKESI]    = 0xF1901,
    [SP_ALA]      = 0xF1902,
    [SP_ALASA]    = 0xF1903,
    [SP_ALE]      = 0xF1904,
    [SP_ANPA]     = 0xF1905,
    [SP_ANTE]     = 0xF1906,
    [SP_ANU]      = 0xF1907,
    [SP_AWEN]     = 0xF1908,
    [SP_E]        = 0xF1909,
    [SP_EN]       = 0xF190A,
    [SP_ESUN]     = 0xF190B,
    [SP_IJO]      = 0xF190C,
    [SP_IKE]      = 0xF190D,
    [SP_ILO]      = 0xF190E,
    [SP_INSA]     = 0xF190F,
    [SP_JAKI]     = 0xF1910,
    [SP_JAN]      = 0xF1911,
    [SP_JELO]     = 0xF1912,
    [SP_JO]       = 0xF1913,
    [SP_KALA]     = 0xF1914,
    [SP_KALAMA]   = 0xF1915,
    [SP_KAMA]     = 0xF1916,
    [SP_KASI]     = 0xF1917,
    [SP_KEN]      = 0xF1918,
    [SP_KEPEKEN]  = 0xF1919,
    [SP_KILI]     = 0xF191A,
    [SP_KIWEN]    = 0xF191B,
    [SP_KO]       = 0xF191C,
    [SP_KON]      = 0xF191D,
    [SP_KULE]     = 0xF191E,
    [SP_KULUPU]   = 0xF191F,
    [SP_KUTE]     = 0xF1920,
    [SP_LA]       = 0xF1921,
    [SP_LAPE]     = 0xF1922,
    [SP_LASO]     = 0xF1923,
    [SP_LAWA]     = 0xF1924,
    [SP_LEN]      = 0xF1925,
    [SP_LETE]     = 0xF1926,
    [SP_LI]       = 0xF1927,
    [SP_LILI]     = 0xF1928,
    [SP_LINJA]    = 0xF1929,
    [SP_LIPU]     = 0xF192A,
    [SP_LOJE]     = 0xF192B,
    [SP_LON]      = 0xF192C,
    [SP_LUKA]     = 0xF192D,
    [SP_LUKIN]    = 0xF192E,
    [SP_LUPA]     = 0xF192F,
    [SP_MA]       = 0xF1930,
    [SP_MAMA]     = 0xF1931,
    [SP_MANI]     = 0xF1932,
    [SP_MELI]     = 0xF1933,
    [SP_MI]       = 0xF1934,
    [SP_MIJE]     = 0xF1935,
    [SP_MOKU]     = 0xF1936,
    [SP_MOLI]     = 0xF1937,
    [SP_MONSI]    = 0xF1938,
    [SP_MU]       = 0xF1939,
    [SP_MUN]      = 0xF193A,
    [SP_MUSI]     = 0xF193B,
    [SP_MUTE]     = 0xF193C,
    [SP_NANPA]    = 0xF193D,
    [SP_NASA]     = 0xF193E,
    [SP_NASIN]    = 0xF193F,
    [SP_NENA]     = 0xF1940,
    [SP_NI]       = 0xF1941,
    [SP_NIMI]     = 0xF1942,
    [SP_NOKA]     = 0xF1943,
    [SP_O]        = 0xF1944,
    [SP_OLIN]     = 0xF1945,
    [SP_ONA]      = 0xF1946,
    [SP_OPEN]     = 0xF1947,
    [SP_PAKALA]   = 0xF1948,
    [SP_PALI]     = 0xF1949,
    [SP_PALISA]   = 0xF194A,
    [SP_PAN]      = 0xF194B,
    [SP_PANA]     = 0xF194C,
    [SP_PI]       = 0xF194D,
    [SP_PILIN]    = 0xF194E,
    [SP_PIMEJA]   = 0xF194F,
    [SP_PINI]     = 0xF1950,
    [SP_PIPI]     = 0xF1951,
    [SP_POKA]     = 0xF1952,
    [SP_POKI]     = 0xF1953,
    [SP_PONA]     = 0xF1954,
    [SP_PU]       = 0xF1955,
    [SP_SAMA]     = 0xF1956,
    [SP_SELI]     = 0xF1957,
    [SP_SELO]     = 0xF1958,
    [SP_SEME]     = 0xF1959,
    [SP_SEWI]     = 0xF195A,
    [SP_SIJELO]   = 0xF195B,
    [SP_SIKE]     = 0xF195C,
    [SP_SIN]      = 0xF195D,
    [SP_SINA]     = 0xF195E,
    [SP_SINPIN]   = 0xF195F,
    [SP_SITELEN]  = 0xF1960,
    [SP_SONA]     = 0xF1961,
    [SP_SOWELI]   = 0xF1962,
    [SP_SULI]     = 0xF1963,
    [SP_SUNO]     = 0xF1964,
    [SP_SUPA]     = 0xF1965,
    [SP_SUWI]     = 0xF1966,
    [SP_TAN]      = 0xF1967,
    [SP_TASO]     = 0xF1968,
    [SP_TAWA]     = 0xF1969,
    [SP_TELO]     = 0xF196A,
    [SP_TENPO]    = 0xF196B,
    [SP_TOKI]     = 0xF196C,
    [SP_TOMO]     = 0xF196D,
    [SP_TU]       = 0xF196E,
    [SP_UNPA]     = 0xF196F,
    [SP_UTA]      = 0xF1970,
    [SP_UTALA]    = 0xF1971,
    [SP_WALO]     = 0xF1972,
    [SP_WAN]      = 0xF1973,
    [SP_WASO]     = 0xF1974,
    [SP_WAWA]     = 0xF1975,
    [SP_WEKA]     = 0xF1976,
    [SP_WILE]     = 0xF1977,
    [SP_NAMAKO]   = 0xF1978,
    [SP_KIN]      = 0xF1979,
    [SP_OKO]      = 0xF197A,
    [SP_KIPISI]   = 0xF197B,
    [SP_LEKO]     = 0xF197C,
    [SP_MONSUTA]  = 0xF197D,
    [SP_TONSI]    = 0xF197E,
    [SP_JASIMA]   = 0xF197F,
    [SP_KIJETESANTAKALU] = 0xF1980,
    [SP_SOKO]     = 0xF1981,
    [SP_MESO]     = 0xF1982,
    [SP_EPIKU]    = 0xF1983,
    [SP_KOKOSILA] = 0xF1984,
    [SP_LANPAN]   = 0xF1985,
    [SP_N]        = 0xF1986,
    [SP_MISIKEKE] = 0xF1987,
    [SP_KU]       = 0xF1988,
    [SP_CARTOUCHE_L] = 0xF1990,
    [SP_CARTOUCHE_R] = 0xF1991,
};

const uint16_t SPK_D = UP(SP_TAN, SP_TOMO);
const uint16_t SPA_D = UP(SP_LUKIN, SP_MOKU);
const uint16_t SPK_K = UP(SP_KAMA, SP_KEN);
const uint16_t SPA_K = UP(SP_KEPEKEN, SP_SULI);
const uint16_t SPK_F = UP(SP_MU, SP_SAMA);
const uint16_t SPA_F = UP(SP_TU, SP_ANU);
const uint16_t SPK_J = UP(SP_JAN, SP_PANA);
const uint16_t SPA_J = UP(SP_SOWELI, SP_JO);
const uint16_t SPK_S = UP(SP_SINA, SP_SONA);
const uint16_t SPA_S = UP(SP_SEME, SP_SITELEN);
const uint16_t SPK_L = UP(SP_LI, SP_LA);
const uint16_t SPA_L = UP(SP_LON, SP_LILI);
const uint16_t SPK_A = UP(SP_A, SP_ALA);
const uint16_t SPA_A = UP(SP_ALE, SP_ANTE);
const uint16_t SPK_SCLN = UP(SP_KIN, SP_LAPE);
const uint16_t SPA_SCLN = UP(SP_SIN, SP_LIPU);
const uint16_t SPK_G = UP(SP_TELO, SP_NASA);
const uint16_t SPA_G = UP(SP_PINI, SP_NANPA);
const uint16_t SPK_H = UP(SP_LAWA, SP_KALAMA);
const uint16_t SPA_H = UP(SP_KULUPU, SP_LUKA);
const uint16_t SPK_E = UP(SP_E, SP_PAKALA);
const uint16_t SPA_E = UP(SP_SUNO, SP_EN);
const uint16_t SPK_I = UP(SP_IKE, SP_ILO);
const uint16_t SPA_I = UP(SP_IJO, SP_AWEN);
const uint16_t SPK_R = UP(SP_SEWI, SP_SUWI);
const uint16_t SPA_R = UP(SP_KON, SP_SIKE);
const uint16_t SPK_U = UP(SP_POKA, SP_KASI);
const uint16_t SPA_U = UP(SP_MAMA, SP_MOLI);
const uint16_t SPK_W = UP(SP_WILE, SP_WAN);
const uint16_t SPA_W = UP(SP_WAWA, SP_WEKA);
const uint16_t SPK_O = UP(SP_O, SP_ONA);
const uint16_t SPA_O = UP(SP_OLIN, SP_WASO);
const uint16_t SPK_Q = UP(SP_KUTE, SP_INSA);
const uint16_t SPA_Q = UP(SP_UTALA, SP_KILI);
const uint16_t SPK_P = UP(SP_PONA, SP_PI);
const uint16_t SPA_P = UP(SP_PILIN, SP_PALI);
const uint16_t SPK_T = UP(SP_TOKI, SP_TAWA);
const uint16_t SPA_T = UP(SP_TENPO, SP_TASO);
const uint16_t SPK_Y = UP(SP_POKI, SP_LEN);
const uint16_t SPA_Y = UP(SP_SELI, SP_KALA);
const uint16_t SPK_C = UP(SP_OPEN, SP_KIWEN);
const uint16_t SPA_C = UP(SP_PU, SP_LINJA);
const uint16_t SPK_V = UP(SP_PIMEJA, SP_ALASA);
const uint16_t SPA_V = UP(SP_MANI, SP_MUN);
const uint16_t SPK_M = UP(SP_MI, SP_MUTE);
const uint16_t SPA_M = UP(SP_MA, SP_MUSI);
const uint16_t SPK_X = UP(SP_KO, SP_PIPI);
const uint16_t SPA_X = UP(SP_UTA, SP_SIJELO);
const uint16_t SPK_Z = UP(SP_KULE, SP_PAN);
const uint16_t SPA_Z = UP(SP_UNPA, SP_MELI);
const uint16_t SPK_SLSH = UP(SP_JAKI, SP_ANPA);
const uint16_t SPA_SLSH = UP(SP_KIJETESANTAKALU, SP_ESUN);
const uint16_t SPK_B = UP(SP_AKESI, SP_LOJE);
const uint16_t SPA_B = UP(SP_MONSUTA, SP_PALISA);
const uint16_t SPK_N = UP(SP_NI, SP_NIMI);
const uint16_t SPA_N = UP(SP_NASIN, SP_N);
const uint16_t SPK_3 = UP(SP_SUPA, SP_LETE);
const uint16_t SPA_3 = UP(SP_MIJE, SP_NOKA);
const uint16_t SPK_4 = UP(SP_LASO, SP_TONSI);
const uint16_t SPA_4 = UP(SP_WALO, SP_NENA);
const uint16_t SPK_TAB = UP(SP_JELO, SP_SINPIN);
const uint16_t SPA_TAB = UP(SP_EPIKU, SP_OKO);
const uint16_t SPK_MINS = UP(SP_KU, SP_LUPA);
const uint16_t SPA_MINS = UP(SP_SELO, SP_LEKO);
const uint16_t SPK_2 = UP(SP_NAMAKO, SP_KIPISI);
const uint16_t SPA_2 = UP(SP_LANPAN, SP_MONSI);
const uint16_t SPK_5 = UP(SP_SOKO, SP_MESO);
const uint16_t SPA_5 = UP(SP_MISIKEKE, SP_JASIMA);
const uint16_t SPK_1 = UP(SP_KOKOSILA, SP_CARTOUCHE_L);
const uint16_t SPA_1 = SP_CARTOUCHE_R;

#endif  // shnob_sitelen_pona_h
