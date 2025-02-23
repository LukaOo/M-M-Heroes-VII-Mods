#pragma once 

/*
#############################################################################################
# Might and Magic Heroes 7 (1.0.8364.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51 x64
# ========================================================================================= #
# File: GameFramework_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_LOADING_MOVIE                                      "LoadingMovie"
#define CONST_GAMEEVENT_AGGREGATED_DATA                          10000
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_TIMEALIVE              10001
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_KILLS                  10002
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_DEATHS                 10003
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_MATCH_WON              10004
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_ROUND_WON              10005
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_NORMALKILL       10006
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASNORMALKILL 10007
#define CONST_GAMEEVENT_AGGREGATED_TEAM_KILLS                    10100
#define CONST_GAMEEVENT_AGGREGATED_TEAM_DEATHS                   10101
#define CONST_GAMEEVENT_AGGREGATED_TEAM_GAME_SCORE               10102
#define CONST_GAMEEVENT_AGGREGATED_TEAM_MATCH_WON                10103
#define CONST_GAMEEVENT_AGGREGATED_TEAM_ROUND_WON                10104
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_KILLS                  10200
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEATHS                 10201
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_WEAPON_DAMAGE    10202
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEE_DAMAGE     10203
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WEAPON_DAMAGE 10204
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_MELEE_DAMAGE  10205
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEEHITS        10206
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASMELEEHIT   10207
#define CONST_GAMEEVENT_AGGREGATED_WEAPON_FIRED                  10300
#define CONST_GAMEEVENT_AGGREGATED_PAWN_SPAWN                    10400
#define CONST_GAMEEVENT_AGGREGATED_GAME_SPECIFIC                 11000
#define CONST_NumTouchDataEntries                                5
#define CONST_NumInDragHistory                                   4

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GameFramework.GameTypes.EShakeParam
/*enum EShakeParam
{
	ESP_OffsetRandom                                   = 0,
	ESP_OffsetZero                                     = 1,
	ESP_MAX                                            = 2
};*/

// Enum GameFramework.GameCrowdAgent.EConformType
/*enum EConformType
{
	CFM_NavMesh                                        = 0,
	CFM_BSP                                            = 1,
	CFM_World                                          = 2,
	CFM_None                                           = 3,
	CFM_MAX                                            = 4
};*/

// Enum GameFramework.GameCrowdAgentBehavior.ECrowdBehaviorEvent
/*enum ECrowdBehaviorEvent
{
	CBE_None                                           = 0,
	CBE_Spawn                                          = 1,
	CBE_Random                                         = 2,
	CBE_SeePlayer                                      = 3,
	CBE_EncounterAgent                                 = 4,
	CBE_TakeDamage                                     = 5,
	CBE_GroupWaiting                                   = 6,
	CBE_Uneasy                                         = 7,
	CBE_Alert                                          = 8,
	CBE_Panic                                          = 9,
	CBE_MAX                                            = 10
};*/

// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
/*enum ERecoilStart
{
	ERS_Zero                                           = 0,
	ERS_Random                                         = 1,
	ERS_MAX                                            = 2
};*/

// Enum GameFramework.GameStateObject.GameSessionType
/*enum GameSessionType
{
	GT_SessionInvalid                                  = 0,
	GT_SinglePlayer                                    = 1,
	GT_Coop                                            = 2,
	GT_Multiplayer                                     = 3,
	GT_MAX                                             = 4
};*/

// Enum GameFramework.GameThirdPersonCameraMode.ECameraViewportTypes
/*enum ECameraViewportTypes
{
	CVT_16to9_Full                                     = 0,
	CVT_16to9_VertSplit                                = 1,
	CVT_16to9_HorizSplit                               = 2,
	CVT_4to3_Full                                      = 3,
	CVT_4to3_HorizSplit                                = 4,
	CVT_4to3_VertSplit                                 = 5,
	CVT_MAX                                            = 6
};*/

// Enum GameFramework.MobileInputZone.EZoneType
/*enum EZoneType
{
	ZoneType_Button                                    = 0,
	ZoneType_Joystick                                  = 1,
	ZoneType_Trackball                                 = 2,
	ZoneType_Slider                                    = 3,
	ZoneType_SubClassed                                = 4,
	ZoneType_MAX                                       = 5
};*/

// Enum GameFramework.MobileInputZone.EZoneState
/*enum EZoneState
{
	ZoneState_Inactive                                 = 0,
	ZoneState_Activating                               = 1,
	ZoneState_Active                                   = 2,
	ZoneState_Deactivating                             = 3,
	ZoneState_MAX                                      = 4
};*/

// Enum GameFramework.MobileInputZone.EZoneSlideType
/*enum EZoneSlideType
{
	ZoneSlide_UpDown                                   = 0,
	ZoneSlide_LeftRight                                = 1,
	ZoneSlide_MAX                                      = 2
};*/

// Enum GameFramework.MobilePlayerInput.EUIOrientation
/*enum EUIOrientation
{
	UI_Unknown                                         = 0,
	UI_Portait                                         = 1,
	UI_PortaitUpsideDown                               = 2,
	UI_LandscapeRight                                  = 3,
	UI_LandscapeLeft                                   = 4,
	UI_MAX                                             = 5
};*/

// Enum GameFramework.MobileMenuImage.MenuImageDrawStyle
/*enum MenuImageDrawStyle
{
	IDS_Normal                                         = 0,
	IDS_Stretched                                      = 1,
	IDS_Tile                                           = 2,
	IDS_MAX                                            = 3
};*/

