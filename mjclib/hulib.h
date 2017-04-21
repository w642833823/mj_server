#pragma once

struct Wave
{
};

struct HuInfo
{
    bool eye;
    HuInfo()
    {
        eye = false;
    }
};

class HuLib
{
    static bool get_hu_info(char* const hand_cards, Wave* const waves, char self_card, char other_card);
    static bool check_zi(char* const hand_cards, HuInfo& info);
    static bool check_chi(char* const hand_cards, HuInfo& info, int min);
    static bool check_sub(char* const cards, int n, HuInfo& info);
    static bool check_wave(char* cards, int num);
    static bool check_wave_and_eye(char* cards, int num);
};