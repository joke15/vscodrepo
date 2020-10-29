#include "keyboardmapper.h"
#include "keysymdef.h"
#include <iostream>
struct keymap_t
{
    unsigned int keysym;
    unsigned char vk;
    bool extended;
};

const keymap_t keymap[] = {

    // TTY functions
    {XK_Caps_Lock, VK_CAPITAL, 0},
    {XK_BackSpace, VK_BACK, 0},
    {XK_Tab, VK_TAB, 0},
    {XK_Clear, VK_CLEAR, 0},
    {XK_Return, VK_RETURN, 0},
    {XK_Pause, VK_PAUSE, 0},
    {XK_Escape, VK_ESCAPE, 0},
    {XK_Delete, VK_DELETE, 1},

    // Japanese stuff - almost certainly wrong...
    {XK_Kanji, VK_KANJI, 0},
    {XK_Kana_Shift, VK_KANA, 0},

    // Cursor control & motion

    {XK_Home, VK_HOME, 1},
    {XK_Left, VK_LEFT, 1},
    {XK_Up, VK_UP, 1},
    {XK_Right, VK_RIGHT, 1},
    {XK_Down, VK_DOWN, 1},
    {XK_Page_Up, VK_PRIOR, 1},
    {XK_Page_Down, VK_NEXT, 1},
    {XK_End, VK_END, 1},

    // Misc functions

    {XK_Select, VK_SELECT, 0},
    {XK_Print, VK_SNAPSHOT, 0},
    {XK_Execute, VK_EXECUTE, 0},
    {XK_Insert, VK_INSERT, 1},
    {XK_Help, VK_HELP, 0},
    {XK_Break, VK_CANCEL, 1},

    // Keypad Functions, keypad numbers

    {XK_KP_Space, VK_SPACE, 0},
    {XK_KP_Tab, VK_TAB, 0},
    {XK_KP_Enter, VK_RETURN, 1},
    {XK_KP_F1, VK_F1, 0},
    {XK_KP_F2, VK_F2, 0},
    {XK_KP_F3, VK_F3, 0},
    {XK_KP_F4, VK_F4, 0},
    {XK_KP_Home, VK_HOME, 0},
    {XK_KP_Left, VK_LEFT, 0},
    {XK_KP_Up, VK_UP, 0},
    {XK_KP_Right, VK_RIGHT, 0},
    {XK_KP_Down, VK_DOWN, 0},
    {XK_KP_End, VK_END, 0},
    {XK_KP_Page_Up, VK_PRIOR, 0},
    {XK_KP_Page_Down, VK_NEXT, 0},
    {XK_KP_Begin, VK_CLEAR, 0},
    {XK_KP_Insert, VK_INSERT, 0},
    {XK_KP_Delete, VK_DELETE, 0},
    // XXX XK_KP_Equal should map in the same way as ascii '='
    {XK_KP_Multiply, VK_MULTIPLY, 0},
    {XK_KP_Add, VK_ADD, 0},
    {XK_KP_Separator, VK_SEPARATOR, 0},
    {XK_KP_Subtract, VK_SUBTRACT, 0},
    {XK_KP_Decimal, VK_DECIMAL, 0},
    {XK_KP_Divide, VK_DIVIDE, 1},

    {XK_KP_0, VK_NUMPAD0, 0},
    {XK_KP_1, VK_NUMPAD1, 0},
    {XK_KP_2, VK_NUMPAD2, 0},
    {XK_KP_3, VK_NUMPAD3, 0},
    {XK_KP_4, VK_NUMPAD4, 0},
    {XK_KP_5, VK_NUMPAD5, 0},
    {XK_KP_6, VK_NUMPAD6, 0},
    {XK_KP_7, VK_NUMPAD7, 0},
    {XK_KP_8, VK_NUMPAD8, 0},
    {XK_KP_9, VK_NUMPAD9, 0},

    // Auxilliary Functions

    {XK_F1, VK_F1, 0},
    {XK_F2, VK_F2, 0},
    {XK_F3, VK_F3, 0},
    {XK_F4, VK_F4, 0},
    {XK_F5, VK_F5, 0},
    {XK_F6, VK_F6, 0},
    {XK_F7, VK_F7, 0},
    {XK_F8, VK_F8, 0},
    {XK_F9, VK_F9, 0},
    {XK_F10, VK_F10, 0},
    {XK_F11, VK_F11, 0},
    {XK_F12, VK_F12, 0},
    {XK_F13, VK_F13, 0},
    {XK_F14, VK_F14, 0},
    {XK_F15, VK_F15, 0},
    {XK_F16, VK_F16, 0},
    {XK_F17, VK_F17, 0},
    {XK_F18, VK_F18, 0},
    {XK_F19, VK_F19, 0},
    {XK_F20, VK_F20, 0},
    {XK_F21, VK_F21, 0},
    {XK_F22, VK_F22, 0},
    {XK_F23, VK_F23, 0},
    {XK_F24, VK_F24, 0},

    // Modifiers

    {XK_Shift_L, VK_SHIFT, 0},
    {XK_Shift_R, VK_RSHIFT, 0},
    {XK_Control_L, VK_CONTROL, 0},
    {XK_Control_R, VK_CONTROL, 1},
    {XK_Alt_L, VK_MENU, 0},
    {XK_Alt_R, VK_RMENU, 1},

    // Left & Right Windows keys & Windows Menu Key

    {XK_Super_L, VK_LWIN, 0},
    {XK_Super_R, VK_RWIN, 0},
    {XK_Menu, VK_APPS, 0},

};

