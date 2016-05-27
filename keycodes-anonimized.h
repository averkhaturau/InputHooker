#pragma once

const char* vKeyCodesAnonimized[] = {
    "Undefined",
    "Left mouse button",
    "Right mouse button",
    "Control - break processing",
    "Middle mouse button",
    "X1 mouse button",
    "X2 mouse button",
    "Undefined", // 0x07
    "BACKSPACE key",
    "TAB key",
    "Reserved", // 0x0a
    "Reserved", // 0x0b
    "CLEAR key",
    "ENTER key",
    "Undefined", // 0x0e
    "Undefined", // 0x0f
    "SHIFT key",
    "CTRL key",
    "ALT key",
    "PAUSE key",
    "CAPS LOCK key",
    "IME Kana | Hangul | Hanguel mode",
    "Undefined",
    "IME Junja mode",
    "IME final mode",
    "IME Hanja | Kanji mode",
    "Undefined",
    "ESC key",
    "IME convert",
    "IME nonconvert",
    "IME accept",
    "IME mode change request",
    "SPACEBAR",
    "PAGE UP key",
    "PAGE DOWN key",
    "END key",
    "HOME key",
    "LEFT ARROW key",
    "UP ARROW key",
    "RIGHT ARROW key",
    "DOWN ARROW key",
    "SELECT key",
    "PRINT key",
    "EXECUTE key",
    "PRINT SCREEN key",
    "INS key",
    "DEL key",
    "HELP key",
    "digit in right side", // 0
    "digit in left side",  // 1
    "digit in left side",  // 2
    "digit in left side",  // 3
    "digit in center",     // 4
    "digit in center",     // 5
    "digit in center",     // 6
    "digit in center",     // 7
    "digit in right side", // 8
    "digit in right side", // 9
    "Undefined", // 0x3a
    "Undefined", // 0x3b
    "Undefined", // 0x3c
    "Undefined", // 0x3d
    "Undefined", // 0x3e
    "Undefined", // 0x3f
    "Undefined", // 0x40
    "letter in left - middle",     // A
    "letter in center - bottom",     // B
    "letter in left - bottom",     // C
    "letter in left - middle",     // D
    "letter in left - top",     // E
    "letter in center - middle",     // F
    "letter in center - middle",     // G
    "letter in center - middle",     // H
    "letter in right - top",     // I
    "letter in center - middle",     // J
    "letter in right - center",     // K
    "letter in right - center",     // L
    "letter in right - bottom",     // M
    "letter in center - bottom",     // N
    "letter in right - top",     // O
    "letter in right - top",     // P
    "letter in left - top",     // Q
    "letter in left - top",     // R
    "letter in left - middle",     // S
    "letter in center - top",     // T
    "letter in center - top",     // U
    "letter in center - bottom",     // V
    "letter in left - top",     // W
    "letter in left - bottom",     // X
    "letter in center - top",     // Y
    "letter in left - bottom",     // Z
    "Left Windows key",
    "Right Windows key",
    "Context Menu key",
    "Reserved",
    "Computer Sleep key",
    "Numeric keypad key", // 0
    "Numeric keypad key", // 1
    "Numeric keypad key", // 2
    "Numeric keypad key", // 3
    "Numeric keypad key", // 4
    "Numeric keypad key", // 5
    "Numeric keypad key", // 6
    "Numeric keypad key", // 7
    "Numeric keypad key", // 8
    "Numeric keypad key", // 9
    "Multiply key",
    "Add key",
    "Separator key",
    "Subtract key",
    "Decimal key",
    "Divide key",
    "F1 key",
    "F2 key",
    "F3 key",
    "F4 key",
    "F5 key",
    "F6 key",
    "F7 key",
    "F8 key",
    "F9 key",
    "F10 key",
    "F11 key",
    "F12 key",
    "F13 key",
    "F14 key",
    "F15 key",
    "F16 key",
    "F17 key",
    "F18 key",
    "F19 key",
    "F20 key",
    "F21 key",
    "F22 key",
    "F23 key",
    "F24 key",
    "Unassigned", //0x88
    "Unassigned", //0x89
    "Unassigned", //0x8a
    "Unassigned", //0x8b
    "Unassigned", //0x8c
    "Unassigned", //0x8d
    "Unassigned", //0x8e
    "Unassigned", //0x8f
    "NUM LOCK key",
    "SCROLL LOCK key",
    "OEM specific", //0x92
    "OEM specific", //0x93
    "OEM specific", //0x94
    "OEM specific", //0x95
    "OEM specific", //0x96
    "Unassigned", // 0x97
    "Unassigned", // 0x98
    "Unassigned", // 0x99
    "Unassigned", // 0x9a
    "Unassigned", // 0x9b
    "Unassigned", // 0x9c
    "Unassigned", // 0x9d
    "Unassigned", // 0x9e
    "Unassigned", // 0x9f
    "Left SHIFT key",
    "Right SHIFT key",
    "Left CONTROL key",
    "Right CONTROL key",
    "Left MENU key",
    "Right MENU key",
    "Browser Back key",
    "Browser Forward key",
    "Browser Refresh key",
    "Browser Stop key",
    "Browser Search key",
    "Browser Favorites key",
    "Browser Start and Home key",
    "Volume Mute key",
    "Volume Down key",
    "Volume Up key",
    "Next Track key",
    "Previous Track key",
    "Stop Media key",
    "Play / Pause Media key",
    "Start Mail key",
    "Select Media key",
    "Start Application 1 key",
    "Start Application 2 key",
    "Reserved", // 0xB8
    "Reserved", // 0xB9
    "letter in right - middle", // ";:"
    "+",
    ",",
    "-",
    ".",
    "key in right - bottom", // /?
    "key in left - top", // `~
    "Reserved", // 0xC1
    "Reserved", // 0xC2
    "Reserved", // 0xC3
    "Reserved", // 0xC4
    "Reserved", // 0xC5
    "Reserved", // 0xC6
    "Reserved", // 0xC7
    "Reserved", // 0xC8
    "Reserved", // 0xC9
    "Reserved", // 0xCa
    "Reserved", // 0xCb
    "Reserved", // 0xCc
    "Reserved", // 0xCd
    "Reserved", // 0xCe
    "Reserved", // 0xCf
    "Reserved", // 0xd0
    "Reserved", // 0xd1
    "Reserved", // 0xd2
    "Reserved", // 0xd3
    "Reserved", // 0xd4
    "Reserved", // 0xd5
    "Reserved", // 0xd6
    "Reserved", // 0xd7
    "Unassigned", //0xD8
    "Unassigned", //0xD9
    "Unassigned", //0xDa
    "key in right - top", // [{
    "key in right - middle", // \|
    "key in right - top", // ]}
    "key in right - middle", // '"
    "Used for miscellaneous characters; it can vary by keyboard.",
    "Reserved", // 0xE0
    "OEM specific", //0xE1
    "\\", //"Either the angle bracket key or the backslash key on the RT 102 - key keyboard"
    "OEM specific", // 0xE3
    "OEM specific", // 0xE4
    "IME PROCESS key",
    "OEM specific",
    "Unicode carachter", // "Used to pass Unicode characters as if they were keystrokes.The VK_PACKET key is the low word of a 32 - bit Virtual Key value used for non - keyboard input methods. For more information, see Remark in KEYBDINPUT, SendInput, WM_KEYDOWN, and WM_KEYUP",
    "Unassigned",
    "OEM specific", //0xE9
    "OEM specific", //0xEa
    "OEM specific", //0xEb
    "OEM specific", //0xEc
    "OEM specific", //0xEd
    "OEM specific", //0xEe
    "OEM specific", //0xEf
    "OEM specific", //0xF0
    "OEM specific", //0xF1
    "OEM specific", //0xF2
    "OEM specific", //0xF3
    "OEM specific", //0xF4
    "OEM specific", //0xF5
    "Attn key",
    "CrSel key",
    "ExSel key",
    "Erase EOF key",
    "Play key",
    "Zoom key",
    "Reserved",
    "PA1 key",
    "Clear key" // 0xFE
};
