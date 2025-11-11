import string

words_and_freqs = {
    "anu": 86580,
    "tan": 152389,
    "pan": 22013,
    "nasa": 68333,
    "tawa": 367950,
    "lili": 131947,
    "walo": 13151,
    "anpa": 19906,
    "la": 491816,
    "sama": 95031,
    "wan": 79477,
    "lete": 15875,
    "monsi": 8323,
    "jasima": 4151,
    "luka": 62983,
    "ala": 433648,
    "meso": 4789,
    "ale": 129190,
    "lipu": 69580,
    "selo": 10231,
    "ku": 10892,
    "wile": 213866,
    "ante": 101580,
    "e": 942205,
    "lape": 74006,
    "len": 27946,
    "tomo": 109077,
    "jaki": 20420,
    "sin": 70103,
    "seme": 227296,
    "en": 59078,
    "pini": 67642,
    "kama": 246672,
    "kepeken": 115601,
    "lukin": 107636,
    "poki": 28083,
    "nanpa": 65406,
    "ona": 292678,
    "weka": 57236,
    "kute": 30393,
    "suno": 59350,
    "mije": 15214,
    "akesi": 18862,
    "moli": 33205,
    "toki": 629318,
    "kon": 41251,
    "kule": 22171,
    "kiwen": 25464,
    "uta": 22667,
    "kulupu": 63273,
    "kokosila": 2882,
    "mute": 260177,
    "ilo": 115252,
    "jo": 81432,
    "nimi": 174573,
    "olin": 37917,
    "palisa": 16354,
    "o": 396994,
    "kalama": 63899,
    "suwi": 48614,
    "ko": 23422,
    "nena": 12878,
    "sike": 39802,
    "sinpin": 12523,
    "kipisi": 8431,
    "poka": 38352,
    "tenpo": 241390,
    "awen": 55615,
    "pu": 25173,
    "pimeja": 24872,
    "kili": 29503,
    "mani": 24007,
    "laso": 14301,
    "wawa": 79084,
    "pilin": 150973,
    "kijetesantakalu": 19570,
    "ni": 621972,
    "meli": 20829,
    "linja": 25074,
    "leko": 9315,
    "unpa": 20955,
    "mi": 1153592,
    "lupa": 10328,
    "nasin": 92946,
    "tonsi": 14088,
    "pali": 130862,
    "misikeke": 4551,
    "seli": 27177,
    "utala": 29617,
    "jelo": 12542,
    "sina": 424460,
    "supa": 16290,
    "pana": 84435,
    "jan": 400879,
    "sona": 296715,
    "kasi": 36254,
    "mu": 97362,
    "a": 793411,
    "esun": 18967,
    "n": 71093,
    "epiku": 11640,
    "ijo": 99701,
    "alasa": 24712,
    "noka": 14363,
    "namako": 9296,
    "pakala": 61827,
    "li": 1238778,
    "pona": 696800,
    "waso": 32894,
    "pi": 363590,
    "loje": 17466,
    "soko": 7099,
    "suli": 99534,
    "sewi": 51025,
    "telo": 69335,
    "sijelo": 22652,
    "kin": 76763,
    "ken": 240581,
    "lanpan": 8417,
    "lawa": 64092,
    "taso": 183277,
    "insa": 30373,
    "soweli": 82444,
    "sitelen": 130759,
    "mun": 23430,
    "oko": 11237,
    "ma": 148972,
    "moku": 103424,
    "monsuta": 17466,
    "pipi": 22911,
    "kala": 25915,
    "mama": 33240,
    "open": 25915,
    "musi": 143657,
    "ike": 140001,
    "tu": 93303,
    "lon": 480668,
    "cartouche_l": 2,
    "cartouche_r": 1,
}

words_in_order = sorted(words_and_freqs, key=words_and_freqs.get, reverse=True)

# Keys in order of ease of use
keys_in_order = [
    'd',
    'k',
    'f',
    'j',
    's',
    'l',
    'a',
    'g',
    'h',
    'e',
    'i',
    'r',
    'u',
    'w',
    'o',
    'q',
    'p',
    't',
    'y',
    'c',
    'v',
    'm',
    'x',
    'z',
    'b',
    'n',
    '3',
    '4',
    'tab',
    'mins',
    '2',
    '5',
    'del',
    'ins',
    '1',
]

# Init keys map
keys: dict[str, tuple[str | None, str | None, str | None, str | None]] = {}
for key in keys_in_order:
    # key on board -> (unmodded, shift, alt, shift+alt)
    keys[key] = (None, None, None, None)

def print_keys_nice():
    for key in keys:
        print(f'{key:4} -> {keys[key][0] or '-':20}{keys[key][1] or '-':20}{keys[key][2] or '-':20}{keys[key][3] or '-':20}')

# Helper function that attemps to place a word into the next open slot of a key tuple.
# Returns new key tuple if successful, None if unsuccessful.
def place_into_key(key: tuple[str | None, str | None, str | None, str | None], word: str) -> tuple[str | None, str | None, str | None, str | None] | None:
    if not key[0]:
        return (word, key[1], key[2], key[3])
    elif not key[1]:
        return (key[0], word, key[2], key[3])
    elif not key[2]:
        return (key[0], key[1], word, key[3])
    elif not key[3]:
        return (key[0], key[1], key[2], word)
    else:
        return None

placed_words: set[str] = set()

# First pass
for word in words_in_order:
    def place_word():
        for i, letter in enumerate(word):
            if i >= 1: break # Number of letters to search before we give up on letter matching
            placement = place_into_key(keys[letter], word)
            if placement:
                keys[letter] = placement
                placed_words.add(word)
                return

        # At this point, the word hasn't been placed because all of it's letters have been taken.
        # We will assign it's key to the easiest key to press
        for key in keys_in_order:
            placement = place_into_key(keys[key], word)
            if placement:
                keys[key] = placement
                placed_words.add(word)
                return

    place_word()

print_keys_nice()

def print_keys_config():
    for key in keys:
        def format(key):
            return f'{(f"UM(SP_{key})").upper() if key else '_______'}'

        for i in range(4):
            print(f'const uint16_t SP{i}_{key.upper()} = {format(keys[key][i])};')

print_keys_config()