// Enum GameFramework.SeqEvent_HudRenderText.ETextDrawMethod
/*enum ETextDrawMethod
{
	DRAW_CenterText                                    = 0,
	DRAW_WrapText                                      = 1,
	DRAW_MAX                                           = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GameFramework.DynamicSpriteComponent ( Property size: 5 iter: 5) 
// Class name index: 7528 
// 0x004C (0x02AC - 0x0260)
class UDynamicSpriteComponent : public USpriteComponent
{
public:
	struct FInterpCurveFloat                           AnimatedScale;                                    		// 0x0260 (0x0014) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveLinearColor                     AnimatedColor;                                    		// 0x0274 (0x0014) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveVector2D                        AnimatedPosition;                                 		// 0x0288 (0x0014) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     LocationOffset;                                   		// 0x029C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                LoopCount;                                        		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2777 ];

		return pClassPointer;
	};

};



// Class GameFramework.FrameworkGame ( Property size: 1 iter: 2) 
// Class name index: 7530 
// 0x0010 (0x049C - 0x048C)
class AFrameworkGame : public AGameInfo
{
public:
	TArray< struct FRequiredMobileInputConfig >        RequiredMobileInputConfigs;                       		// 0x048C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2779 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameAIController ( Property size: 14 iter: 32) 
// Class name index: 7532 
// 0x004C (0x049C - 0x0450)
class AGameAIController : public AAIController
{
public:
	class UGameAICommand*                              CommandList;                                      		// 0x0450 (0x0008) [0x0000000004002003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditInline )
	unsigned long                                      bHasRunawayCommandList : 1;                       		// 0x0458 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bAILogging : 1;                                   		// 0x0458 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAILogToWindow : 1;                               		// 0x0458 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bFlushAILogEachLine : 1;                          		// 0x0458 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bMapBasedLogName : 1;                             		// 0x0458 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAIDrawDebug : 1;                                 		// 0x0458 (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAIBroken : 1;                                    		// 0x0458 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	class AFileLog*                                    AILogFile;                                        		// 0x045C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              DebugTextMaxLen;                                  		// 0x0464 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAICmdHistoryItem >                 CommandHistory;                                   		// 0x0468 (0x0010) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	int                                                CommandHistoryNum;                                		// 0x0478 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FName >                             AILogFilter;                                      		// 0x047C (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DemoActionString;                                 		// 0x048C (0x0010) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2781 ];

		return pClassPointer;
	};

	struct FString eventGetActionString ( );
	void SetDesiredRotation ( struct FRotator TargetDesiredRotation, unsigned long InLockDesiredRotation, unsigned long InUnlockWhenReached, float InterpolationTime );
	void eventAILog_Internal ( struct FString LogText, struct FName LogCategory, unsigned long bForce );
	void RecordDemoAILog ( struct FString LogText );
	void eventDestroyed ( );
	void ReachedIntermediateMoveGoal ( );
	void ReachedMoveGoal ( );
	float GetDestinationOffset ( );
	class UGameAICommand* GetAICommandInStack ( class UClass* InClass );
	class UGameAICommand* FindCommandOfClass ( class UClass* SearchClass );
	void DumpCommandStack ( );
	void CheckCommandCount ( );
	class UGameAICommand* GetActiveCommand ( );
	bool AbortCommand ( class UGameAICommand* AbortCmd, class UClass* AbortClass );
	void PopCommand ( class UGameAICommand* ToBePoppedCommand );
	void PushCommand ( class UGameAICommand* NewCommand );
	void AllCommands ( class UClass* BaseClass, class UGameAICommand** Cmd );
};



// Class GameFramework.GameAICommand ( Property size: 10 iter: 38) 
// Class name index: 7534 
// 0x0024 (0x0084 - 0x0060)
class UGameAICommand : public UAICommandBase
{
public:
	class UGameAICommand*                              ChildCommand;                                     		// 0x0060 (0x0008) [0x0000000004002003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditInline )
	struct FName                                       ChildStatus;                                      		// 0x0068 (0x0008) [0x0000000000002003]              ( CPF_Edit | CPF_Const | CPF_Transient )
	class AGameAIController*                           GameAIOwner;                                      		// 0x0070 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FName                                       Status;                                           		// 0x0078 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bAllowNewSameClassInstance : 1;                   		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReplaceActiveSameClassInstance : 1;              		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAborted : 1;                                     		// 0x0080 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bIgnoreNotifies : 1;                              		// 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIgnoreStepAside : 1;                             		// 0x0080 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bPendingPop : 1;                                  		// 0x0080 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2783 ];

		return pClassPointer;
	};

	bool HandlePathObstruction ( class AActor* BlockedBy );
	bool MoveUnreachable ( struct FVector AttemptedDest, class AActor* AttemptedTarget );
	void NotifyNeedRepath ( );
	struct FString eventGetDebugVerboseText ( );
	void GetDebugOverheadText ( class APlayerController* PC, TArray< struct FString >* OutText );
	void eventDrawDebug ( class AHUD* H, struct FName Category );
	struct FString eventGetDumpString ( );
	void Resumed ( struct FName OldCommandName );
	void Paused ( class UGameAICommand* NewCommand );
	void Popped ( );
	void Pushed ( );
	void PostPopped ( );
	void PrePushed ( class AGameAIController* AI );
	bool AllowStateTransitionTo ( struct FName StateName );
	bool AllowTransitionTo ( class UClass* AttemptCommand );
	void Tick ( float DeltaTime );
	bool ShouldIgnoreNotifies ( );
	void eventInternalTick ( float DeltaTime );
	void eventInternalResumed ( struct FName OldCommandName );
	void eventInternalPaused ( class UGameAICommand* NewCommand );
	void eventInternalPopped ( );
	void eventInternalPushed ( );
	void eventInternalPrePushed ( class AGameAIController* AI );
	bool InitCommand ( class AGameAIController* AI );
	bool InitCommandUserActor ( class AGameAIController* AI, class AActor* UserActor );
};



// Class GameFramework.GameCameraBlockingVolume ( Property size: 0 iter: 0) 
// Class name index: 7536 
// 0x0000 (0x0280 - 0x0280)
class AGameCameraBlockingVolume : public ABlockingVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2785 ];

		return pClassPointer;
	};

};



// Class GameFramework.GamePlayerController ( Property size: 5 iter: 23) 
// Class name index: 7538 
// 0x0010 (0x0734 - 0x0724)
class AGamePlayerController : public APlayerController
{
public:
	unsigned long                                      bWarnCrowdMembers : 1;                            		// 0x0724 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDebugCrowdAwareness : 1;                         		// 0x0724 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsWarmupPaused : 1;                              		// 0x0724 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              AgentAwareRadius;                                 		// 0x0728 (0x0004) [0x0000000000000000]              
	struct FName                                       CurrentSoundMode;                                 		// 0x072C (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2787 ];

		return pClassPointer;
	};

	void ClientColorFade ( struct FColor FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime );
	void eventWarmupPause ( unsigned long bDesiredPauseState );
	bool CanUnpauseWarmup ( );
	struct FString GetLastPlayedCinematicName ( );
	bool IsCinematicRunning ( );
	bool IsFullScreenMovieRunning ( );
	void GetCurrentMovie ( struct FString* MovieName );
	void eventClientStopMovie ( float DelayInSeconds, unsigned long bAllowMovieToFinish, unsigned long bForceStopNonSkippable, unsigned long bForceStopLoadingMovie );
	void eventClientPlayMovie ( struct FString MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, unsigned long bRestrictPausing, unsigned long bPlayOnceFromStream, unsigned long bOnlyBackButtonSkipsMovie );
	void KeepPlayingLoadingMovie ( );
	void ShowLoadingMovie ( unsigned long bShowMovie, unsigned long bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, unsigned long bOverridePreviousDelays );
	void SetSoundMode ( struct FName InSoundModeName );
	void DoForceFeedbackForScreenShake ( class UCameraShake* ShakeData, float Scale );
	void eventNotifyCrowdAgentInRadius ( class AGameCrowdAgent* Agent );
	void eventNotifyCrowdAgentRefresh ( );
	void CrowdDebug ( unsigned long bEnabled );
	int GetUIPlayerIndex ( );
	void OnToggleMouseCursor ( class USeqAct_ToggleMouseCursor* inAction );
};



// Class GameFramework.GameCheatManager ( Property size: 3 iter: 9) 
// Class name index: 7540 
// 0x0020 (0x00A0 - 0x0080)
class UGameCheatManager : public UCheatManager
{
public:
	class ADebugCameraController*                      DebugCameraControllerRef;                         		// 0x0080 (0x0008) [0x0000000000000000]              
	class UClass*                                      DebugCameraControllerClass;                       		// 0x0088 (0x0008) [0x0000000000000000]              
	struct FString                                     DebugCameraControllerClassName;                   		// 0x0090 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2789 ];

		return pClassPointer;
	};

	void OnRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	void TestHttp ( struct FString Verb, struct FString Payload, struct FString URL, unsigned long bSendParallelRequest );
	void EnableDebugCamera ( unsigned long bEnableDebugText );
	void TeleportPawnToCamera ( unsigned long bToggleDebugCameraOff );
	void ToggleDebugCamera ( unsigned long bDrawDebugText );
	void PatchDebugCameraController ( );
};



// Class GameFramework.GameCrowdAgent ( Property size: 99 iter: 145) 
// Class name index: 7542 
// 0x0278 (0x04C0 - 0x0248)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	struct FPointer                                    VfTable_IInterface_RVO;                           		// 0x0248 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UGameCrowdGroup*                             MyGroup;                                          		// 0x0250 (0x0008) [0x0000000000000000]              
	struct FVector                                     PreferredVelocity;                                		// 0x0258 (0x000C) [0x0000000000000000]              
	struct FVector                                     PendingVelocity;                                  		// 0x0264 (0x000C) [0x0000000000000000]              
	class AGameCrowdDestination*                       CurrentDestination;                               		// 0x0270 (0x0008) [0x0000000000000000]              
	class AGameCrowdDestination*                       BehaviorDestination;                              		// 0x0278 (0x0008) [0x0000000000000000]              
	class AGameCrowdDestination*                       PreviousDestination;                              		// 0x0280 (0x0008) [0x0000000000000000]              
	float                                              InterpZTranslation;                               		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeadBodyDuration;                                 		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0294 (0x0008) [0x00000000040A000A]              ( CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	int                                                ConformTraceFrameCount;                           		// 0x029C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FNearbyDynamicItem >                NearbyDynamics;                                   		// 0x02A0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bUniformScale : 1;                                		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCheckForObstacles : 1;                           		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseNavMeshPathing : 1;                           		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bWantsSeePlayerNotification : 1;                  		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAllowPitching : 1;                               		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bHitObstacle : 1;                                 		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bBadHitNormal : 1;                                		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bSimulateThisTick : 1;                            		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPotentialEncounter : 1;                          		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bIsPanicked : 1;                                  		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bWantsGroupIdle : 1;                              		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bPreferVisibleDestination : 1;                    		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bPreferVisibleDestinationOnSpawn : 1;             		// 0x02B0 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bHasNotifiedSpawner : 1;                          		// 0x02B0 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bIsInSpawnPool : 1;                               		// 0x02B0 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bPaused : 1;                                      		// 0x02B0 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned char                                      ConformType;                                      		// 0x02B4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              ConformTraceDist;                                 		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ConformTraceInterval;                             		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentConformTraceInterval;                      		// 0x02C0 (0x0004) [0x0000000000000000]              
	float                                              LastGroundZ;                                      		// 0x02C4 (0x0004) [0x0000000000000000]              
	float                                              AwareRadius;                                      		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AvoidOtherRadius;                                 		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAvoidOtherSampleItem >             AvoidOtherSampleList;                             		// 0x02D0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PENALTY_COEFF_ANGLETOGOAL;                        		// 0x02E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PENALTY_COEFF_ANGLETOVEL;                         		// 0x02E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PENALTY_COEFF_MAG;                                		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MIN_PENALTY_THRESHOLD;                            		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastProgressTime;                                 		// 0x02F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastFallbackActiveTime;                           		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxPathLaneValue;                                 		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentPathLaneValue;                             		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExtraPathCost;                                    		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotateToTargetSpeed;                              		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxYawRate;                                       		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeshMinScale3D;                                   		// 0x030C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeshMaxScale3D;                                   		// 0x0318 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              EyeZOffset;                                       		// 0x0324 (0x0004) [0x0000000000000000]              
	float                                              ProximityLODDist;                                 		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VisibleProximityLODDist;                          		// 0x032C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastKnownGoodPosition;                            		// 0x0330 (0x000C) [0x0000000000000000]              
	float                                              GroundOffset;                                     		// 0x033C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     IntermediatePoint;                                		// 0x0340 (0x000C) [0x0000000000000000]              
	struct FVector                                     SearchExtent;                                     		// 0x034C (0x000C) [0x0000000000000000]              
	class UClass*                                      NavigationHandleClass;                            		// 0x0358 (0x0008) [0x0000000000000000]              
	class UNavigationHandle*                           NavigationHandle;                                 		// 0x0360 (0x0008) [0x0000000000000000]              
	int                                                ObstacleCheckCount;                               		// 0x0368 (0x0004) [0x0000000000000000]              
	float                                              WalkableFloorZ;                                   		// 0x036C (0x0004) [0x0000000000000000]              
	float                                              LastPathingAttempt;                               		// 0x0370 (0x0004) [0x0000000000000000]              
	float                                              LastUpdateTime;                                   		// 0x0374 (0x0004) [0x0000000000000000]              
	float                                              NotVisibleLifeSpan;                               		// 0x0378 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AGameCrowdAgent*                             MyArchetype;                                      		// 0x037C (0x0008) [0x0000000000000000]              
	float                                              MaxWalkingSpeed;                                  		// 0x0384 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRunningSpeed;                                  		// 0x0388 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeed;                                         		// 0x038C (0x0004) [0x0000000000000000]              
	TArray< struct FRecentInteraction >                RecentInteractions;                               		// 0x0390 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BeaconMaxDist;                                    		// 0x03A0 (0x0004) [0x0000000000000000]              
	struct FVector                                     BeaconOffset;                                     		// 0x03A4 (0x000C) [0x0000000000000000]              
	class UTexture2D*                                  BeaconTexture;                                    		// 0x03B0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                BeaconColor;                                      		// 0x03B8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   AmbientSoundCue;                                  		// 0x03C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             AmbientSoundComponent;                            		// 0x03D0 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UGameCrowdAgentBehavior*                     CurrentBehavior;                                  		// 0x03D8 (0x0008) [0x0000000000000000]              
	float                                              CurrentBehaviorActivationTime;                    		// 0x03E0 (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    EncounterAgentBehaviors;                          		// 0x03E4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    SeePlayerBehaviors;                               		// 0x03F4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MaxSeePlayerDistSq;                               		// 0x0404 (0x0004) [0x0000000000000000]              
	float                                              SeePlayerInterval;                                		// 0x0408 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FBehaviorEntry >                    SpawnBehaviors;                                   		// 0x040C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    UneasyBehaviors;                                  		// 0x041C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    AlertBehaviors;                                   		// 0x042C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    PanicBehaviors;                                   		// 0x043C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    RandomBehaviors;                                  		// 0x044C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    TakeDamageBehaviors;                              		// 0x045C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              RandomBehaviorInterval;                           		// 0x046C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceUpdateTime;                                  		// 0x0470 (0x0004) [0x0000000000000000]              
	float                                              ReachThreshold;                                   		// 0x0474 (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    GroupWaitingBehaviors;                            		// 0x0478 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DesiredGroupRadius;                               		// 0x0488 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DesiredGroupRadiusSq;                             		// 0x048C (0x0004) [0x0000000000000000]              
	float                                              MaxLOSLifeDistanceSq;                             		// 0x0490 (0x0004) [0x0000000000000000]              
	class UGameCrowdSpawnerInterface*                  MySpawner;                                        		// 0x0494 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x049C (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FVector                                     SpawnOffset;                                      		// 0x04A4 (0x000C) [0x0000000000000000]              
	float                                              InitialLastRenderTime;                            		// 0x04B0 (0x0004) [0x0000000000000000]              
	struct FColor                                      DebugAgentColor;                                  		// 0x04B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AGameCrowdDestination*                       DebugSpawnDest;                                   		// 0x04B8 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2791 ];

		return pClassPointer;
	};

	void InitDebugColor ( );
	struct FString GetBehaviorString ( );
	struct FString GetDestString ( );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	struct FVector eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath );
	void eventInitNavigationHandle ( );
	void eventOverlappedActorEvent ( class AActor* A );
	void TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventFireDeathEvent ( );
	void PlayDeath ( struct FVector KillMomentum );
	void eventUpdateIntermediatePoint ( class AActor* DestinationActor );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	bool IsIdle ( );
	void SetCurrentBehavior ( class UGameCrowdAgentBehavior* BehaviorArchetype );
	void eventStopBehavior ( );
	void eventHandleBehaviorEvent ( unsigned char EventType, class AActor* InInstigator, unsigned long bViralCause, unsigned long bPropagateViralFlag );
	void ActivateInstancedBehavior ( class UGameCrowdAgentBehavior* NewBehaviorObject );
	void eventActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor );
	void ResetSeePlayer ( );
	void TryRandomBehavior ( );
	void eventNotifySeePlayer ( class APlayerController* PC );
	void PlaySpawnBehavior ( );
	void eventHandlePotentialAgentEncounter ( );
	void eventStopIdleAnimation ( );
	void eventPlayIdleAnimation ( );
	void OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action );
	void InitializeAgent ( class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, unsigned long bWarmupPosition, unsigned long bCheckWarmupVisibility, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo );
	struct FVector GetAttemptedSpawnLocation ( float Pct, struct FVector CurPos, float CurRadius, struct FVector DestPos, float DestRadius );
	void SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void Destroyed ( );
	void ResetPooledAgent ( );
	void eventKillAgent ( );
	void PostBeginPlay ( );
	void SetMaxSpeed ( );
	void eventSetCurrentDestination ( class AGameCrowdDestination* NewDest );
	void eventWaitForGroupMembers ( );
	bool PickBehaviorFrom ( TArray< struct FBehaviorEntry > BehaviorList, struct FVector BestCameraLoc );
	bool IsPanicked ( );
	void eventFellOutOfWorld ( class UClass* dmgType );
	struct FVector GetCollisionExtent ( );
};



// Class GameFramework.GameCrowdAgentSkeletal ( Property size: 28 iter: 40) 
// Class name index: 7544 
// 0x00B4 (0x0574 - 0x04C0)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                            		// 0x04C0 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimNodeBlend*                              SpeedBlendNode;                                   		// 0x04C8 (0x0008) [0x0000000000000000]              
	class UAnimNodeSlot*                               FullBodySlot;                                     		// 0x04D0 (0x0008) [0x0000000000000000]              
	class UAnimNodeSequence*                           ActionSeqNode;                                    		// 0x04D8 (0x0008) [0x0000000000000000]              
	class UAnimNodeSequence*                           WalkSeqNode;                                      		// 0x04E0 (0x0008) [0x0000000000000000]              
	class UAnimNodeSequence*                           RunSeqNode;                                       		// 0x04E8 (0x0008) [0x0000000000000000]              
	class UAnimTree*                                   AgentTree;                                        		// 0x04F0 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             WalkAnimNames;                                    		// 0x04F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             RunAnimNames;                                     		// 0x0508 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             IdleAnimNames;                                    		// 0x0518 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             DeathAnimNames;                                   		// 0x0528 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              SpeedBlendStart;                                  		// 0x0538 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedBlendEnd;                                    		// 0x053C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnimVelRate;                                      		// 0x0540 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeedBlendChangeSpeed;                         		// 0x0544 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MoveSyncGroupName;                                		// 0x0548 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FGameCrowdAttachmentList >          Attachments;                                      		// 0x0550 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MaxTargetAcquireTime;                             		// 0x0560 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseRootMotionVelocity : 1;                       		// 0x0564 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowSkeletonUpdateChangeBasedOnTickResult : 1;  		// 0x0564 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bTickWhenNotVisible : 1;                          		// 0x0564 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIsPlayingIdleAnimation : 1;                      		// 0x0564 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsPlayingDeathAnimation : 1;                     		// 0x0564 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsPlayingImportantAnimation : 1;                 		// 0x0564 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bAnimateThisTick : 1;                             		// 0x0564 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              NotVisibleDisableTickTime;                        		// 0x0568 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxAnimationDistance;                             		// 0x056C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxAnimationDistanceSq;                           		// 0x0570 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2793 ];

		return pClassPointer;
	};

	void CreateAttachments ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void eventStopIdleAnimation ( );
	void eventPlayIdleAnimation ( );
	void eventClearLatentAnimation ( );
	void OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action );
	void SetRootMotion ( unsigned long bRootMotionEnabled );
	void PlayDeath ( struct FVector KillMomentum );
	void SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows );
	void PostBeginPlay ( );
};



// Class GameFramework.GameCrowdAgentSM ( Property size: 2 iter: 7) 
// Class name index: 7546 
// 0x0010 (0x04D0 - 0x04C0)
class AGameCrowdAgentSM : public AGameCrowdAgent
{
public:
	class UStaticMeshComponent*                        Mesh;                                             		// 0x04C0 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   MeshColor;                                        		// 0x04C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2795 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	void ActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor );
	void ChangeDebugColor ( struct FColor InC );
	void InitDebugColor ( );
	void PostBeginPlay ( );
};



// Class GameFramework.GameCrowdAgentBehavior ( Property size: 17 iter: 35) 
// Class name index: 7548 
// 0x003C (0x009C - 0x0060)
class UGameCrowdAgentBehavior : public UObject
{
public:
	unsigned char                                      MyEventType;                                      		// 0x0060 (0x0001) [0x0000000000000000]              
	unsigned char                                      ViralBehaviorEvent;                               		// 0x0061 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              DurationOfBehavior;                               		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeUntilStopBehavior;                            		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIdleBehavior : 1;                                		// 0x006C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFaceActionTargetFirst : 1;                       		// 0x006C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsViralBehavior : 1;                             		// 0x006C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bPassOnIsViralBehaviorFlag : 1;                   		// 0x006C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	class AActor*                                      ActionTarget;                                     		// 0x0070 (0x0008) [0x0000000000000000]              
	float                                              MaxPlayerDistance;                                		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ViralRadius;                                      		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DurationBeforeBecomesViral;                       		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeToBecomeViral;                                		// 0x0084 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DurationOfViralBehaviorPropagation;               		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeToStopPropagatingViralBehavior;               		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AGameCrowdAgent*                             MyAgent;                                          		// 0x0090 (0x0008) [0x0000000000000000]              
	struct FColor                                      DebugBehaviorColor;                               		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2797 ];

		return pClassPointer;
	};

	bool AllowBehaviorAt ( class AGameCrowdDestination* Destination );
	bool AllowThisDestination ( class AGameCrowdDestination* Destination );
	void eventPropagateViralBehaviorTo ( class AGameCrowdAgent* OtherAgent );
	class AActor* GetBehaviorInstigator ( );
	void ActivatedBy ( class AActor* NewActionTarget );
	class AActor* GetDestinationActor ( );
	void ChangingDestination ( class AGameCrowdDestination* NewDest );
	struct FString GetBehaviorString ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopBehavior ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
	bool HandleMovement ( );
	void eventFinishedTargetRotation ( );
	bool CanBeUsedBy ( class AGameCrowdAgent* Agent, struct FVector CameraLoc );
	void eventTick ( float DeltaTime );
	bool ShouldEndIdle ( );
	class AGameCrowdBehaviorPoint* TriggerCrowdBehavior ( unsigned char EventType, class AActor* Instigator, struct FVector AtLocation, float InRange, float InDuration, class AActor* BaseActor, unsigned long bRequireLOS );
};



// Class GameFramework.GameCrowdBehavior_PlayAnimation ( Property size: 12 iter: 19) 
// Class name index: 7550 
// 0x0038 (0x00D4 - 0x009C)
class UGameCrowdBehavior_PlayAnimation : public UGameCrowdAgentBehavior
{
public:
	TArray< struct FName >                             AnimationList;                                    		// 0x009C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BlendInTime;                                      		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseRootMotion : 1;                               		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLookAtPlayer : 1;                                		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBlendBetweenAnims : 1;                           		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	class AActor*                                      CustomActionTarget;                               		// 0x00B8 (0x0008) [0x0000000000000000]              
	int                                                LoopIndex;                                        		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoopTime;                                         		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USeqAct_PlayAgentAnimation*                  AnimSequence;                                     		// 0x00C8 (0x0008) [0x0000000000000000]              
	int                                                AnimationIndex;                                   		// 0x00D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2799 ];

		return pClassPointer;
	};

	struct FString GetBehaviorString ( );
	void StopBehavior ( );
	void PlayAgentAnimationNow ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void SetSequenceOutput ( );
	void eventFinishedTargetRotation ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
};



// Class GameFramework.GameCrowdBehavior_RunFromPanic ( Property size: 1 iter: 8) 
// Class name index: 7552 
// 0x0008 (0x00A4 - 0x009C)
class UGameCrowdBehavior_RunFromPanic : public UGameCrowdAgentBehavior
{
public:
	class AActor*                                      PanicFocus;                                       		// 0x009C (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2801 ];

		return pClassPointer;
	};

	struct FString GetBehaviorString ( );
	bool AllowBehaviorAt ( class AGameCrowdDestination* Destination );
	bool AllowThisDestination ( class AGameCrowdDestination* Destination );
	class AActor* GetBehaviorInstigator ( );
	void StopBehavior ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
	void ActivatedBy ( class AActor* NewActionTarget );
};



// Class GameFramework.GameCrowdBehavior_WaitForGroup ( Property size: 0 iter: 4) 
// Class name index: 7554 
// 0x0000 (0x009C - 0x009C)
class UGameCrowdBehavior_WaitForGroup : public UGameCrowdAgentBehavior
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2803 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	bool ShouldEndIdle ( );
	struct FString GetBehaviorString ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
};



// Class GameFramework.GameCrowdBehavior_WaitInQueue ( Property size: 2 iter: 8) 
// Class name index: 7556 
// 0x000C (0x00A8 - 0x009C)
class UGameCrowdBehavior_WaitInQueue : public UGameCrowdAgentBehavior
{
public:
	unsigned long                                      bStoppingBehavior : 1;                            		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	class AGameCrowdDestinationQueuePoint*             QueuePosition;                                    		// 0x00A0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2805 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	bool ShouldEndIdle ( );
	struct FString GetBehaviorString ( );
	class AActor* GetDestinationActor ( );
	void ChangingDestination ( class AGameCrowdDestination* NewDest );
	bool HandleMovement ( );
};



// Class GameFramework.GameCrowdGroup ( Property size: 1 iter: 4) 
// Class name index: 7558 
// 0x0010 (0x0070 - 0x0060)
class UGameCrowdGroup : public UObject
{
public:
	TArray< class AGameCrowdAgent* >                   Members;                                          		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2807 ];

		return pClassPointer;
	};

	void UpdateDestinations ( class AGameCrowdDestination* NewDestination );
	void RemoveMember ( class AGameCrowdAgent* Agent );
	void AddMember ( class AGameCrowdAgent* Agent );
};



// Class GameFramework.GameCrowdInfoVolume ( Property size: 1 iter: 3) 
// Class name index: 7560 
// 0x0010 (0x028C - 0x027C)
class AGameCrowdInfoVolume : public AVolume
{
public:
	TArray< class AGameCrowdDestination* >             PotentialSpawnPoints;                             		// 0x027C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2809 ];

		return pClassPointer;
	};

	void UnTouch ( class AActor* Other );
	void Touch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};



// Class GameFramework.GameCrowdInteractionPoint ( Property size: 2 iter: 3) 
// Class name index: 7562 
// 0x000C (0x024C - 0x0240)
class AGameCrowdInteractionPoint : public AActor
{
public:
	unsigned long                                      bIsEnabled : 1;                                   		// 0x0240 (0x0004) [0x0000000000000021] [0x00000001] ( CPF_Edit | CPF_Net )
	class UCylinderComponent*                          CylinderComponent;                                		// 0x0244 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2811 ];

		return pClassPointer;
	};

	void OnToggle ( class USeqAct_Toggle* Action );
};



// Class GameFramework.GameCrowdBehaviorPoint ( Property size: 5 iter: 8) 
// Class name index: 7564 
// 0x0018 (0x0264 - 0x024C)
class AGameCrowdBehaviorPoint : public AGameCrowdInteractionPoint
{
public:
	float                                              RadiusOfBehaviorEvent;                            		// 0x024C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DurationOfBehaviorEvent;                          		// 0x0250 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      EventType;                                        		// 0x0254 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRequireLOS : 1;                                  		// 0x0258 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class AActor*                                      Initiator;                                        		// 0x025C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2813 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void DestroySelf ( );
	void eventPostBeginPlay ( );
};



// Class GameFramework.GameCrowdDestination ( Property size: 37 iter: 52) 
// Class name index: 7567 
// 0x00A8 (0x02F4 - 0x024C)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;            		// 0x024C (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bKillWhenReached : 1;                             		// 0x0254 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowAsPreviousDestination : 1;                  		// 0x0254 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAvoidWhenPanicked : 1;                           		// 0x0254 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSkipBehaviorIfPanicked : 1;                      		// 0x0254 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bFleeDestination : 1;                             		// 0x0254 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bMustReachExactly : 1;                            		// 0x0254 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bHasRestrictions : 1;                             		// 0x0254 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bAllowsSpawning : 1;                              		// 0x0254 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bAllowCloudSpawning : 1;                          		// 0x0254 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bAllowVisibleSpawning : 1;                        		// 0x0254 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bLineSpawner : 1;                                 		// 0x0254 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bSpawnAtEdge : 1;                                 		// 0x0254 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bSoftPerimeter : 1;                               		// 0x0254 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bIsVisible : 1;                                   		// 0x0254 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bWillBeVisible : 1;                               		// 0x0254 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bCanSpawnHereNow : 1;                             		// 0x0254 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bIsBeyondSpawnDistance : 1;                       		// 0x0254 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bAdjacentToVisibleNode : 1;                       		// 0x0254 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bHasNavigationMesh : 1;                           		// 0x0254 (0x0004) [0x0000000000000000] [0x00040000] 
	TArray< class AGameCrowdDestination* >             NextDestinations;                                 		// 0x0258 (0x0010) [0x0000000000600001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AGameCrowdDestinationQueuePoint*             QueueHead;                                        		// 0x0268 (0x0008) [0x0000000000200001]              ( CPF_Edit )
	int                                                Capacity;                                         		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Frequency;                                        		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CustomerCount;                                    		// 0x0278 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            SupportedAgentClasses;                            		// 0x027C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           SupportedArchetypes;                              		// 0x028C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UClass* >                            RestrictedAgentClasses;                           		// 0x029C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           RestrictedArchetypes;                             		// 0x02AC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              ExactReachTolerance;                              		// 0x02BC (0x0004) [0x0000000000000000]              
	struct FName                                       InteractionTag;                                   		// 0x02C0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteractionDelay;                                 		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FBehaviorEntry >                    ReachedBehaviors;                                 		// 0x02CC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AGameCrowdAgent*                             AgentEnRoute;                                     		// 0x02DC (0x0008) [0x0000000000000000]              
	float                                              Priority;                                         		// 0x02E4 (0x0004) [0x0000000000000000]              
	float                                              LastSpawnTime;                                    		// 0x02E8 (0x0004) [0x0000000000000000]              
	class AGameCrowdPopulationManager*                 MyPopMgr;                                         		// 0x02EC (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2815 ];

		return pClassPointer;
	};

	void DrawDebug ( unsigned long bPresistent, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo );
	float GetDestinationRadius ( );
	void PrioritizeSpawnPoint ( float MaxSpawnDist, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo );
	bool AnalyzeSpawnPoint ( float MaxSpawnDistSq, unsigned long bForceNavMeshPathing, class UNavigationHandle* NavHandle, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo );
	void GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot );
	float GetSpawnRadius ( );
	bool eventAllowableDestinationFor ( class AGameCrowdAgent* Agent );
	bool AtCapacity ( unsigned char CheckCnt );
	void eventIncrementCustomerCount ( class AGameCrowdAgent* ArrivingAgent );
	void eventDecrementCustomerCount ( class AGameCrowdAgent* DepartingAgent );
	void PickNewDestinationFor ( class AGameCrowdAgent* Agent, unsigned long bIgnoreRestrictions );
	void eventReachedDestination ( class AGameCrowdAgent* Agent );
	void Destroyed ( );
	void PostBeginPlay ( );
	bool ReachedByAgent ( class AGameCrowdAgent* Agent, struct FVector TestPosition, unsigned long bTestExactly );
};



// Class GameFramework.GameCrowdDestinationQueuePoint ( Property size: 8 iter: 16) 
// Class name index: 7569 
// 0x0030 (0x027C - 0x024C)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	class AGameCrowdDestinationQueuePoint*             NextQueuePosition;                                		// 0x024C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AGameCrowdInteractionPoint*                  PreviousQueuePosition;                            		// 0x0254 (0x0008) [0x0000000000000000]              
	class AGameCrowdAgent*                             QueuedAgent;                                      		// 0x025C (0x0008) [0x0000000000000000]              
	class AGameCrowdDestination*                       QueueDestination;                                 		// 0x0264 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bClearingQueue : 1;                               		// 0x026C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPendingAdvance : 1;                              		// 0x026C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AverageReactionTime;                              		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      QueueBehaviorClass;                               		// 0x0274 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2817 ];

		return pClassPointer;
	};

	bool HasCustomer ( );
	void ClearQueue ( class AGameCrowdAgent* OldCustomer );
	void AddCustomer ( class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition );
	void ActuallyAdvance ( );
	void AdvanceCustomerTo ( class AGameCrowdInteractionPoint* FrontPosition );
	void eventReachedDestination ( class AGameCrowdAgent* Agent );
	bool HasSpace ( );
	bool QueueReachedBy ( class AGameCrowdAgent* Agent, struct FVector TestPosition );
};



// Class GameFramework.GameCrowdPopulationManager ( Property size: 15 iter: 41) 
// Class name index: 7571 
// 0x00FC (0x033C - 0x0240)
class AGameCrowdPopulationManager : public ACrowdPopulationManagerBase
{
public:
	struct FPointer                                    VfTable_IInterface_NavigationHandle;              		// 0x0240 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FCrowdSpawnInfoItem                         CloudSpawnInfo;                                   		// 0x0248 (0x0090) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCrowdSpawnInfoItem >               ScriptedSpawnInfo;                                		// 0x02D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AGameCrowdInfoVolume*                        ActiveCrowdInfoVolume;                            		// 0x02E8 (0x0008) [0x0000000000000000]              
	TArray< class AGameCrowdDestination* >             GlobalPotentialSpawnPoints;                       		// 0x02F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SplitScreenNumReduction;                          		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              PlayerPositionPredictionTime;                     		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              HeadVisibilityOffset;                             		// 0x0308 (0x0004) [0x0000000000000000]              
	class UClass*                                      NavigationHandleClass;                            		// 0x030C (0x0008) [0x0000000000000000]              
	class UNavigationHandle*                           NavigationHandle;                                 		// 0x0314 (0x0008) [0x0000000000000000]              
	class AGameCrowdAgent*                             QueryingAgent;                                    		// 0x031C (0x0008) [0x0000000000000000]              
	TArray< struct FCrowdSpawnerPlayerInfo >           PlayerInfo;                                       		// 0x0324 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastPlayerInfoUpdateTime;                         		// 0x0334 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDebugSpawns : 1;                                 		// 0x0338 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPauseCrowd : 1;                                  		// 0x0338 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2819 ];

		return pClassPointer;
	};

	class AGameCrowdAgent* eventCreateNewAgent ( class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, struct FCrowdSpawnInfoItem* Item );
	bool Warmup ( int WarmupNum, struct FCrowdSpawnInfoItem* Item );
	class AGameCrowdAgent* SpawnAgent ( class AGameCrowdDestination* SpawnLoc, struct FCrowdSpawnInfoItem* Item );
	class AGameCrowdAgent* SpawnAgentByIdx ( int SpawnerIdx, class AGameCrowdDestination* SpawnLoc );
	bool ValidateSpawnAt ( class AGameCrowdDestination* Candidate, struct FCrowdSpawnInfoItem* Item );
	void AddPrioritizedSpawnPoint ( class AGameCrowdDestination* GCD, struct FCrowdSpawnInfoItem* Item );
	void AnalyzeSpawnPoints ( int StartIndex, int NumToUpdate, struct FCrowdSpawnInfoItem* Item );
	void eventPrioritizeSpawnPoints ( float DeltaTime, struct FCrowdSpawnInfoItem* Item );
	bool StaticGetPlayerInfo ( TArray< struct FCrowdSpawnerPlayerInfo >* out_PlayerInfo );
	bool GetPlayerInfo ( );
	class AGameCrowdDestination* eventPickSpawnPoint ( struct FCrowdSpawnInfoItem* Item );
	bool eventUpdateSpawner ( float DeltaTime, struct FCrowdSpawnInfoItem* Item );
	void UpdateAllSpawners ( float DeltaTime );
	void Tick ( float DeltaTime );
	bool ShouldDebugDestinations ( );
	bool IsSpawningActive ( );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void AgentDestroyed ( class AGameCrowdAgent* Agent );
	void eventFlushAllAgents ( );
	void eventFlushAgents ( struct FCrowdSpawnInfoItem Item );
	int eventCreateSpawner ( class USeqAct_GameCrowdPopulationManagerToggle* inAction );
	void SetCrowdInfoVolume ( class AGameCrowdInfoVolume* Vol );
	void RemoveSpawnPoint ( class AGameCrowdDestination* GCD );
	void AddSpawnPoint ( class AGameCrowdDestination* GCD );
	void eventNotifyPathChanged ( );
	void PostBeginPlay ( );
};



// Class GameFramework.GameCrowdReplicationActor ( Property size: 3 iter: 5) 
// Class name index: 7573 
// 0x0010 (0x0250 - 0x0240)
class AGameCrowdReplicationActor : public AActor
{
public:
	class USeqAct_GameCrowdSpawner*                    Spawner;                                          		// 0x0240 (0x0008) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bSpawningActive : 1;                              		// 0x0248 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	int                                                DestroyAllCount;                                  		// 0x024C (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2821 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
};



// Class GameFramework.GameCrowdSpawnRelativeActor ( Property size: 0 iter: 0) 
// Class name index: 7575 
// 0x0000 (0x0240 - 0x0240)
class AGameCrowdSpawnRelativeActor : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2823 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameDestinationConnRenderingComponent ( Property size: 0 iter: 0) 
// Class name index: 7577 
// 0x0000 (0x0238 - 0x0238)
class UGameDestinationConnRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2825 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameExplosion ( Property size: 51 iter: 51) 
// Class name index: 7579 
// 0x00E8 (0x0148 - 0x0060)
class UGameExplosion : public UObject
{
public:
	unsigned long                                      bDirectionalExplosion : 1;                        		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIgnoreInstigator : 1;                            		// 0x0060 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bAllowTeammateCringes : 1;                        		// 0x0060 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bFullDamageToAttachee : 1;                        		// 0x0060 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bAttachExplosionEmitterToAttachee : 1;            		// 0x0060 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bPerformRadialBlurRelevanceCheck : 1;             		// 0x0060 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bCausesFracture : 1;                              		// 0x0060 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bAllowPerMaterialFX : 1;                          		// 0x0060 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1;		// 0x0060 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bSkipDefaultPhysMatParticleSystem : 1;            		// 0x0060 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bUseMapSpecificValues : 1;                        		// 0x0060 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bUseOverlapCheck : 1;                             		// 0x0060 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;           		// 0x0060 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bAutoControllerVibration : 1;                     		// 0x0060 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	float                                              DirectionalExplosionAngleDeg;                     		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageDelay;                                      		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFalloffExponent;                            		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      ActorToIgnoreForDamage;                           		// 0x0078 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      ActorClassToIgnoreForDamage;                      		// 0x0080 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ActorClassToIgnoreForKnockdownsAndCringes;        		// 0x0088 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MyDamageType;                                     		// 0x0090 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockDownRadius;                                  		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockDownStrength;                                		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CringeRadius;                                     		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   CringeDuration;                                   		// 0x00A4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MomentumTransferScale;                            		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleEmitterTemplate;                          		// 0x00B0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplosionEmitterScale;                            		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      HitActor;                                         		// 0x00BC (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x00C4 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x00D0 (0x000C) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x00DC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ExplosionSoundHurtSomeone;                        		// 0x00E4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UPointLightComponent*                        ExploLight;                                       		// 0x00EC (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploLightFadeOutTime;                            		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URadialBlurComponent*                        ExploRadialBlur;                                  		// 0x00F8 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploRadialBlurFadeOutTime;                       		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExploRadialBlurMaxBlur;                           		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FractureMeshRadius;                               		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FracturePartVel;                                  		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCameraShake*                                CamShake;                                         		// 0x0110 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UCameraShake*                                CamShake_Left;                                    		// 0x0118 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UCameraShake*                                CamShake_Right;                                   		// 0x0120 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UCameraShake*                                CamShake_Rear;                                    		// 0x0128 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              CamShakeInnerRadius;                              		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamShakeOuterRadius;                              		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamShakeFalloff;                                  		// 0x0138 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      CameraLensEffect;                                 		// 0x013C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraLensEffectRadius;                           		// 0x0144 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2827 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameExplosionActor ( Property size: 21 iter: 40) 
// Class name index: 7581 
// 0x0078 (0x02B8 - 0x0240)
class AGameExplosionActor : public AActor
{
public:
	unsigned long                                      bHasExploded : 1;                                 		// 0x0240 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bExplodeMoreThanOnce : 1;                         		// 0x0240 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bTrackExplosionParticleSystemLifespan : 1;        		// 0x0240 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDrawDebug : 1;                                   		// 0x0240 (0x0004) [0x0000000000000000] [0x00000008] 
	class UPointLightComponent*                        ExplosionLight;                                   		// 0x0244 (0x0008) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class URadialBlurComponent*                        ExplosionRadialBlur;                              		// 0x024C (0x0008) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              LightFadeTime;                                    		// 0x0254 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LightFadeTimeRemaining;                           		// 0x0258 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LightInitialBrightness;                           		// 0x025C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RadialBlurFadeTime;                               		// 0x0260 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RadialBlurFadeTimeRemaining;                      		// 0x0264 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RadialBlurMaxBlurAmount;                          		// 0x0268 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x026C (0x0008) [0x0000000000000000]              
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                           		// 0x0274 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AController*                                 InstigatorController;                             		// 0x027C (0x0008) [0x0000000000000000]              
	class AActor*                                      HitActorFromPhysMaterialTrace;                    		// 0x0284 (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocationFromPhysMaterialTrace;                 		// 0x028C (0x000C) [0x0000000000000000]              
	class AActor*                                      Attachee;                                         		// 0x0298 (0x0008) [0x0000000000000000]              
	class AController*                                 AttacheeController;                               		// 0x02A0 (0x0008) [0x0000000000000000]              
	float                                              DirectionalExplosionMinDot;                       		// 0x02A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ExplosionDirection;                               		// 0x02AC (0x000C) [0x0000000000002020]              ( CPF_Net | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2829 ];

		return pClassPointer;
	};

	class UCameraShake* ChooseCameraShake ( struct FVector Epicenter, class APlayerController* PC );
	void SpawnCameraLensEffects ( );
	void DoExplosionCameraEffects ( );
	void DrawDebug ( );
	void DelayedExplosionDamage ( );
	void Explode ( class UGameExplosion* NewExplosionTemplate, struct FVector Direction );
	void SpawnExplosionFogVolume ( );
	void SpawnExplosionDecal ( );
	void SpawnExplosionParticleSystem ( class UParticleSystem* Template );
	void UpdateExplosionTemplateWithPerMaterialFX ( class UPhysicalMaterial* PhysMaterial );
	void SpecialCringeEffectsFor ( class AActor* Victim, float VictimDist );
	void SpecialPawnEffectsFor ( class AGamePawn* VictimPawn, float VictimDist );
	float GetEffectCheckRadius ( unsigned long bCauseDamage, unsigned long bCauseFractureEffects, unsigned long bCauseEffects );
	bool DoExplosionDamage ( unsigned long bCauseDamage, unsigned long bCauseEffects );
	float BoxDistanceToPoint ( struct FVector Start, struct FBox BBox );
	bool IsBehindExplosion ( class AActor* A );
	bool DoFullDamageToActor ( class AActor* Victim );
	class UPhysicalMaterial* GetPhysicalMaterial ( );
	void eventPreBeginPlay ( );
};



// Class GameFramework.GamePawn ( Property size: 2 iter: 5) 
// Class name index: 7583 
// 0x0004 (0x0554 - 0x0550)
class AGamePawn : public APawn
{
public:
	unsigned long                                      bLastHitWasHeadShot : 1;                          		// 0x0550 (0x0004) [0x0000000000002020] [0x00000001] ( CPF_Net | CPF_Transient )
	unsigned long                                      bRespondToExplosions : 1;                         		// 0x0550 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2831 ];

		return pClassPointer;
	};

	void ReattachMeshWithoutBeingSeen ( );
	void ReattachMesh ( );
	void eventUpdateShadowSettings ( unsigned long bInWantShadow );
};



// Class GameFramework.DebugCameraController ( Property size: 12 iter: 27) 
// Class name index: 7585 
// 0x004C (0x0780 - 0x0734)
class ADebugCameraController : public AGamePlayerController
{
public:
	struct FName                                       PrimaryKey;                                       		// 0x0734 (0x0008) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	struct FName                                       SecondaryKey;                                     		// 0x073C (0x0008) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	struct FName                                       UnselectKey;                                      		// 0x0744 (0x0008) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowSelectedInfo : 1;                            		// 0x074C (0x0004) [0x0000000000044000] [0x00000001] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bDrawDebugText : 1;                               		// 0x074C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsFrozenRendering : 1;                           		// 0x074C (0x0004) [0x0000000000000000] [0x00000004] 
	class UClass*                                      HUDClass;                                         		// 0x0750 (0x0008) [0x0000000000000000]              
	class APlayerController*                           OriginalControllerRef;                            		// 0x0758 (0x0008) [0x0000000000000000]              
	class UPlayer*                                     OriginalPlayer;                                   		// 0x0760 (0x0008) [0x0000000000000000]              
	class UDrawFrustumComponent*                       DrawFrustum;                                      		// 0x0768 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      SelectedActor;                                    		// 0x0770 (0x0008) [0x0000000000000000]              
	class UPrimitiveComponent*                         SelectedComponent;                                		// 0x0778 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2833 ];

		return pClassPointer;
	};

	struct FString ConsoleCommand ( struct FString Command, unsigned long bWriteToLog );
	void ShowDebugSelectedInfo ( );
	bool NativeInputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad );
	void InitDebugInputSystem ( );
	void DisableDebugCamera ( );
	void NormalSpeed ( );
	void MoreSpeed ( );
	void SetFreezeRendering ( );
	void OnDeactivate ( class APlayerController* PC );
	void OnActivate ( class APlayerController* PC );
	void eventPostBeginPlay ( );
	void Unselect ( );
	void SecondarySelect ( struct FVector HitLoc, struct FVector HitNormal, struct FTraceHitInfo HitInfo );
	void PrimarySelect ( struct FVector HitLoc, struct FVector HitNormal, struct FTraceHitInfo HitInfo );
};



// Class GameFramework.GameTypes ( Property size: 0 iter: 13) 
// Class name index: 7587 
// 0x0000 (0x0060 - 0x0060)
class UGameTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2835 ];

		return pClassPointer;
	};

};



// Class GameFramework.MobileHUD ( Property size: 26 iter: 40) 
// Class name index: 7589 
// 0x011C (0x067C - 0x0560)
class AMobileHUD : public AHUD
{
public:
	unsigned long                                      bShowGameHud : 1;                                 		// 0x0560 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bShowMobileHud : 1;                               		// 0x0560 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bForceMobileHUD : 1;                              		// 0x0560 (0x0004) [0x0000000000044000] [0x00000004] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowMobileTilt : 1;                              		// 0x0560 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      bDebugTouches : 1;                                		// 0x0560 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      bDebugZones : 1;                                  		// 0x0560 (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      bDebugZonePresses : 1;                            		// 0x0560 (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	unsigned long                                      bShowMotionDebug : 1;                             		// 0x0560 (0x0004) [0x0000000000004000] [0x00000080] ( CPF_Config )
	class UTexture2D*                                  JoystickBackground;                               		// 0x0564 (0x0008) [0x0000000000000000]              
	struct FTextureUVs                                 JoystickBackgroundUVs;                            		// 0x056C (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  JoystickHat;                                      		// 0x057C (0x0008) [0x0000000000000000]              
	struct FTextureUVs                                 JoystickHatUVs;                                   		// 0x0584 (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  ButtonImages[ 0x2 ];                              		// 0x0594 (0x0010) [0x0000000000000000]              
	struct FTextureUVs                                 ButtonUVs[ 0x2 ];                                 		// 0x05A4 (0x0020) [0x0000000000000000]              
	class UFont*                                       ButtonFont;                                       		// 0x05C4 (0x0008) [0x0000000000000000]              
	struct FColor                                      ButtonCaptionColor;                               		// 0x05CC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  TrackballBackground;                              		// 0x05D0 (0x0008) [0x0000000000000000]              
	struct FTextureUVs                                 TrackballBackgroundUVs;                           		// 0x05D8 (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  TrackballTouchIndicator;                          		// 0x05E8 (0x0008) [0x0000000000000000]              
	struct FTextureUVs                                 TrackballTouchIndicatorUVs;                       		// 0x05F0 (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  SliderImages[ 0x4 ];                              		// 0x0600 (0x0020) [0x0000000000000000]              
	struct FTextureUVs                                 SliderUVs[ 0x4 ];                                 		// 0x0620 (0x0040) [0x0000000000000000]              
	float                                              MobileTiltX;                                      		// 0x0660 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MobileTiltY;                                      		// 0x0664 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MobileTiltSize;                                   		// 0x0668 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< class USeqEvent_HudRender* >               KismetRenderEvents;                               		// 0x066C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2837 ];

		return pClassPointer;
	};

	void RenderKismetHud ( );
	void AddKismetRenderEvent ( class USeqEvent_HudRender* NewEvent );
	void RefreshKismetLinks ( );
	void DrawMobileZone_Slider ( class UMobileInputZone* Zone );
	void DrawMobileTilt ( class UMobilePlayerInput* MobileInput );
	void DrawMobileZone_Trackball ( class UMobileInputZone* Zone );
	void DrawMobileZone_Joystick ( class UMobileInputZone* Zone );
	void DrawMobileZone_Button ( class UMobileInputZone* Zone );
	void DrawInputZoneOverlays ( );
	void RenderMobileMenu ( );
	bool ShowMobileHud ( );
	void DrawMobileDebugString ( float XPos, float YPos, struct FString Str );
	void PostRender ( );
	void PostBeginPlay ( );
};



// Class GameFramework.MobileInputZone ( Property size: 84 iter: 97) 
// Class name index: 7591 
// 0x0200 (0x0260 - 0x0060)
class UMobileInputZone : public UObject
{
public:
	unsigned char                                      Type;                                             		// 0x0060 (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      TouchpadIndex;                                    		// 0x0061 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      State;                                            		// 0x0062 (0x0001) [0x0000000000000000]              
	unsigned char                                      SlideType;                                        		// 0x0063 (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     Caption;                                          		// 0x0064 (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FName                                       InputKey;                                         		// 0x0074 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FName                                       HorizontalInputKey;                               		// 0x007C (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FName                                       TapInputKey;                                      		// 0x0084 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FName                                       DoubleTapInputKey;                                		// 0x008C (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              VertMultiplier;                                   		// 0x0094 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              HorizMultiplier;                                  		// 0x0098 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Acceleration;                                     		// 0x009C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Smoothing;                                        		// 0x00A0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              EscapeVelocityStrength;                           		// 0x00A4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bScalePawnMovement : 1;                           		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRelativeX : 1;                                   		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRelativeY : 1;                                   		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRelativeSizeX : 1;                               		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRelativeSizeY : 1;                               		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bActiveSizeYFromX : 1;                            		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	unsigned long                                      bSizeYFromSizeX : 1;                              		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000040] ( CPF_Edit | CPF_Config )
	unsigned long                                      bApplyGlobalScaleToActiveSizes : 1;               		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000080] ( CPF_Edit | CPF_Config )
	unsigned long                                      bCenterX : 1;                                     		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000100] ( CPF_Edit | CPF_Config )
	unsigned long                                      bCenterY : 1;                                     		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000200] ( CPF_Edit | CPF_Config )
	unsigned long                                      bIsInvisible : 1;                                 		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000400] ( CPF_Edit | CPF_Config )
	unsigned long                                      bQuickDoubleTap : 1;                              		// 0x00A8 (0x0004) [0x0000000000004001] [0x00000800] ( CPF_Edit | CPF_Config )
	unsigned long                                      bCenterOnEvent : 1;                               		// 0x00A8 (0x0004) [0x0000000000004001] [0x00001000] ( CPF_Edit | CPF_Config )
	unsigned long                                      bSliderHasTrack : 1;                              		// 0x00A8 (0x0004) [0x0000000000004001] [0x00002000] ( CPF_Edit | CPF_Config )
	unsigned long                                      bFloatingTiltZone : 1;                            		// 0x00A8 (0x0004) [0x0000000000004001] [0x00004000] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseGentleTransitions : 1;                        		// 0x00A8 (0x0004) [0x0000000000004001] [0x00008000] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAllowFirstDeltaForTrackballZone : 1;             		// 0x00A8 (0x0004) [0x0000000000004001] [0x00010000] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRenderGuides : 1;                                		// 0x00A8 (0x0004) [0x0000000000004001] [0x00020000] ( CPF_Edit | CPF_Config )
	unsigned long                                      bIsDoubleTapAndHold : 1;                          		// 0x00A8 (0x0004) [0x0000000000000000] [0x00040000] 
	float                                              X;                                                		// 0x00AC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Y;                                                		// 0x00B0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SizeX;                                            		// 0x00B4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SizeY;                                            		// 0x00B8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ActiveSizeX;                                      		// 0x00BC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ActiveSizeY;                                      		// 0x00C0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              InitialX;                                         		// 0x00C4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InitialY;                                         		// 0x00C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InitialSizeX;                                     		// 0x00CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InitialSizeY;                                     		// 0x00D0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InitialActiveSizeX;                               		// 0x00D4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InitialActiveSizeY;                               		// 0x00D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              AuthoredGlobalScale;                              		// 0x00DC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Border;                                           		// 0x00E0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ResetCenterAfterInactivityTime;                   		// 0x00E4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TapDistanceConstraint;                            		// 0x00E8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ActivateTime;                                     		// 0x00EC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              DeactivateTime;                                   		// 0x00F0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      RenderColor;                                      		// 0x00F4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              InactiveAlpha;                                    		// 0x00F8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              CaptionXAdjustment;                               		// 0x00FC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              CaptionYAdjustment;                               		// 0x0100 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class UTexture2D*                                  OverrideTexture1;                                 		// 0x0104 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     OverrideTexture1Name;                             		// 0x010C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FTextureUVs                                 OverrideUVs1;                                     		// 0x011C (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class UTexture2D*                                  OverrideTexture2;                                 		// 0x012C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     OverrideTexture2Name;                             		// 0x0134 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FTextureUVs                                 OverrideUVs2;                                     		// 0x0144 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FVector2D                                   InitialLocation;                                  		// 0x0154 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   CurrentLocation;                                  		// 0x015C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   CurrentCenter;                                    		// 0x0164 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   InitialCenter;                                    		// 0x016C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   PreviousLocations[ 0x6 ];                         		// 0x0174 (0x0030) [0x0000000000000000]              
	float                                              PreviousMoveDeltaTimes[ 0x6 ];                    		// 0x01A4 (0x0018) [0x0000000000000000]              
	int                                                PreviousLocationCount;                            		// 0x01BC (0x0004) [0x0000000000000000]              
	float                                              LastTouchTime;                                    		// 0x01C0 (0x0004) [0x0000000000000000]              
	float                                              TimeSinceLastTapRepeat;                           		// 0x01C4 (0x0004) [0x0000000000000000]              
	float                                              AnimatingFadeOpacity;                             		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UMobilePlayerInput*                          InputOwner;                                       		// 0x01CC (0x0008) [0x0000000000000000]              
	float                                              TransitionTime;                                   		// 0x01D4 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   EscapeVelocity;                                   		// 0x01D8 (0x0008) [0x0000000000000000]              
	TArray< class USeqEvent_MobileZoneBase* >          MobileSeqEventHandlers;                           		// 0x01E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector2D                                   LastAxisValues;                                   		// 0x01F0 (0x0008) [0x0000000000000000]              
	float                                              TotalActiveTime;                                  		// 0x01F8 (0x0004) [0x0000000000000000]              
	float                                              LastWentActiveTime;                               		// 0x01FC (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnProcessInputDelegate__Delegate;               		// 0x0200 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0204 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnTapDelegate__Delegate;                        		// 0x0210 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0214 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDoubleTapDelegate__Delegate;                  		// 0x0220 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0224 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnProcessSlide__Delegate;                       		// 0x0230 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0234 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPreDrawZone__Delegate;                        		// 0x0240 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0244 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPostDrawZone__Delegate;                       		// 0x0250 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0254 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2839 ];

		return pClassPointer;
	};

	void AddKismetEventHandler ( class USeqEvent_MobileZoneBase* NewHandler );
	void OnPostDrawZone ( class UMobileInputZone* Zone, class UCanvas* Canvas );
	bool OnPreDrawZone ( class UMobileInputZone* Zone, class UCanvas* Canvas );
	bool OnProcessSlide ( class UMobileInputZone* Zone, unsigned char EventType, int SlideValue, struct FVector2D ViewportSize );
	bool OnDoubleTapDelegate ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation );
	bool OnTapDelegate ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation );
	bool OnProcessInputDelegate ( class UMobileInputZone* Zone, float DeltaTime, int Handle, unsigned char EventType, struct FVector2D TouchLocation );
	void DeactivateZone ( );
	void ActivateZone ( );
};



// Class GameFramework.MobileMenuObject ( Property size: 38 iter: 45) 
// Class name index: 7593 
// 0x007C (0x00DC - 0x0060)
class UMobileMenuObject : public UObject
{
public:
	unsigned long                                      bHasBeenInitialized : 1;                          		// 0x0060 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bRelativeLeft : 1;                                		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRelativeTop : 1;                                 		// 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRelativeWidth : 1;                               		// 0x0060 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bRelativeHeight : 1;                              		// 0x0060 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bApplyGlobalScaleLeft : 1;                        		// 0x0060 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bApplyGlobalScaleTop : 1;                         		// 0x0060 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bApplyGlobalScaleWidth : 1;                       		// 0x0060 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bApplyGlobalScaleHeight : 1;                      		// 0x0060 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bHeightRelativeToWidth : 1;                       		// 0x0060 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bXOffsetIsActual : 1;                             		// 0x0060 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bYOffsetIsActual : 1;                             		// 0x0060 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bIsActive : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bIsHidden : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bIsTouched : 1;                                   		// 0x0060 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bIsHighlighted : 1;                               		// 0x0060 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bTellSceneBeforeRendering : 1;                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00010000] 
	float                                              Left;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              Top;                                              		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              InitialLeft;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              InitialTop;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              InitialWidth;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              InitialHeight;                                    		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              AuthoredGlobalScale;                              		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TopLeeway;                                        		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              BottomLeeway;                                     		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              LeftLeeway;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              RightLeeway;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              XOffset;                                          		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              YOffset;                                          		// 0x009C (0x0004) [0x0000000000000000]              
	struct FString                                     Tag;                                              		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMobilePlayerInput*                          InputOwner;                                       		// 0x00B0 (0x0008) [0x0000000000000000]              
	float                                              Opacity;                                          		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UMobileMenuScene*                            OwnerScene;                                       		// 0x00BC (0x0008) [0x0000000000000000]              
	struct FString                                     RelativeToTag;                                    		// 0x00C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMobileMenuObject*                           RelativeTo;                                       		// 0x00D4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2841 ];

		return pClassPointer;
	};

	void GetIconIndexes ( TArray< int >* IconIndexes );
	void RenderObject ( class UCanvas* Canvas, float DeltaTime );
	void SetCanvasPos ( class UCanvas* Canvas, float OffsetX, float OffsetY );
	void InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization );
	void eventGetRealPosition ( float* PosX, float* PosY );
	bool eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime );
};



// Class GameFramework.MobileMenuImage ( Property size: 4 iter: 6) 
// Class name index: 7595 
// 0x0030 (0x010C - 0x00DC)
class UMobileMenuImage : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Image;                                            		// 0x00DC (0x0008) [0x0000000000000000]              
	unsigned char                                      ImageDrawStyle;                                   		// 0x00E4 (0x0001) [0x0000000000000000]              
	struct FUVCoords                                   ImageUVs;                                         		// 0x00E8 (0x0014) [0x0000000000000000]              
	struct FLinearColor                                ImageColor;                                       		// 0x00FC (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2843 ];

		return pClassPointer;
	};

	void RenderObject ( class UCanvas* Canvas, float DeltaTime );
};



// Class GameFramework.MobileMenuScene ( Property size: 26 iter: 42) 
// Class name index: 7597 
// 0x0070 (0x00D0 - 0x0060)
class UMobileMenuScene : public UObject
{
public:
	struct FString                                     MenuName;                                         		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UMobileMenuObject* >                 MenuObjects;                                      		// 0x0070 (0x0010) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UFont*                                       SceneCaptionFont;                                 		// 0x0080 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMobilePlayerInput*                          InputOwner;                                       		// 0x0088 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSceneDoesNotRequireInput : 1;                    		// 0x0090 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRelativeLeft : 1;                                		// 0x0090 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bRelativeTop : 1;                                 		// 0x0090 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bRelativeWidth : 1;                               		// 0x0090 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bRelativeHeight : 1;                              		// 0x0090 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bApplyGlobalScaleLeft : 1;                        		// 0x0090 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bApplyGlobalScaleTop : 1;                         		// 0x0090 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bApplyGlobalScaleWidth : 1;                       		// 0x0090 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bApplyGlobalScaleHeight : 1;                      		// 0x0090 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned char                                      TouchpadIndex;                                    		// 0x0094 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Left;                                             		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Top;                                              		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Width;                                            		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InitialLeft;                                      		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              InitialTop;                                       		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              InitialWidth;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              InitialHeight;                                    		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              AuthoredGlobalScale;                              		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Opacity;                                          		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   UITouchSound;                                     		// 0x00C0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   UIUnTouchSound;                                   		// 0x00C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2845 ];

		return pClassPointer;
	};

	bool MobileMenuCommand ( struct FString Command );
	class UMobileMenuObject* FindMenuObject ( struct FString Tag );
	void CleanUpScene ( );
	void Closed ( );
	bool Closing ( );
	void MadeTopMenu ( );
	void Opened ( struct FString Mode );
	bool eventOnSceneTouch ( unsigned char EventType, float TouchX, float TouchY, unsigned long bInside );
	void eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY );
	void PostRenderMenuObject ( class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta );
	void PreRenderMenuObject ( class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta );
	void RenderScene ( class UCanvas* Canvas, float RenderDelta );
	class UFont* GetSceneFont ( );
	void eventInitMenuScene ( class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization );
	float GetGlobalScaleY ( );
	float GetGlobalScaleX ( );
};



// Class GameFramework.MobilePlayerInput ( Property size: 36 iter: 77) 
// Class name index: 7599 
// 0x0294 (0x0554 - 0x02C0)
class UMobilePlayerInput : public UPlayerInput
{
public:
	struct FTouchData                                  Touches[ 0x5 ];                                   		// 0x02C0 (0x0190) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMobileMenuObject*                           InteractiveObject;                                		// 0x0450 (0x0008) [0x0000000000000000]              
	struct FDouble                                     InteractiveObjectLastTime;                        		// 0x0458 (0x0008) [0x0000000000000000]              
	TArray< struct FMobileInputGroup >                 MobileInputGroups;                                		// 0x0460 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	int                                                CurrentMobileGroup;                               		// 0x0470 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMobileInputZone* >                  MobileInputZones;                                 		// 0x0474 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FMobileInputZoneClassMap >          MobileInputZoneClasses;                           		// 0x0484 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MobilePitch;                                      		// 0x0494 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobilePitchCenter;                                		// 0x0498 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobilePitchMultiplier;                            		// 0x049C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobileYaw;                                        		// 0x04A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobileYawCenter;                                  		// 0x04A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobileYawMultiplier;                              		// 0x04A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobilePitchDeadzoneSize;                          		// 0x04AC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              MobileYawDeadzoneSize;                            		// 0x04B0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              MobileDoubleTapTime;                              		// 0x04B4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              MobileMinHoldForTap;                              		// 0x04B8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              MobileTapRepeatTime;                              		// 0x04BC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bAllowTouchesInCinematic : 1;                     		// 0x04C0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisableTouchInput : 1;                           		// 0x04C0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAbsoluteTouchLocations : 1;                      		// 0x04C0 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bCollapseTouchInput : 1;                          		// 0x04C0 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bFakeMobileTouches : 1;                           		// 0x04C0 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDisableSceneRender : 1;                          		// 0x04C0 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	float                                              ZoneTimeout;                                      		// 0x04C4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< class UMobileMenuScene* >                  MobileMenuStack;                                  		// 0x04C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMobileMenuScene*                            CurrentRenderMenu;                                		// 0x04D8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     NativeDebugString;                                		// 0x04E0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MobileInactiveTime;                               		// 0x04F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class USeqEvent_MobileBase* >              MobileSeqEventHandlers;                           		// 0x04F4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class USeqEvent_MobileRawInput* >          MobileRawInputSeqEventHandlers;                   		// 0x0504 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector2D                                   MobileViewportOffset;                             		// 0x0514 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   MobileViewportSize;                               		// 0x051C (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __OnTouchNotHandledInMenu__Delegate;              		// 0x0524 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0528 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPreviewTouch__Delegate;                       		// 0x0534 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0538 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnInputTouch__Delegate;                         		// 0x0544 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0548 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2847 ];

		return pClassPointer;
	};

	class UMobileMenuScene* OpenMobileMenuMode ( struct FString MenuClassName, struct FString Mode );
	class UMobileMenuScene* OpenMobileMenu ( struct FString MenuClassName );
	void MobileMenuCommand ( struct FString MenuCommand );
	void SceneRenderToggle ( );
	void PreClientTravel ( struct FString PendingURL, unsigned char TravelType, unsigned long bIsSeamlessTravel );
	void eventRenderMenus ( class UCanvas* Canvas, float RenderDelta );
	void eventCloseAllMenus ( );
	void eventCloseMenuScene ( class UMobileMenuScene* SceneToClose );
	class UMobileMenuScene* eventOpenMenuScene ( class UClass* SceneClass, struct FString Mode );
	void SetMobileInputConfig ( struct FString GroupName );
	void ActivateInputGroup ( struct FString GroupName );
	TArray< class UMobileInputZone* > GetCurrentZones ( );
	bool HasZones ( );
	class UMobileInputZone* FindorAddZone ( struct FString ZoneName );
	class UMobileInputZone* FindZone ( struct FString ZoneName );
	void AddKismetRawInputEventHandler ( class USeqEvent_MobileRawInput* NewHandler );
	void AddKismetEventHandler ( class USeqEvent_MobileBase* NewHandler );
	void eventRefreshKismetLinks ( );
	void SwapZoneOwners ( );
	void InitializeInputZones ( );
	void InitTouchSystem ( );
	void ClientInitInputSystem ( );
	void InitInputSystem ( );
	bool ProcessWorldTouch ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation );
	void SendInputAxis ( struct FName Key, float Delta, float DeltaTime );
	void SendInputKey ( struct FName Key, unsigned char Event, float AmountDepressed );
	void ConditionalUpdateInputZones ( int NewViewportX, int NewViewportY, int NewViewportSizeX, int NewViewportSizeY );
	void NativeInitializeInputZones ( unsigned long bIsFirstInitialize );
	void NativeInitializeInputSystem ( );
	void OnInputTouch ( int Handle, unsigned char Type, struct FVector2D TouchLocation, float DeviceTimestamp, int TouchpadIndex );
	bool OnPreviewTouch ( float X, float Y, int TouchpadIndex );
	void OnTouchNotHandledInMenu ( );
	void eventPlayerInput ( float DeltaTime );
	void CancelMobileInput ( );
	void ProcessMobileInput ( float DeltaTime );
};



// Class GameFramework.NavMeshGoal_OutOfViewFrom ( Property size: 3 iter: 6) 
// Class name index: 7601 
// 0x0018 (0x0094 - 0x007C)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                         		// 0x007C (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FVector                                     OutOfViewLocation;                                		// 0x0084 (0x000C) [0x0000000000000000]              
	unsigned long                                      bShowDebug : 1;                                   		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2849 ];

		return pClassPointer;
	};

	void Recycle ( );
	bool MustBeHiddenFromThisPoint ( class UNavigationHandle* NavHandle, struct FVector InOutOfViewLocation );
	void RecycleNative ( );
};



// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations ( Property size: 4 iter: 6) 
// Class name index: 7603 
// 0x002C (0x00A4 - 0x0078)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	struct FVector                                     Location;                                         		// 0x0078 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Rotation;                                         		// 0x0084 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              DistanceToCheck;                                  		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector >                           LocationsToCheck;                                 		// 0x0094 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2851 ];

		return pClassPointer;
	};

	void Recycle ( );
	bool BiasAgainstPolysWithinDistanceOfLocations ( class UNavigationHandle* NavHandle, struct FVector InLocation, struct FRotator InRotation, float InDistanceToCheck, TArray< struct FVector > InLocationsToCheck );
};



// Class GameFramework.SecondaryViewportClient ( Property size: 0 iter: 1) 
// Class name index: 7605 
// 0x0000 (0x0068 - 0x0068)
class USecondaryViewportClient : public UScriptViewportClient
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2853 ];

		return pClassPointer;
	};

	void eventPostRender ( class UCanvas* Canvas );
};



// Class GameFramework.MobileSecondaryViewportClient ( Property size: 0 iter: 1) 
// Class name index: 7607 
// 0x0000 (0x0068 - 0x0068)
class UMobileSecondaryViewportClient : public USecondaryViewportClient
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2855 ];

		return pClassPointer;
	};

	void eventPostRender ( class UCanvas* Canvas );
};



// Class GameFramework.SeqAct_ControlGameMovie ( Property size: 3 iter: 3) 
// Class name index: 7609 
// 0x0018 (0x0184 - 0x016C)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	struct FString                                     MovieName;                                        		// 0x016C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                StartOfRenderingMovieFrame;                       		// 0x017C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EndOfRenderingMovieFrame;                         		// 0x0180 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2857 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqAct_Deproject ( Property size: 6 iter: 6) 
// Class name index: 7611 
// 0x002C (0x0180 - 0x0154)
class USeqAct_Deproject : public USequenceAction
{
public:
	float                                              ScreenX;                                          		// 0x0154 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScreenY;                                          		// 0x0158 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TraceDistance;                                    		// 0x015C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     HitObject;                                        		// 0x0160 (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0168 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0174 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2859 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle ( Property size: 18 iter: 22) 
// Class name index: 7613 
// 0x004C (0x01A0 - 0x0154)
class USeqAct_GameCrowdPopulationManagerToggle : public USequenceAction
{
public:
	float                                              WarmupPopulationPct;                              		// 0x0154 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                   		// 0x0158 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClearOldArchetypes : 1;                          		// 0x0160 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                 		// 0x0160 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCastShadows : 1;                                 		// 0x0160 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bFillPotentialSpawnPoints : 1;                    		// 0x0160 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bForceObstacleChecking : 1;                       		// 0x0160 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bForceNavMeshPathing : 1;                         		// 0x0160 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bIndividualSpawner : 1;                           		// 0x0160 (0x0004) [0x0000000000000000] [0x00000040] 
	int                                                MaxAgents;                                        		// 0x0164 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnRate;                                        		// 0x0168 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLightingChannelContainer                   AgentLightingChannel;                             		// 0x016C (0x0004) [0x0000000000000000]              
	float                                              MaxSpawnDist;                                     		// 0x0170 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinBehindSpawnDist;                               		// 0x0174 (0x0004) [0x0000000000000000]              
	TArray< class AGameCrowdDestination* >             PotentialSpawnPoints;                             		// 0x0178 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AgentWarmupTime;                                  		// 0x0188 (0x0004) [0x0000000000000000]              
	int                                                NumAgentsToTickPerFrame;                          		// 0x018C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AGameCrowdAgent* >                   LastSpawnedList;                                  		// 0x0190 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2861 ];

		return pClassPointer;
	};

	void AgentDestroyed ( class AGameCrowdAgent* Agent );
	float GetMaxSpawnDist ( );
	void eventFillCrowdSpawnInfoItem ( class AGameCrowdPopulationManager* PopMgr, struct FCrowdSpawnInfoItem* out_Item );
	int eventGetObjClassVersion ( );
};



// Class GameFramework.SeqAct_GameCrowdSpawner ( Property size: 0 iter: 1) 
// Class name index: 7615 
// 0x0000 (0x01A0 - 0x01A0)
class USeqAct_GameCrowdSpawner : public USeqAct_GameCrowdPopulationManagerToggle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2863 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};



// Class GameFramework.SeqAct_MobileAddInputZones ( Property size: 2 iter: 2) 
// Class name index: 7617 
// 0x0010 (0x0164 - 0x0154)
class USeqAct_MobileAddInputZones : public USequenceAction
{
public:
	struct FName                                       ZoneName;                                         		// 0x0154 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMobileInputZone*                            NewZone;                                          		// 0x015C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2865 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqAct_MobileClearInputZones ( Property size: 0 iter: 0) 
// Class name index: 7619 
// 0x0000 (0x0154 - 0x0154)
class USeqAct_MobileClearInputZones : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2867 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqAct_MobileRemoveInputZone ( Property size: 1 iter: 1) 
// Class name index: 7621 
// 0x0010 (0x0164 - 0x0154)
class USeqAct_MobileRemoveInputZone : public USequenceAction
{
public:
	struct FString                                     ZoneName;                                         		// 0x0154 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2869 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqAct_MobileSaveLoadValue ( Property size: 0 iter: 1) 
// Class name index: 7623 
// 0x0000 (0x0154 - 0x0154)
class USeqAct_MobileSaveLoadValue : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2871 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};



// Class GameFramework.SeqAct_ModifyProperty ( Property size: 1 iter: 2) 
// Class name index: 7625 
// 0x0010 (0x0164 - 0x0154)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	TArray< struct FPropertyInfo >                     Properties;                                       		// 0x0154 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2873 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqAct_PlayAgentAnimation ( Property size: 10 iter: 12) 
// Class name index: 7627 
// 0x002C (0x0198 - 0x016C)
class USeqAct_PlayAgentAnimation : public USeqAct_Latent
{
public:
	TArray< struct FName >                             AnimationList;                                    		// 0x016C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BlendInTime;                                      		// 0x017C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0180 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseRootMotion : 1;                               		// 0x0184 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFaceActionTargetFirst : 1;                       		// 0x0184 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x0184 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBlendBetweenAnims : 1;                           		// 0x0184 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	int                                                LoopIndex;                                        		// 0x0188 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoopTime;                                         		// 0x018C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      ActionTarget;                                     		// 0x0190 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2875 ];

		return pClassPointer;
	};

	void SetCurrentAnimationActionFor ( class AGameCrowdAgentSkeletal* Agent );
	int eventGetObjClassVersion ( );
};



// Class GameFramework.SeqEvent_CrowdAgentReachedDestination ( Property size: 0 iter: 0) 
// Class name index: 7629 
// 0x0000 (0x0178 - 0x0178)
class USeqEvent_CrowdAgentReachedDestination : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2877 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqEvent_HudRender ( Property size: 3 iter: 5) 
// Class name index: 7631 
// 0x0018 (0x0190 - 0x0178)
class USeqEvent_HudRender : public USequenceEvent
{
public:
	TArray< class UObject* >                           Targets;                                          		// 0x0178 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bIsActive : 1;                                    		// 0x0188 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              AuthoredGlobalScale;                              		// 0x018C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2879 ];

		return pClassPointer;
	};

	void Render ( class UCanvas* TargetCanvas, class AHUD* TargetHud );
	void eventRegisterEvent ( );
};



// Class GameFramework.SeqEvent_MobileBase ( Property size: 0 iter: 2) 
// Class name index: 7633 
// 0x0000 (0x0178 - 0x0178)
class USeqEvent_MobileBase : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2881 ];

		return pClassPointer;
	};

	void eventAddToMobileInput ( class UMobilePlayerInput* MPI );
	void eventRegisterEvent ( );
};



// Class GameFramework.SeqEvent_MobileMotion ( Property size: 6 iter: 7) 
// Class name index: 7635 
// 0x0018 (0x0190 - 0x0178)
class USeqEvent_MobileMotion : public USeqEvent_MobileBase
{
public:
	float                                              Roll;                                             		// 0x0178 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x017C (0x0004) [0x0000000000000000]              
	float                                              Yaw;                                              		// 0x0180 (0x0004) [0x0000000000000000]              
	float                                              DeltaRoll;                                        		// 0x0184 (0x0004) [0x0000000000000000]              
	float                                              DeltaPitch;                                       		// 0x0188 (0x0004) [0x0000000000000000]              
	float                                              DeltaYaw;                                         		// 0x018C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2883 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};



// Class GameFramework.SeqEvent_MobileZoneBase ( Property size: 1 iter: 2) 
// Class name index: 7637 
// 0x0010 (0x0188 - 0x0178)
class USeqEvent_MobileZoneBase : public USeqEvent_MobileBase
{
public:
	struct FString                                     TargetZoneName;                                   		// 0x0178 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2885 ];

		return pClassPointer;
	};

	void eventAddToMobileInput ( class UMobilePlayerInput* MPI );
};



// Class GameFramework.SeqEvent_MobileButton ( Property size: 3 iter: 3) 
// Class name index: 7639 
// 0x0004 (0x018C - 0x0188)
class USeqEvent_MobileButton : public USeqEvent_MobileZoneBase
{
public:
	unsigned long                                      bWasActiveLastFrame : 1;                          		// 0x0188 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSendPressedOnlyOnTouchDown : 1;                  		// 0x0188 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSendPressedOnlyOnTouchUp : 1;                    		// 0x0188 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2887 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqEvent_MobileInput ( Property size: 6 iter: 6) 
// Class name index: 7641 
// 0x0018 (0x01A0 - 0x0188)
class USeqEvent_MobileInput : public USeqEvent_MobileZoneBase
{
public:
	float                                              XAxisValue;                                       		// 0x0188 (0x0004) [0x0000000000000000]              
	float                                              YAxisValue;                                       		// 0x018C (0x0004) [0x0000000000000000]              
	float                                              CenterX;                                          		// 0x0190 (0x0004) [0x0000000000000000]              
	float                                              CenterY;                                          		// 0x0194 (0x0004) [0x0000000000000000]              
	float                                              CurrentX;                                         		// 0x0198 (0x0004) [0x0000000000000000]              
	float                                              CurrentY;                                         		// 0x019C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2889 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqEvent_MobileLook ( Property size: 3 iter: 3) 
// Class name index: 7643 
// 0x0014 (0x019C - 0x0188)
class USeqEvent_MobileLook : public USeqEvent_MobileZoneBase
{
public:
	float                                              Yaw;                                              		// 0x0188 (0x0004) [0x0000000000000000]              
	float                                              StickStrength;                                    		// 0x018C (0x0004) [0x0000000000000000]              
	struct FVector                                     RotationVector;                                   		// 0x0190 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2891 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqEvent_MobileRawInput ( Property size: 5 iter: 6) 
// Class name index: 7645 
// 0x0014 (0x018C - 0x0178)
class USeqEvent_MobileRawInput : public USequenceEvent
{
public:
	int                                                TouchIndex;                                       		// 0x0178 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TouchpadIndex;                                    		// 0x017C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TouchLocationX;                                   		// 0x0180 (0x0004) [0x0000000000000000]              
	float                                              TouchLocationY;                                   		// 0x0184 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0188 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2893 ];

		return pClassPointer;
	};

	void eventRegisterEvent ( );
};



// Class GameFramework.SeqEvent_MobileObjectPicker ( Property size: 6 iter: 6) 
// Class name index: 7647 
// 0x0038 (0x01C4 - 0x018C)
class USeqEvent_MobileObjectPicker : public USeqEvent_MobileRawInput
{
public:
	float                                              TraceDistance;                                    		// 0x018C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCheckonTouch : 1;                                		// 0x0190 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FVector                                     FinalTouchLocation;                               		// 0x0194 (0x000C) [0x0000000000000000]              
	struct FVector                                     FinalTouchNormal;                                 		// 0x01A0 (0x000C) [0x0000000000000000]              
	class UObject*                                     FinalTouchObject;                                 		// 0x01AC (0x0008) [0x0000000000000000]              
	TArray< class UObject* >                           Targets;                                          		// 0x01B4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2895 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqEvent_MobileSwipe ( Property size: 5 iter: 5) 
// Class name index: 7649 
// 0x0024 (0x01B0 - 0x018C)
class USeqEvent_MobileSwipe : public USeqEvent_MobileRawInput
{
public:
	float                                              Tolerance;                                        		// 0x018C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDistance;                                      		// 0x0190 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   InitialTouch;                                     		// 0x0194 (0x0008) [0x0000000000000000]              
	TArray< class AActor* >                            TouchedActors;                                    		// 0x019C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              TraceDistance;                                    		// 0x01AC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2897 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameSkelCtrl_Recoil ( Property size: 6 iter: 9) 
// Class name index: 7651 
// 0x007C (0x0170 - 0x00F4)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                             		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlayRecoil : 1;                                  		// 0x00F4 (0x0004) [0x0000000000002001] [0x00000002] ( CPF_Edit | CPF_Transient )
	unsigned long                                      bOldPlayRecoil : 1;                               		// 0x00F4 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bApplyControl : 1;                                		// 0x00F4 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	struct FRecoilDef                                  Recoil;                                           		// 0x00F8 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Aim;                                              		// 0x0168 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2899 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameCameraBase ( Property size: 2 iter: 10) 
// Class name index: 7653 
// 0x000C (0x006C - 0x0060)
class UGameCameraBase : public UObject
{
public:
	class AGamePlayerCamera*                           PlayerCamera;                                     		// 0x0060 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bResetCameraInterpolation : 1;                    		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2901 ];

		return pClassPointer;
	};

	void eventModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void Init ( );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
	void ResetInterpolation ( );
	void OnBecomeInActive ( class UGameCameraBase* NewCamera );
	void OnBecomeActive ( class UGameCameraBase* OldCamera );
};



// Class GameFramework.GameThirdPersonCamera ( Property size: 52 iter: 76) 
// Class name index: 7655 
// 0x0168 (0x01D4 - 0x006C)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	float                                              WorstLocBlockedPct;                               		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              WorstLocPenetrationExtentScale;                   		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PenetrationBlendOutTime;                          		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PenetrationBlendInTime;                           		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PenetrationBlockedPct;                            		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              PenetrationExtentScale;                           		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastActualOriginOffset;                           		// 0x0084 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastActualCameraOrigin;                           		// 0x0090 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LastActualCameraOriginRot;                        		// 0x009C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              OriginOffsetInterpSpeed;                          		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastViewOffset;                                   		// 0x00AC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastCamFOV;                                       		// 0x00B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastIdealCameraOrigin;                            		// 0x00BC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LastIdealCameraOriginRot;                         		// 0x00C8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefault;                            		// 0x00D4 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UClass*                                      ThirdPersonCamDefaultClass;                       		// 0x00DC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UGameThirdPersonCameraMode*                  CurrentCamMode;                                   		// 0x00E4 (0x0008) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	float                                              LastHeightAdjustment;                             		// 0x00EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPitchAdjustment;                              		// 0x00F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastYawAdjustment;                                		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LeftoverPitchAdjustment;                          		// 0x00F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Focus_BackOffStrength;                            		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Focus_StepHeightAdjustment;                       		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Focus_MaxTries;                                   		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Focus_FastAdjustKickInTime;                       		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastFocusChangeTime;                              		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ActualFocusPointWorldLoc;                         		// 0x0110 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastFocusPointLoc;                                		// 0x011C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FCamFocusPointParams                        FocusPoint;                                       		// 0x0128 (0x0038) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFocusPointSet : 1;                               		// 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFocusPointSuccessful : 1;                        		// 0x0160 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDoingACameraTurn : 1;                            		// 0x0160 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTurnAlignTargetWhenFinished : 1;                 		// 0x0160 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDrawDebug : 1;                                   		// 0x0160 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDoingDirectLook : 1;                             		// 0x0160 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bDebugChangedCameraMode : 1;                      		// 0x0160 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bDoSeamlessPivotTransition : 1;                   		// 0x0160 (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	float                                              TurnCurTime;                                      		// 0x0164 (0x0004) [0x0000000000000000]              
	int                                                TurnStartAngle;                                   		// 0x0168 (0x0004) [0x0000000000000000]              
	int                                                TurnEndAngle;                                     		// 0x016C (0x0004) [0x0000000000000000]              
	float                                              TurnTotalTime;                                    		// 0x0170 (0x0004) [0x0000000000000000]              
	float                                              TurnDelay;                                        		// 0x0174 (0x0004) [0x0000000000000000]              
	int                                                LastPostCamTurnYaw;                               		// 0x0178 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                DirectLookYaw;                                    		// 0x017C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DirectLookInterpSpeed;                            		// 0x0180 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WorstLocInterpSpeed;                              		// 0x0184 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastWorstLocationLocal;                           		// 0x0188 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastWorstLocation;                                		// 0x0194 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastPreModifierCameraLoc;                         		// 0x01A0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LastPreModifierCameraRot;                         		// 0x01AC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FPenetrationAvoidanceFeeler >       PenetrationAvoidanceFeelers;                      		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     LastOffsetAdjustment;                             		// 0x01C8 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2903 ];

		return pClassPointer;
	};

	void ResetInterpolation ( );
	void eventModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void OnBecomeActive ( class UGameCameraBase* OldCamera );
	void ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void UpdateCameraMode ( class APawn* P );
	class UGameThirdPersonCameraMode* FindBestCameraMode ( class APawn* P );
	void AdjustFocusPointInterpolation ( struct FRotator Delta );
	struct FVector GetActualFocusLocation ( );
	void eventUpdateFocusPoint ( class APawn* P );
	void ClearFocusPoint ( unsigned long bLeaveCameraRotation );
	class AActor* GetFocusActor ( );
	void SetFocusOnActor ( class AActor* FocusActor, struct FName FocusBoneName, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg );
	void SetFocusOnLoc ( struct FVector FocusWorldLoc, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg );
	void AdjustTurn ( int AngleOffset );
	void EndTurn ( );
	void BeginTurn ( int StartAngle, int EndAngle, float TimeSec, float DelaySec, unsigned long bAlignTargetWhenFinished );
	void PlayerUpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
	void UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
	float eventGetDesiredFOV ( class APawn* ViewedPawn );
	void Init ( );
	void Reset ( );
	class UGameThirdPersonCameraMode* CreateCameraMode ( class UClass* ModeClass );
};



// Class GameFramework.GamePlayerCamera ( Property size: 13 iter: 26) 
// Class name index: 7657 
// 0x0088 (0x0610 - 0x0588)
class AGamePlayerCamera : public ACamera
{
public:
	class UGameCameraBase*                             ThirdPersonCam;                                   		// 0x0588 (0x0008) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	class UClass*                                      ThirdPersonCameraClass;                           		// 0x0590 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UGameCameraBase*                             FixedCam;                                         		// 0x0598 (0x0008) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	class UClass*                                      FixedCameraClass;                                 		// 0x05A0 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UGameCameraBase*                             CurrentCamera;                                    		// 0x05A8 (0x0008) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	unsigned long                                      bUseForcedCamFOV : 1;                             		// 0x05B0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bInterpolateCamChanges : 1;                       		// 0x05B0 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bResetInterp : 1;                                 		// 0x05B0 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              ForcedCamFOV;                                     		// 0x05B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      LastViewTarget;                                   		// 0x05B8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              SplitScreenShakeScale;                            		// 0x05C0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class AActor*                                      LastTargetBase;                                   		// 0x05C4 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x05CC (0x0004) MISSED OFFSET
	struct FMatrix                                     LastTargetBaseTM;                                 		// 0x05D0 (0x0040) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2905 ];

		return pClassPointer;
	};

	float AdjustFOVForViewport ( float inHorizFOV, class APawn* CameraTargetPawn );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void ResetInterpolation ( );
	void SetColorScale ( struct FVector NewColorScale );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void UpdateCameraLensEffects ( struct FTViewTarget* OutVT );
	void UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
	bool ShouldConstrainAspectRatio ( );
	class UGameCameraBase* FindBestCameraType ( class AActor* CameraTarget );
	void Reset ( );
	void PostBeginPlay ( );
	void CacheLastTargetBaseInfo ( class AActor* TargetBase );
	class UGameCameraBase* CreateCamera ( class UClass* CameraClass );
};



// Class GameFramework.GameThirdPersonCameraMode ( Property size: 57 iter: 72) 
// Class name index: 7659 
// 0x01F5 (0x0255 - 0x0060)
class UGameThirdPersonCameraMode : public UObject
{
public:
	class UGameThirdPersonCamera*                      ThirdPersonCam;                                   		// 0x0060 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              FOVAngle;                                         		// 0x0068 (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	float                                              BlendTime;                                        		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLockedToViewTarget : 1;                          		// 0x0070 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bDirectLook : 1;                                  		// 0x0070 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bFollowTarget : 1;                                		// 0x0070 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bInterpLocation : 1;                              		// 0x0070 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bUsePerAxisOriginLocInterp : 1;                   		// 0x0070 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bInterpRotation : 1;                              		// 0x0070 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bRotInterpSpeedConstant : 1;                      		// 0x0070 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bDoPredictiveAvoidance : 1;                       		// 0x0070 (0x0004) [0x0000000000000003] [0x00000080] ( CPF_Edit | CPF_Const )
	unsigned long                                      bValidateWorstLoc : 1;                            		// 0x0070 (0x0004) [0x0000000000000003] [0x00000100] ( CPF_Edit | CPF_Const )
	unsigned long                                      bSkipCameraCollision : 1;                         		// 0x0070 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bSmoothViewOffsetPitchChanges : 1;                		// 0x0070 (0x0004) [0x0000000000000003] [0x00000400] ( CPF_Edit | CPF_Const )
	unsigned long                                      bApplyDeltaViewOffset : 1;                        		// 0x0070 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bAdjustDOF : 1;                                   		// 0x0070 (0x0004) [0x0000000000000003] [0x00001000] ( CPF_Edit | CPF_Const )
	unsigned long                                      bDOFUpdated : 1;                                  		// 0x0070 (0x0004) [0x0000000000002000] [0x00002000] ( CPF_Transient )
	unsigned long                                      bNoFOVPostProcess : 1;                            		// 0x0070 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bInterpViewOffsetOnlyForCamTransition : 1;        		// 0x0070 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	float                                              FollowingInterpSpeed_Pitch;                       		// 0x0074 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FollowingInterpSpeed_Yaw;                         		// 0x0078 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FollowingInterpSpeed_Roll;                        		// 0x007C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FollowingCameraVelThreshold;                      		// 0x0080 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              OriginLocInterpSpeed;                             		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PerAxisOriginLocInterpSpeed;                      		// 0x0088 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              OriginRotInterpSpeed;                             		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     StrafeLeftAdjustment;                             		// 0x0098 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     StrafeRightAdjustment;                            		// 0x00A4 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StrafeOffsetScalingThreshold;                     		// 0x00B0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StrafeOffsetInterpSpeedIn;                        		// 0x00B4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StrafeOffsetInterpSpeedOut;                       		// 0x00B8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     LastStrafeOffset;                                 		// 0x00BC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     RunFwdAdjustment;                                 		// 0x00C8 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     RunBackAdjustment;                                		// 0x00D4 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RunOffsetScalingThreshold;                        		// 0x00E0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RunOffsetInterpSpeedIn;                           		// 0x00E4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RunOffsetInterpSpeedOut;                          		// 0x00E8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     LastRunOffset;                                    		// 0x00EC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     WorstLocOffset;                                   		// 0x00F8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     TargetRelativeCameraOriginOffset;                 		// 0x0104 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FViewOffsetData                             ViewOffset;                                       		// 0x0110 (0x0024) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[ 0x6 ];            		// 0x0134 (0x00D8) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_FalloffExponent;                              		// 0x020C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_BlurKernelSize;                               		// 0x0210 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_FocusInnerRadius;                             		// 0x0214 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_MaxNearBlurAmount;                            		// 0x0218 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_MaxFarBlurAmount;                             		// 0x021C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              LastDOFRadius;                                    		// 0x0220 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastDOFDistance;                                  		// 0x0224 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DOFDistanceInterpSpeed;                           		// 0x0228 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     DOFTraceExtent;                                   		// 0x022C (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_RadiusFalloff;                                		// 0x0238 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   DOF_RadiusRange;                                  		// 0x023C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   DOF_RadiusDistRange;                              		// 0x0244 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ViewOffsetInterp;                                 		// 0x024C (0x0004) [0x0000000000000000]              
	float                                              OffsetAdjustmentInterpSpeed;                      		// 0x0250 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CurrentViewportType;                              		// 0x0254 (0x0001) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2907 ];

		return pClassPointer;
	};

	void SetViewOffset ( struct FViewOffsetData* NewViewOffset );
	void ModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void UpdatePostProcess ( float DeltaTime, struct FTViewTarget* VT );
	struct FVector DOFTrace ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace );
	struct FVector GetDOFFocusLoc ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace );
	void ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	bool SetFocusPoint ( class APawn* ViewedPawn );
	struct FVector eventGetCameraWorstCaseLoc ( class APawn* TargetPawn, struct FTViewTarget CurrentViewTarget );
	float GetDesiredFOV ( class APawn* ViewedPawn );
	struct FVector eventAdjustViewOffset ( class APawn* P, struct FVector Offset );
	void OnBecomeInActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode );
	void OnBecomeActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode );
	void Init ( );
};



// Class GameFramework.GameThirdPersonCameraMode_Default ( Property size: 3 iter: 3) 
// Class name index: 7661 
// 0x000F (0x0264 - 0x0255)
class UGameThirdPersonCameraMode_Default : public UGameThirdPersonCameraMode
{
public:
	float                                              WorstLocAimingZOffset;                            		// 0x0258 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bTemporaryOriginRotInterp : 1;                    		// 0x025C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              TemporaryOriginRotInterpSpeed;                    		// 0x0260 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2909 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameSpecialMove ( Property size: 14 iter: 35) 
// Class name index: 7663 
// 0x0048 (0x00A8 - 0x0060)
class UGameSpecialMove : public UObject
{
public:
	class AGamePawn*                                   PawnOwner;                                        		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FName                                       Handle;                                           		// 0x0068 (0x0008) [0x0000000000000000]              
	float                                              LastCanDoSpecialMoveTime;                         		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLastCanDoSpecialMove : 1;                        		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReachPreciseDestination : 1;                     		// 0x0074 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bReachedPreciseDestination : 1;                   		// 0x0074 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bReachPreciseRotation : 1;                        		// 0x0074 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bReachedPreciseRotation : 1;                      		// 0x0074 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bForcePrecisePosition : 1;                        		// 0x0074 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     PreciseDestination;                               		// 0x0078 (0x000C) [0x0000000000000002]              ( CPF_Const )
	class AActor*                                      PreciseDestBase;                                  		// 0x0084 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     PreciseDestRelOffset;                             		// 0x008C (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              PreciseRotationInterpolationTime;                 		// 0x0098 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    PreciseRotation;                                  		// 0x009C (0x000C) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2911 ];

		return pClassPointer;
	};

	struct FVector RelativeToWorldOffset ( struct FRotator InRotation, struct FVector RelativeSpaceOffset );
	struct FVector WorldToRelativeOffset ( struct FRotator InRotation, struct FVector WorldSpaceOffset );
	void ForcePawnRotation ( class APawn* P, struct FRotator NewRotation );
	bool MessageEvent ( struct FName EventName, class UObject* Sender );
	void ResetFacePreciseRotation ( );
	void eventReachedPrecisePosition ( );
	void SetFacePreciseRotation ( struct FRotator RotationToFace, float InterpolationTime );
	void SetReachPreciseDestination ( struct FVector DestinationToReach, unsigned long bCancel );
	bool ShouldReplicate ( );
	void SpecialMoveFlagsUpdated ( );
	void Tick ( float DeltaTime );
	void SpecialMoveEnded ( struct FName PrevMove, struct FName NextMove );
	void SpecialMoveStarted ( unsigned long bForced, struct FName PrevMove );
	bool InternalCanDoSpecialMove ( );
	bool CanDoSpecialMove ( unsigned long bForceCheck );
	bool CanOverrideSpecialMove ( struct FName InMove );
	bool CanOverrideMoveWith ( struct FName NewMove );
	bool CanChainMove ( struct FName NextMove );
	void ExtractSpecialMoveFlags ( int Flags );
	void InitSpecialMoveFlags ( int* out_Flags );
	void InitSpecialMove ( class AGamePawn* inPawn, struct FName InHandle );
};



// Class GameFramework.GameStateObject ( Property size: 7 iter: 12) 
// Class name index: 7665 
// 0x0030 (0x00B8 - 0x0088)
class UGameStateObject : public UGameplayEventsHandler
{
public:
	struct FArray_Mirror                               TeamStates;                                       		// 0x0088 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FArray_Mirror                               PlayerStates;                                     		// 0x0098 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned char                                      SessionType;                                      		// 0x00A8 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsMatchStarted : 1;                              		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsRoundStarted : 1;                              		// 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                RoundNumber;                                      		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                MaxRoundNumber;                                   		// 0x00B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2913 ];

		return pClassPointer;
	};

	void Reset ( );
	void eventPreProcessStream ( );
};



// Class GameFramework.GameStatsAggregator ( Property size: 12 iter: 50) 
// Class name index: 7667 
// 0x0248 (0x02D0 - 0x0088)
class UGameStatsAggregator : public UGameplayEventsHandler
{
public:
	class UGameStateObject*                            GameState;                                        		// 0x0088 (0x0008) [0x0000000000000000]              
	TArray< struct FAggregateEventMapping >            AggregatesList;                                   		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMap_Mirror                                 AggregateEventsMapping;                           		// 0x00A0 (0x0048) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FGameplayEventMetaData >            AggregateEvents;                                  		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AggregatesFound;                                  		// 0x00F8 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FGameEvents                                 AllGameEvents;                                    		// 0x0108 (0x0048) [0x0000000000000000]              
	TArray< struct FTeamEvents >                       AllTeamEvents;                                    		// 0x0150 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FPlayerEvents >                     AllPlayerEvents;                                  		// 0x0160 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FWeaponEvents                               AllWeaponEvents;                                  		// 0x0170 (0x0058) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FProjectileEvents                           AllProjectileEvents;                              		// 0x01C8 (0x0058) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FPawnEvents                                 AllPawnEvents;                                    		// 0x0220 (0x0058) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FDamageEvents                               AllDamageEvents;                                  		// 0x0278 (0x0058) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2915 ];

		return pClassPointer;
	};

	bool GetAggregateMappingIDs ( int EventID, int* AggregateID, int* TargetAggregateID );
	void Reset ( );
	void eventPostProcessStream ( );
	void eventPreProcessStream ( );
};



// Class GameFramework.GameWaveForms ( Property size: 4 iter: 4) 
// Class name index: 32270 
// 0x0020 (0x0080 - 0x0060)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                           		// 0x0060 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                            		// 0x0068 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                              		// 0x0070 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                               		// 0x0078 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42712 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqAct_ToggleMouseCursor ( Property size: 0 iter: 0) 
// Class name index: 32895 
// 0x0000 (0x0154 - 0x0154)
class USeqAct_ToggleMouseCursor : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42717 ];

		return pClassPointer;
	};

};



// Class GameFramework.DebugCameraHUD ( Property size: 1 iter: 4) 
// Class name index: 32011 
// 0x0004 (0x0564 - 0x0560)
class ADebugCameraHUD : public AHUD
{
public:
	unsigned long                                      bDrawDebugText : 1;                               		// 0x0560 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42773 ];

		return pClassPointer;
	};

	void eventPostRender ( );
	bool DisplayMaterials ( float X, float DY, class UMeshComponent* MeshComp, float* Y );
	void eventPostBeginPlay ( );
};



// Class GameFramework.DebugCameraInput ( Property size: 0 iter: 1) 
// Class name index: 32012 
// 0x0000 (0x02C0 - 0x02C0)
class UDebugCameraInput : public UPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42776 ];

		return pClassPointer;
	};

	bool InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad );
};



// Class GameFramework.GameCrowdSpawnInterface ( Property size: 0 iter: 1) 
// Class name index: 32238 
// 0x0000 (0x0060 - 0x0060)
class UGameCrowdSpawnInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43182 ];

		return pClassPointer;
	};

	void GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot );
};



// Class GameFramework.DynamicGameCrowdDestination ( Property size: 0 iter: 0) 
// Class name index: 32122 
// 0x0000 (0x02F4 - 0x02F4)
class ADynamicGameCrowdDestination : public AGameCrowdDestination
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43183 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameAICmd_Hover_MoveToGoal ( Property size: 11 iter: 17) 
// Class name index: 32230 
// 0x0044 (0x00C8 - 0x0084)
class UGameAICmd_Hover_MoveToGoal : public UGameAICommand
{
public:
	class AActor*                                      Path;                                             		// 0x0084 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      Find;                                             		// 0x008C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      Goal;                                             		// 0x0094 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              Radius;                                           		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasFiring : 1;                                   		// 0x00A0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              DesiredHoverHeight;                               		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              CurrentHoverHeight;                               		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SubGoalReachDist;                                 		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              GoalDistance;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	struct FVector                                     MoveVectDest;                                     		// 0x00B4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UReachSpec*                                  CurrentSpec;                                      		// 0x00C0 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43275 ];

		return pClassPointer;
	};

	bool IsEnemyBasedOnInterpActor ( class APawn* InEnemy );
	bool HandlePathObstruction ( class AActor* BlockedBy );
	void Pushed ( );
	bool MoveToGoal ( class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight );
};



// Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh ( Property size: 17 iter: 34) 
// Class name index: 32231 
// 0x0098 (0x011C - 0x0084)
class UGameAICmd_Hover_MoveToGoal_Mesh : public UGameAICommand
{
public:
	class AActor*                                      Find;                                             		// 0x0084 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              Radius;                                           		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasFiring : 1;                                   		// 0x0090 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bFinalApproach : 1;                               		// 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFallbackMoveToMesh : 1;                          		// 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              DesiredHoverHeight;                               		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              CurrentHoverHeight;                               		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SubGoalReachDist;                                 		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              GoalDistance;                                     		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     IntermediatePoint;                                		// 0x00A4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastMovePoint;                                    		// 0x00B0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                NumMovePointFails;                                		// 0x00BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MaxMovePointFails;                                		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FVector                                     FallbackDest;                                     		// 0x00C4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      MoveToActor;                                      		// 0x00D0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FBasedPosition                              LastMoveTargetPathLocation;                       		// 0x00D8 (0x0038) [0x0000000000000000]              
	struct FVector                                     InitialFinalDestination;                          		// 0x0110 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43321 ];

		return pClassPointer;
	};

	void eventDrawDebug ( class AHUD* H, struct FName Category );
	bool IsEnemyBasedOnInterpActor ( class APawn* InEnemy );
	bool ShouldUpdateBreadCrumbs ( );
	bool HasReachedGoal ( );
	void ReEvaluatePath ( );
	bool HandlePathObstruction ( class AActor* BlockedBy );
	void Tick ( float DeltaTime );
	void Popped ( );
	void Pushed ( );
	bool HoverBackToMesh ( class AGameAIController* AI );
	bool HoverToPoint ( class AGameAIController* AI, struct FVector InPoint, float InGoalDistance, float InHoverHeight );
	bool HoverToGoal ( class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight );
};



// Class GameFramework.GameCrowd_ListOfAgents ( Property size: 1 iter: 1) 
// Class name index: 32233 
// 0x0010 (0x0070 - 0x0060)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	TArray< struct FAgentArchetypeInfo >               ListOfAgents;                                     		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43540 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameCrowdSpawnerInterface ( Property size: 0 iter: 2) 
// Class name index: 32237 
// 0x0000 (0x0060 - 0x0060)
class UGameCrowdSpawnerInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43775 ];

		return pClassPointer;
	};

	float GetMaxSpawnDist ( );
	void AgentDestroyed ( class AGameCrowdAgent* Agent );
};



// Class GameFramework.GameCrowdInteractionDestination ( Property size: 0 iter: 0) 
// Class name index: 32236 
// 0x0000 (0x02F4 - 0x02F4)
class AGameCrowdInteractionDestination : public AGameCrowdDestination
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43995 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameExplosionContent ( Property size: 19 iter: 19) 
// Class name index: 32265 
// 0x0070 (0x00D0 - 0x0060)
class UGameExplosionContent : public UObject
{
public:
	unsigned long                                      bAutoControllerVibration : 1;                     		// 0x0060 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;           		// 0x0060 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	class USoundCue*                                   ExplosionSound;                                   		// 0x0064 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake;                                         		// 0x006C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake_Left;                                    		// 0x0074 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake_Right;                                   		// 0x007C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake_Rear;                                    		// 0x0084 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CamShakeInnerRadius;                              		// 0x008C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CamShakeOuterRadius;                              		// 0x0090 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CamShakeFalloff;                                  		// 0x0094 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UClass*                                      CameraLensEffect;                                 		// 0x0098 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CameraLensEffectRadius;                           		// 0x00A0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UPointLightComponent*                        ExploLight;                                       		// 0x00A4 (0x0008) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploLightFadeOutTime;                            		// 0x00AC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class URadialBlurComponent*                        ExploRadialBlur;                                  		// 0x00B0 (0x0008) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploRadialBlurFadeOutTime;                       		// 0x00B8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ExploRadialBlurMaxBlur;                           		// 0x00BC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UParticleSystem*                             ParticleEmitterTemplate;                          		// 0x00C0 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class AFogVolumeSphericalDensityInfo*              FogVolumeArchetype;                               		// 0x00C8 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44327 ];

		return pClassPointer;
	};

};



// Class GameFramework.GameFixedCamera ( Property size: 1 iter: 3) 
// Class name index: 32266 
// 0x0004 (0x0070 - 0x006C)
class UGameFixedCamera : public UGameCameraBase
{
public:
	float                                              DefaultFOV;                                       		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44348 ];

		return pClassPointer;
	};

	void OnBecomeActive ( class UGameCameraBase* OldCamera );
	void UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
};



// Class GameFramework.GameKActorSpawnableEffect ( Property size: 0 iter: 4) 
// Class name index: 32267 
// 0x0000 (0x0368 - 0x0368)
class AGameKActorSpawnableEffect : public AKActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44359 ];

		return pClassPointer;
	};

	void StartScalingDown ( );
	void eventFellOutOfWorld ( class UClass* dmgType );
	void eventPostBeginPlay ( );
};



// Class GameFramework.MobileDebugCameraController ( Property size: 2 iter: 7) 
// Class name index: 32538 
// 0x000C (0x078C - 0x0780)
class AMobileDebugCameraController : public ADebugCameraController
{
public:
	int                                                OldMobileGroup;                                   		// 0x0780 (0x0004) [0x0000000000000000]              
	class UMobilePlayerInput*                          MPI;                                              		// 0x0784 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44893 ];

		return pClassPointer;
	};

	void SetupDebugZones ( );
	void eventInitInputSystem ( );
	void OnDeactivate ( class APlayerController* PC );
	void InitDebugInputSystem ( );
	void OnActivate ( class APlayerController* PC );
};



// Class GameFramework.MobileDebugCameraInput ( Property size: 0 iter: 1) 
// Class name index: 32540 
// 0x0000 (0x0554 - 0x0554)
class UMobileDebugCameraInput : public UMobilePlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44924 ];

		return pClassPointer;
	};

	bool InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad );
};



// Class GameFramework.MobileDebugCameraHUD ( Property size: 1 iter: 4) 
// Class name index: 32539 
// 0x0004 (0x0680 - 0x067C)
class AMobileDebugCameraHUD : public AMobileHUD
{
public:
	unsigned long                                      bDrawDebugText : 1;                               		// 0x067C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44925 ];

		return pClassPointer;
	};

	void eventPostRender ( );
	bool DisplayMaterials ( float X, float DY, class UMeshComponent* MeshComp, float* Y );
	void eventPostBeginPlay ( );
};



// Class GameFramework.MobileMenuBar ( Property size: 5 iter: 14) 
// Class name index: 32550 
// 0x001C (0x00F8 - 0x00DC)
class UMobileMenuBar : public UMobileMenuObject
{
public:
	unsigned long                                      bIsVertical : 1;                                  		// 0x00DC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDirty : 1;                                       		// 0x00DC (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                SelectedIndex;                                    		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FirstItem;                                        		// 0x00E4 (0x0004) [0x0000000000000000]              
	TArray< class UMobileMenuBarItem* >                Items;                                            		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45458 ];

		return pClassPointer;
	};

	void UpdateItemViewports ( );
	void SetFirstItem ( int first );
	void RenderItem ( class UCanvas* Canvas, float DeltaTime, int ItemIndex );
	void RenderObject ( class UCanvas* Canvas, float DeltaTime );
	bool eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime );
	class UMobileMenuBarItem* GetSelected ( );
	int Num ( );
	void AddItem ( class UMobileMenuBarItem* Item, int Index );
	void InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization );
};



// Class GameFramework.MobileMenuBarItem ( Property size: 3 iter: 4) 
// Class name index: 32551 
// 0x0010 (0x0070 - 0x0060)
class UMobileMenuBarItem : public UObject
{
public:
	int                                                Width;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   VpPos;                                            		// 0x0068 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45501 ];

		return pClassPointer;
	};

	void RenderItem ( class UMobileMenuBar* Bar, class UCanvas* Canvas, float DeltaTime );
};



// Class GameFramework.MobileMenuButton ( Property size: 5 iter: 8) 
// Class name index: 32552 
// 0x0068 (0x0144 - 0x00DC)
class UMobileMenuButton : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Images[ 0x2 ];                                    		// 0x00DC (0x0010) [0x0000000000000000]              
	struct FUVCoords                                   ImagesUVs[ 0x2 ];                                 		// 0x00EC (0x0028) [0x0000000000000000]              
	struct FLinearColor                                ImageColor;                                       		// 0x0114 (0x0010) [0x0000000000000000]              
	struct FString                                     Caption;                                          		// 0x0124 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                CaptionColor;                                     		// 0x0134 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45511 ];

		return pClassPointer;
	};

	void RenderCaption ( class UCanvas* Canvas );
	void RenderObject ( class UCanvas* Canvas, float DeltaTime );
	void InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization );
};



// Class GameFramework.MobileMenuElement ( Property size: 4 iter: 7) 
// Class name index: 32554 
// 0x0014 (0x0074 - 0x0060)
class UMobileMenuElement : public UObject
{
public:
	struct FVector2D                                   VpPos;                                            		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   VpSize;                                           		// 0x0068 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsVisible : 1;                                   		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsActive : 1;                                    		// 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45536 ];

		return pClassPointer;
	};

	void GetIconIndexes ( TArray< int >* IconIndexes );
	void RenderElement ( class UMobileMenuObject* Owner, class UCanvas* Canvas, float DeltaTime, float Opacity );
	bool OnTouch ( unsigned char EventType, float TouchX, float TouchY, float DeltaTime );
};



// Class GameFramework.MobileMenuGame ( Property size: 1 iter: 4) 
// Class name index: 32555 
// 0x0008 (0x0494 - 0x048C)
class AMobileMenuGame : public AGameInfo
{
public:
	class UClass*                                      InitialSceneToDisplayClass;                       		// 0x048C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45556 ];

		return pClassPointer;
	};

	void RestartPlayer ( class AController* NewPlayer );
	void StartMatch ( );
	void eventPostLogin ( class APlayerController* NewPlayer );
};



// Class GameFramework.MobileMenuPlayerController ( Property size: 0 iter: 0) 
// Class name index: 32561 
// 0x0000 (0x0734 - 0x0734)
class AMobileMenuPlayerController : public AGamePlayerController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45565 ];

		return pClassPointer;
	};

};



// Class GameFramework.MobileMenuInventory ( Property size: 11 iter: 30) 
// Class name index: 32556 
// 0x0090 (0x016C - 0x00DC)
class UMobileMenuInventory : public UMobileMenuObject
{
public:
	TArray< class UMobileMenuElement* >                Slots;                                            		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMobileMenuElement* >                Items;                                            		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SideLeewayPercent;                                		// 0x00FC (0x0004) [0x0000000000000000]              
	struct FRenderElementInfo                          CurrentElement;                                   		// 0x0100 (0x0008) [0x0000000000000000]              
	struct FDragElementInfo                            Drag;                                             		// 0x0108 (0x0028) [0x0000000000000000]              
	struct FVector2D                                   ScaleSize;                                        		// 0x0130 (0x0008) [0x0000000000000000]              
	unsigned long                                      bRenderDragItem : 1;                              		// 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitialzed : 1;                                  		// 0x0138 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FScriptDelegate                             __OnUpdateItemInSlot__Delegate;                   		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0140 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __DoCanPutItemInSlot__Delegate;                   		// 0x014C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0150 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUpdateDrag__Delegate;                         		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0160 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45581 ];

		return pClassPointer;
	};

	void GetIconIndexes ( TArray< int >* IconIndexes );
	void RenderDragItem ( class UCanvas* Canvas, float DeltaTime );
	void RenderObject ( class UCanvas* Canvas, float DeltaTime );
	int GetIndexOfItem ( class UMobileMenuElement* Item );
	int FindSlotIndexAt ( float X, float Y );
	void InitDragAt ( int TouchX, int TouchY );
	void UpdateItemInSlot ( int InSlot );
	class UMobileMenuElement* AddItemToSlot ( class UMobileMenuElement* Element, int ToSlot );
	bool SwapItemsInSlots ( int Slot0, int Slot1 );
	bool eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime );
	bool CanPutItemInSlot ( class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx );
	void ScaleSlot ( class UMobileMenuElement* Slot );
	int AddSlot ( class UMobileMenuElement* Slot );
	void InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization );
	void OnUpdateDrag ( struct FDragElementInfo* Before, struct FDragElementInfo* After );
	bool DoCanPutItemInSlot ( class UMobileMenuInventory* FromInv, class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx );
	void OnUpdateItemInSlot ( class UMobileMenuInventory* FromInv, int SlotIndex );
};



// Class GameFramework.MobileMenuLabel ( Property size: 7 iter: 8) 
// Class name index: 32557 
// 0x002C (0x0108 - 0x00DC)
class UMobileMenuLabel : public UMobileMenuObject
{
public:
	struct FString                                     Caption;                                          		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UFont*                                       TextFont;                                         		// 0x00EC (0x0008) [0x0000000000000000]              
	struct FColor                                      TextColor;                                        		// 0x00F4 (0x0004) [0x0000000000000000]              
	struct FColor                                      TouchedColor;                                     		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              TextXScale;                                       		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              TextYScale;                                       		// 0x0100 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutoSize : 1;                                    		// 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45692 ];

		return pClassPointer;
	};

	void RenderObject ( class UCanvas* Canvas, float DeltaTime );
};



// Class GameFramework.MobileMenuList ( Property size: 18 iter: 39) 
// Class name index: 32558 
// 0x00BC (0x0198 - 0x00DC)
class UMobileMenuList : public UMobileMenuObject
{
public:
	unsigned long                                      bIsVerticalList : 1;                              		// 0x00DC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisableScrolling : 1;                            		// 0x00DC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bForceSelectedToLineup : 1;                       		// 0x00DC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bTapToScrollToItem : 1;                           		// 0x00DC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bLoops : 1;                                       		// 0x00DC (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              SelectedOffset;                                   		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMobileMenuListItem* >               Items;                                            		// 0x00E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSelectedMenuItem                           SelectedItem;                                     		// 0x00F4 (0x000C) [0x0000000000000000]              
	struct FMenuListDragInfo                           Drag;                                             		// 0x0100 (0x0054) [0x0000000000000000]              
	struct FMenuListMovementInfo                       Movement;                                         		// 0x0154 (0x001C) [0x0000000000000000]              
	float                                              Deacceleration;                                   		// 0x0170 (0x0004) [0x0000000000000000]              
	float                                              EaseOutExp;                                       		// 0x0174 (0x0004) [0x0000000000000000]              
	struct FIntPoint                                   ScreenSize;                                       		// 0x0178 (0x0008) [0x0000000000000000]              
	int                                                FirstVisible;                                     		// 0x0180 (0x0004) [0x0000000000000000]              
	int                                                LastVisible;                                      		// 0x0184 (0x0004) [0x0000000000000000]              
	int                                                NumShowEndOfList;                                 		// 0x0188 (0x0004) [0x0000000000000000]              
	float                                              EndOfListSupression;                              		// 0x018C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   MaskSize;                                         		// 0x0190 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45708 ];

		return pClassPointer;
	};

	void GetIconIndexes ( TArray< int >* IconIndexes );
	int ItemScrollSize ( class UMobileMenuListItem* Item );
	void RenderObject ( class UCanvas* Canvas, float DeltaTime );
	void UpdateScroll ( float DeltaTime );
	float CalculateSelectedItem ( float ScrollAmount, unsigned long bForceZeroAdjustment, struct FSelectedMenuItem* Selected );
	class UMobileMenuListItem* GetItemClickPosition ( float* MouseX, float* MouseY );
	bool eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime );
	bool SetSelectedItem ( int ItemIndex, unsigned long bForceAll );
	int GetNumVisible ( );
	int SetSelectedToVisibleIndex ( int VisibleIndex );
	int GetVisibleIndexOfSelected ( );
	float GetAmountSelected ( class UMobileMenuListItem* Item );
	class UMobileMenuListItem* GetSelected ( );
	int Num ( );
	void AddItem ( class UMobileMenuListItem* Item, int Index );
	void InitMenuObject ( class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization );
};



// Class GameFramework.MobileMenuListItem ( Property size: 2 iter: 3) 
// Class name index: 32559 
// 0x0008 (0x007C - 0x0074)
class UMobileMenuListItem : public UMobileMenuElement
{
public:
	float                                              Width;                                            		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0078 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45848 ];

		return pClassPointer;
	};

	void RenderItem ( class UMobileMenuList* List, class UCanvas* Canvas, float DeltaTime );
};



// Class GameFramework.MobileMenuObjectProxy ( Property size: 2 iter: 6) 
// Class name index: 32560 
// 0x0020 (0x00FC - 0x00DC)
class UMobileMenuObjectProxy : public UMobileMenuObject
{
public:
	struct FScriptDelegate                             __OnTouchEvent__Delegate;                         		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00E0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRenderObject__Delegate;                       		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00F0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45857 ];

		return pClassPointer;
	};

	void RenderObject ( class UCanvas* Canvas, float DeltaTime );
	bool eventOnTouch ( unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime );
	void OnRenderObject ( class UMobileMenuObjectProxy* Proxy, class UCanvas* Canvas, float DeltaTime );
	bool OnTouchEvent ( class UMobileMenuObjectProxy* Proxy, unsigned char EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime );
};



// Class GameFramework.MobileTouchInputVolume ( Property size: 1 iter: 5) 
// Class name index: 32574 
// 0x0004 (0x0280 - 0x027C)
class AMobileTouchInputVolume : public AVolume
{
public:
	unsigned long                                      bEnabled : 1;                                     		// 0x027C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45955 ];

		return pClassPointer;
	};

	void HandleDragOver ( );
	void HandleDoubleClick ( );
	void HandleClick ( );
	void OnToggle ( class USeqAct_Toggle* inAction );
};



// Class GameFramework.SeqEvent_MobileTouchInputVolume ( Property size: 0 iter: 0) 
// Class name index: 32898 
// 0x0000 (0x0178 - 0x0178)
class USeqEvent_MobileTouchInputVolume : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45962 ];

		return pClassPointer;
	};

};



// Class GameFramework.TouchableElement3D ( Property size: 0 iter: 3) 
// Class name index: 33054 
// 0x0000 (0x0060 - 0x0060)
class UTouchableElement3D : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45965 ];

		return pClassPointer;
	};

	void HandleDragOver ( );
	void HandleDoubleClick ( );
	void HandleClick ( );
};



// Class GameFramework.PlayerCollectorGame ( Property size: 2 iter: 4) 
// Class name index: 32730 
// 0x0014 (0x04A0 - 0x048C)
class APlayerCollectorGame : public AGameInfo
{
public:
	int                                                NumberOfClientsToWaitFor;                         		// 0x048C (0x0004) [0x0000000000000000]              
	struct FString                                     URLToLoad;                                        		// 0x0490 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45991 ];

		return pClassPointer;
	};

	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList );
	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage );
};



// Class GameFramework.PMESTG_LeaveADecalBase ( Property size: 1 iter: 1) 
// Class name index: 32738 
// 0x0008 (0x0068 - 0x0060)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UClass*                                      PhysicalMaterialPropertyClass;                    		// 0x0060 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46006 ];

		return pClassPointer;
	};

};



// Class GameFramework.SeqEvent_HudRenderImage ( Property size: 9 iter: 10) 
// Class name index: 32896 
// 0x003C (0x01CC - 0x0190)
class USeqEvent_HudRenderImage : public USeqEvent_HudRender
{
public:
	struct FLinearColor                                DisplayColor;                                     		// 0x0190 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DisplayLocation;                                  		// 0x01A0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  DisplayTexture;                                   		// 0x01AC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              XL;                                               		// 0x01B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              YL;                                               		// 0x01B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              U;                                                		// 0x01BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              V;                                                		// 0x01C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UL;                                               		// 0x01C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VL;                                               		// 0x01C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46089 ];

		return pClassPointer;
	};

	void Render ( class UCanvas* TargetCanvas, class AHUD* TargetHud );
};



// Class GameFramework.SeqEvent_HudRenderText ( Property size: 5 iter: 8) 
// Class name index: 32897 
// 0x0029 (0x01B9 - 0x0190)
class USeqEvent_HudRenderText : public USeqEvent_HudRender
{
public:
	class UFont*                                       DisplayFont;                                      		// 0x0190 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DisplayColor;                                     		// 0x0198 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DisplayLocation;                                  		// 0x019C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DisplayText;                                      		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      TextDrawMethod;                                   		// 0x01B8 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46109 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void Render ( class UCanvas* TargetCanvas, class AHUD* TargetHud );
};




#ifdef _MSC_VER
	#pragma pack ( pop )
#endif