struct keymap_web
{
    unsigned int webkey;
    unsigned int winkey;
};

const keymap_web keymapweb[] = {
    {0x70, XK_F1},
    {0x71, XK_F2},
    {0x72, XK_F3},
    {0x73, XK_F4},
    {0x74, XK_F5},
    {0x75, XK_F6},
    {0x76, XK_F7},
    {0x77, XK_F8},
    {0x78, XK_F9},
    {0x79, XK_F10},
    {0x7a, XK_F11},
    {0x7b, XK_F12},
    {0x7c, XK_F13},
    {0x7d, XK_F14},
    {0x7e, XK_F15},
    {0x7f, XK_F16},
    {0x80, XK_F17},
    {0x81, XK_F18},
    {0x82, XK_F19},
    {0x83, XK_F20},
    {0x84, XK_F21},
    {0x85, XK_F22},
    {0x86, XK_F23},
    {0x87, XK_F24},

    {0x60, XK_KP_0},
    {0x61, XK_KP_1},
    {0x62, XK_KP_2},
    {0x63, XK_KP_3},
    {0x64, XK_KP_4},
    {0x65, XK_KP_5},
    {0x66, XK_KP_6},
    {0x67, XK_KP_7},
    {0x68, XK_KP_8},
    {0x69, XK_KP_9},
    {0x6F, XK_KP_Divide},
    {0x0C, XK_KP_Equal},
    {0x6A, XK_KP_Multiply},
    {0x6D, XK_KP_Subtract},
    {0x6E, XK_KP_Decimal},
    {0x6B, XK_KP_Add},

    {0x21, XK_Page_Up},
    {0x22, XK_Page_Down},
    {0x23, XK_End},
    {0x24, XK_Home},
    {0x25, XK_Left},
    {0x26, XK_Up},
    {0x27, XK_Right},
    {0x28, XK_Down},
    {0x2E, XK_Delete},
    {0x2D, XK_Insert},

    {0x91, XK_Scroll_Lock},
    {0x13, XK_Pause},
    {0x2C, XK_Print},

    {0xBD, XK_minus},
    {0xBB, XK_equal},
    {0xDB, XK_bracketleft},
    {0xDD, XK_bracketright},
    {0xDC, XK_backslash},
    {0xBA, XK_semicolon},
    {0xDE, XK_apostrophe},
    {0xBC, XK_comma},
    {0xBE, XK_period},
    {0xBF, XK_slash},
    {0xC0, XK_grave},
};

struct codemap_t
{
    const char* code;
    unsigned int keysym;
};

