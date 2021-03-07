#define FILTERSCRIPT

#include <a_samp>
#include <samp-wellness>

public OnFilterScriptInit()
{
    return 1;
}

public OnFilterScriptExit()
{
    return 1;
}

public OnPlayerConnect(playerid)
{
    SetPlayerHungryTrigger(playerid, 10);
    SetPlayerThirstyTrigger(playerid, 10);
    return 1;
}

public OnPlayerUpdateWellness(playerid)
{
    new 
        Float:hunger = GetPlayerHunger(playerid), 
        Float:energy = GetPlayerEnergy(playerid)
    ;
    printf("Player Hunger : %d || Player Energy : %d", hunger, energy);
    return 1;
}