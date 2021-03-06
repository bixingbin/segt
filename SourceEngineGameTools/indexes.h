#pragma once

namespace indexes
{
	// Client
	const int GetAllClasses = 7;
	const int CreateMove = 20;
	const int FrameStageNotify = 34;
	const int InKeyEvent = -1;
	const int HudUpdate = 9;

	// Engine
	const int GetScreenSize = 5;
	const int GetPlayerInfo = 8;
	const int GetLocalPlayer = 12;
	const int ClientCmd = 107;
	const int SetViewAngles = 20;
	const int GetViewAngles = 19;
	const int WorldToScreenMatrix = 37;
	const int GetPlayerForUserId = 9;
	const int Con_IsVisible = 11;
	const int Time = 14;
	const int GetMaxClients = 21;
	const int IsInGame = 26;
	const int IsConnected = 27;
	const int IsDrawingLoadingImage = 28;
	const int IsTakingScreenShot = 88;

	// ClientEntList
	const int GetClientEntity = 3;
	const int GetHighestEntityIndex = 8;
	const int GetClientEntityFromHandle = 4;
	
	// Surface
	const int DrawSetColor = 11;
	const int DrawFilledRect = 12;
	const int DrawOutlinedRect = 14;
	const int DrawLine = 15;
	const int SCreateFont = 63;
	const int SetFontGlyphSet = 64;
	const int DrawSetTextFont = 17;
	const int DrawSetTextColor = 19;
	const int DrawSetTextPos = 20;
	const int DrawPrintText = 22;
	const int DrawColoredCircle = 152;
	const int GetTextSize = 72;
	const int DrawFilledRectFade = 115;
	const int AddCustomFontFile = 65;
	
	// ModelInfo
	const int GetStudioModel = 30;
	const int GetModelName = 3;

	// ModelRender
	const int DrawModel = -1;

	// Panel
	const int GetName = 36;
	const int PaintTraverse = 41;

	// MoveHelper
	const int SetHost = 1;

	// Trace
	const int TraceRay = 5;

	// Input
	const int GetUserCmd = 8;

	// Prediction
	const int RunCommand = 18;
	const int SetupMove = 19;
	const int FinishMove = 20;

	// GameMovement
	const int ProccessMovement = 1;

	// Entity
	const int GetClientClass = 1;
	const int GetAbsOrigin = 11;
	const int GetAbsAngles = 12;
	const int GetIndex = 8;
	const int SetupBones = 13;
	const int IsDormant = 7;
	const int GetModel = 8;
	const int GetWeaponId = 383;

	// ClientModeShared
	const int SharedCreateMove = 27;
	const int GetMessagePanel = 24;

	// CBaseHudChat
	const int Printf = 22;
	const int ChatPrintf = 23;
}
