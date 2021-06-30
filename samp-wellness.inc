// built-in include guard removal
// just in case the user has a local dependency with the same file name
#if defined _inc_bodywellness
	#undef _inc_bodywellness
#endif
// custom include-guard to ensure we don't duplicate
#if defined _bodywellness_included
	#endinput
#endif
#define _bodywellness_included

//Includes
#include <a_samp>

// Variables
static
    Float:HungerReduceAmount = 0.5,
    Float:EnergyReduceAmount = 0.5    
;

enum E_BODY_WELLNESS
{
    Float:Hunger,
    Float:Energy,
    Float:Hungry,
    Float:Thristy
};

static BodyWellness[MAX_PLAYERS][E_BODY_WELLNESS];

//Function Prototype
forward OnPlayerUpdateWellness(playerid);

stock Float:GetPlayerHunger(playerid)
{
    return BodyWellness[playerid][Hunger];
}

stock Float:GetPlayerEnergy(playerid)
{
    return BodyWellness[playerid][Energy];
}

// Standart Function
stock UpdatePlayerHunger(playerid, Float:amount, bool:count = false)
{ 
    if(!IsPlayerConnected(playerid))
        return 0;
        
    if(count) BodyWellness[playerid][Hunger] += amount;
    else BodyWellness[playerid][Hunger] = amount;

    if(BodyWellness[playerid][Hunger] >= 100)
    {
        BodyWellness[playerid][Hunger] = 100;
    }
    else if(BodyWellness[playerid][Hunger] <= 0)
    {
        BodyWellness[playerid][Hunger] = 0;
    }
    return 1;
}

stock SetPlayerHunger(playerid, Float:amount, bool:count)
{
    if(!IsPlayerConnected(playerid))
        return 0;

    UpdatePlayerHunger(playerid, amount, increase);
    return 1;
}

stock UpdatePlayerEnergy(playerid, Float:amount, bool:count)
{ 
    if(!IsPlayerConnected(playerid))
        return 0;
        
    if(count) BodyWellness[playerid][Energy] += amount;
    else BodyWellness[playerid][Energy] = amount;

    if(BodyWellness[playerid][Energy] >= 100)
    {
        BodyWellness[playerid][Energy] = 100;
    }
    else if(BodyWellness[playerid][Energy] <= 0)
    {
        BodyWellness[playerid][Energy] = 0;
    }
    return 1;
}

stock SetPlayerEnergy(playerid, Float:amount, bool:count)
{
    if(!IsPlayerConnected(playerid))
        return 0;

    UpdatePlayerEnergy(playerid, amount, count);
    return 1;
}

stock SetPlayerHungryTrigger(playerid, Float:amount)
{
    if(!IsPlayerConnected(playerid))
        return 0;

    BodyWellness[playerid][Hungry] = amount;
    return 1;
}

stock Float:GetPlayerHungryTrigger(playerid)
{
    return BodyWellness[playerid][Hungry];
}

stock Float:GetPlayerThristyTrigger(playerid)
{
    return BodyWellness[playerid][Thristy];
}

stock SetPlayerThristyTrigger(playerid, Float:amount)
{
    if(!IsPlayerConnected(playerid))
        return 0;

    BodyWellness[playerid][Thristy] = amount;
    return 1;
}

stock IsPlayerHungry(playerid)
{
    if(!IsPlayerConnected(playerid))
        return 0;

    new Float:trigger = GetPlayerHungryTrigger(playerid);

    if(BodyWellness[playerid][Hunger] <= trigger)
        return 1;

    return 0;
}

stock IsPlayerThirsty(playerid)
{
    if(!IsPlayerConnected(playerid))
        return 0;

    new Float:trigger = GetPlayerThirstyTrigger(playerid);

    if(BodyWellness[playerid][Thristy] <= trigger)
        return 1;
        
    return 0;
}

stock SetHungerReduceAmount(Float:amount)
{
    return HungerReduceAmount = amount;
}

stock GetHungerReduceAmount()
{
    return HungerReduceAmount;
}

stock SetEnergyReduceAmount(Float:amount)
{
    return EnergyReduceAmount = amount;
}

stock GetEnergyReduceAmount()
{
    return EnergyReduceAmount;
}

ptask Player_WellnessUpdate[1000](playerid)
{
    if(!IsPlayerConnected(playerid))
        return 0;
    

    SetPlayerHunger(playerid, -HungerReduceAmount, true);
    SetPlayerEnergy(playerid, -EnergyReduceAmount, true);

    CallRemoteFunction("OnPlayerUpdateWellness", "d", playerid);
    return 1;
}