const codemap_t codemap[] = {
    {"Escape", XK_Escape},
    {"Digit0", XK_0},
    {"Digit1", XK_1},
    {"Digit2", XK_2},
    {"Digit3", XK_3},
    {"Digit4", XK_4},
    {"Digit5", XK_5},
    {"Digit6", XK_6},
    {"Digit7", XK_7},
    {"Digit8", XK_8},
    {"Digit9", XK_9},
    {"Minus", XK_minus},
    {"Equal", XK_equal},
    {"Backspace", XK_BackSpace},
    {"Tab", XK_Tab},
    {"KeyA", XK_a},
    {"KeyB", XK_b},
    {"KeyC", XK_c},
    {"KeyD", XK_d},
    {"KeyE", XK_e},
    {"KeyF", XK_f},
    {"KeyG", XK_g},
    {"KeyH", XK_h},
    {"KeyI", XK_i},
    {"KeyJ", XK_j},
    {"KeyK", XK_k},
    {"KeyL", XK_l},
    {"KeyM", XK_m},
    {"KeyN", XK_n},
    {"KeyO", XK_o},
    {"KeyP", XK_p},
    {"KeyQ", XK_q},
    {"KeyR", XK_r},
    {"KeyS", XK_s},
    {"KeyT", XK_t},
    {"KeyU", XK_u},
    {"KeyV", XK_v},
    {"KeyW", XK_w},
    {"KeyX", XK_x},
    {"KeyY", XK_y},
    {"KeyZ", XK_z},
    {"BracketLeft", XK_bracketleft},
    {"BracketRight", XK_bracketright},
    {"Enter", XK_Return},
    {"ControlLeft", XK_Control_L},
    {"Semicolon", XK_semicolon},
    {"Quote", XK_quoteright},
    {"Backquote", XK_quoteleft},
    {"ShiftLeft", XK_Shift_L},
    {"Backslash", XK_backslash},
    {"Comma", XK_comma},
    {"Period", XK_period},
    {"Slash", XK_slash},
    {"ShiftRight", XK_Shift_R},
    {"NumpadMultiply", XK_KP_Multiply},
    {"AltLeft", XK_Alt_L},
    {"Space", XK_space},
    {"CapsLock", XK_Caps_Lock},
    {"F1", XK_F1},
    {"F2", XK_F2},
    {"F3", XK_F3},
    {"F4", XK_F4},
    {"F5", XK_F5},
    {"F6", XK_F6},
    {"F7", XK_F7},
    {"F8", XK_F8},
    {"F9", XK_F9},
    {"F10", XK_F10},
    {"F11", XK_F11},
    {"F12", XK_F12},
    {"F13", XK_F13},
    {"F14", XK_F14},
    {"F15", XK_F15},
    {"F16", XK_F16},
    {"F17", XK_F17},
    {"F18", XK_F18},
    {"F19", XK_F19},
    {"F20", XK_F20},
    {"F21", XK_F21},
    {"F22", XK_F22},
    {"F23", XK_F23},
    {"F24", XK_F24},
    {"Pause", XK_Pause},
    {"ScrollLock", XK_Scroll_Lock},
    {"PrintScreen", XK_Print},
    {"Numpad0", XK_KP_0},
    {"Numpad1", XK_KP_1},
    {"Numpad2", XK_KP_2},
    {"Numpad3", XK_KP_3},
    {"Numpad4", XK_KP_4},
    {"Numpad5", XK_KP_5},
    {"Numpad6", XK_KP_6},
    {"Numpad7", XK_KP_7},
    {"Numpad8", XK_KP_8},
    {"Numpad9", XK_KP_9},
    {"NumpadSubtract", XK_KP_Subtract},
    {"NumpadAdd", XK_KP_Add},
    {"NumpadDecimal", XK_KP_Decimal},
    {"NumpadEnter", XK_Return},
    {"ControlRight", XK_Control_R},
    {"NumpadDivide", XK_KP_Divide},
    {"NumLock", XK_Num_Lock},
    {"PageUp", XK_Page_Up},
    {"PageDown", XK_Page_Down},
    {"End", XK_End},
    {"Home", XK_Home},
    {"ArrowLeft", XK_Left},
    {"ArrowUp", XK_Up},
    {"ArrowRight", XK_Right},
    {"ArrowDown", XK_Down},
    {"Delete", XK_Delete},
    {"Insert", XK_Insert},
    {"MetaLeft", XK_Super_L},
    {"MetaRight", XK_Super_R},
};

KeyBoardMapper::KeyBoardMapper()
{
    InitKeyMapper();
}

void KeyBoardMapper::InitKeyMapper()
{
    for (int i = 0; i < sizeof(keymap) / sizeof(keymap_t); i++)
    {
        vkMap[keymap[i].keysym] = keymap[i].vk;
    }
    for (int i = 0; i < sizeof(codemap) / sizeof(codemap_t); i++)
    {
        std::cout << "wcMap[" << codemap[i].code << "] = " << codemap[i].keysym << std::endl;
        wcMap[std::string(codemap[i].code)] = codemap[i].keysym;
    }
}

BYTE KeyBoardMapper::GetKeyCode(unsigned int keysym)
{
    if ((keysym >= 32 && keysym <= 126) ||
        (keysym >= 160 && keysym <= 255))
    {
        SHORT s = VkKeyScan(keysym);
        BYTE vkCode = LOBYTE(s);
        return vkCode;
    }
    else
    {
        if (vkMap.find(keysym) == vkMap.end())
        {
            return keysym;
        }
        BYTE vkCode = vkMap[keysym];
        return vkCode;
    }
}

unsigned int KeyBoardMapper::ConvertKeyCode(std::string keyCode)
{
    if (wcMap.find(keyCode) == wcMap.end())
    {
        std::cout << "failed to find keycode" << std::endl;
        return 0;
    }
    else
    {
        return wcMap[keyCode];
    }
}