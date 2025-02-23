//=============================================================================
// H7AiUtilityHeAbilityShadowCloak
//=============================================================================
// Buff. Positive. Target friendly creature stack gets a buff which lasts for 
// the creature's next 3 turns.
// Buff effect: The next attack(s) (melee, ranged, retaliation or hero attack) 
// automatically miss the creature (dealing no damage and triggering no effects).
// The attacked creature still retaliates with the normal rules.
// If an attack has more than one strike each is counted separatly. (e.g. a 
// creature which attacks and triggers cleave removes two chareges with one attack)
// When no charges are left the buff will end prematurely.
//    Unskilled:1
//    Novice: 1
//    Expert: 2
//    Master : 2
//=============================================================================
// Copyright 2013-2015 Limbic Entertainment All Rights Reserved.
//=============================================================================
class H7AiUtilityHeAbilityShadowCloak extends H7AiUtilityCombiner;

var protected H7AiUtilitySpellTargetCheck   mUSpellTargetCheck;
var protected H7AiUtilityCreatureStrength   mUCreatureStrength;
var protected H7AiUtilityCreatureCanBeAttacked mUCreatureCanBeAttacked;

/// overrides ...
function UpdateInput()
{
	local array<float> uSpellCheck;
	local array<float> uCreatureStrength;
	local array<float> uCreatureCanBeAttacked;

	if(mUSpellTargetCheck==None) { mUSpellTargetCheck = new class'H7AiUtilitySpellTargetCheck'; }
	if(mUCreatureStrength==None) { mUCreatureStrength = new class'H7AiUtilityCreatureStrength'; }
	if(mUCreatureCanBeAttacked==None) { mUCreatureCanBeAttacked = new class'H7AiUtilityCreatureCanBeAttacked'; }

	mInValues.Remove(0,mInValues.Length);

	mUCreatureCanBeAttacked.UpdateInput();
	mUCreatureCanBeAttacked.UpdateOutput();
	uCreatureCanBeAttacked = mUCreatureCanBeAttacked.GetOutValues();
	if(uCreatureCanBeAttacked.Length>0 && uCreatureCanBeAttacked[0]<=0.0f) // target can be attacked by an enemy creature in its next turn (= is in range)
	{
		return;
	}

	mUSpellTargetCheck.UpdateInput();
	mUSpellTargetCheck.UpdateOutput();
	uSpellCheck = mUSpellTargetCheck.GetOutValues();
	if(uSpellCheck.Length>0 && uSpellCheck[0]>0.0f)
	{
		mUCreatureStrength.UpdateInput();
		mUCreatureStrength.UpdateOutput();
		uCreatureStrength = mUCreatureStrength.GetOutValues();
		if(uCreatureStrength.Length>0 && uCreatureStrength[0]>0.0f)
		{   
			mInValues.AddItem(uSpellCheck[0]*uCreatureStrength[0]);
		}
	}
}


function UpdateOutput()
{
	ApplyFunction();
	ApplyOutputWeigth();
}

/// functions

