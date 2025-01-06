// Fill out your copyright notice in the Description page of Project Settings.

#include "SclopetiatorCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "VS_SclopetiatorGI.h"

UVS_SclopetiatorGI::UVS_SclopetiatorGI()
{
	//StatPoints
	this->StatPoints = 5;
	this->MODStatPoints = this->StatPoints;

	//PlayerStats
	this->PlayerStats.Health = 3;
	this->PlayerStats.Speed = 600.0;
	this->PlayerStats.Luck = 30.0;
	this->MODPlayerStats.Health = this->PlayerStats.Health;
	this->MODPlayerStats.Speed = this->PlayerStats.Speed;
	this->MODPlayerStats.Luck = this->PlayerStats.Luck;

	//PistolStats
	this->PistolStats.DMG = 1;
	this->PistolStats.ReloadSpeed = 0.0;
	this->MODPistolStats.DMG = this->PistolStats.DMG;
	this->MODPistolStats.ReloadSpeed = this->PistolStats.ReloadSpeed;

	//ShotgunStats
	this->ShotgunStats.DMG = 1;
	this->ShotgunStats.ReloadSpeed = 0.0;
	this->MODShotgunStats.DMG = this->ShotgunStats.DMG;
	this->MODShotgunStats.ReloadSpeed = this->ShotgunStats.ReloadSpeed;

	//RifleStats
	this->RifleStats.DMG = 1;
	this->RifleStats.ReloadSpeed = 0.0;
	this->MODRifleStats.DMG = this->RifleStats.DMG;
	this->MODRifleStats.ReloadSpeed = this->RifleStats.ReloadSpeed;
}


void UVS_SclopetiatorGI::RewriteStats_Implementation()
{
	RewriteStats_Internal();
}

void UVS_SclopetiatorGI::UpdateVariables_Implementation()
{
	UpdateVariables_Internal();
}

void UVS_SclopetiatorGI::UpdatePlayer_Implementation()
{
	UpdatePlayer_Internal();
}

void UVS_SclopetiatorGI::RefreshPlayerHealth_Implementation()
{
	RefreshPlayerHealth_Internal();
}

void UVS_SclopetiatorGI::RefreshStatPoints_Implementation()
{
	RefreshStatPoints_Internal();
}

void UVS_SclopetiatorGI::IncrementStatPoints_Implementation()
{
	IncrementStatPoints_Internal();
}

void UVS_SclopetiatorGI::DecrementStatPoints_Implementation()
{
	DecrementStatPoints_Internal();
}

void UVS_SclopetiatorGI::IncrementPlayerHealth_Implementation()
{
	IncrementPlayerHealth_Internal();
}

void UVS_SclopetiatorGI::DecrementPlayerHealth_Implementation()
{
	DecrementPlayerHealth_Internal();
}

void UVS_SclopetiatorGI::IncreasePlayerMovement_Implementation()
{
	IncreasePlayerMovement_Internal();
}

void UVS_SclopetiatorGI::DecreasePlayerMovement_Implementation()
{
	DecreasePlayerMovement_Internal();
}

void UVS_SclopetiatorGI::IncreasePlayerLuck_Implementation()
{
	IncreasePlayerLuck_Internal();
}

void UVS_SclopetiatorGI::DecreasePlayerLuck_Implementation()
{
	DecreasePlayerLuck_Internal();
}

void UVS_SclopetiatorGI::IncreasePistolDMG_Implementation()
{
	IncreasePistolDMG_Internal();
}

void UVS_SclopetiatorGI::DecreasePistolDMG_Implementation()
{
	DecreasePistolDMG_Internal();
}


bool UVS_SclopetiatorGI::CheckStatPoints_Implementation()
{
	return CheckStatPoints_Internal();
}

bool UVS_SclopetiatorGI::IsHealthValid_Implementation()
{
	return IsHealthValid_Internal();
}

bool UVS_SclopetiatorGI::IsStatPointsValid_Implementation()
{
	return IsStatPointsValid_Internal();
}

bool UVS_SclopetiatorGI::AnyIntegerChanges_Implementation(int param1, int param2)
{
	return AnyIntegerChanges_Internal(param1, param2);
}

bool UVS_SclopetiatorGI::AnyFloatChanges_Implementation(float param1, float param2)
{
	return AnyFloatChanges_Internal(param1, param2);
}


void UVS_SclopetiatorGI::RewriteStats_Internal()
{
	UpdateVariables();
	UpdatePlayer();
}

void UVS_SclopetiatorGI::UpdateVariables_Internal()
{
	this->StatPoints = this->MODStatPoints;
	this->PlayerStats = this->MODPlayerStats;
	this->PistolStats = this->MODPistolStats;
	this->ShotgunStats = this->MODShotgunStats;
	this->RifleStats = this->MODRifleStats;
}

void UVS_SclopetiatorGI::UpdatePlayer_Internal()
{
	ASclopetiatorCharacter* Player = Cast<ASclopetiatorCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	Player->UpdateHealth(PlayerStats.Health);
	Player->UpdateMovement(PlayerStats.Speed);
	Player->UpdateLuck(PlayerStats.Luck);
}

void UVS_SclopetiatorGI::RefreshPlayerHealth_Internal()
{
	ASclopetiatorCharacter* Player = Cast<ASclopetiatorCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	PlayerStats.Health = Player->GetHealth();
	MODPlayerStats.Health = PlayerStats.Health;
}

void UVS_SclopetiatorGI::RefreshStatPoints_Internal()
{
	this->StatPoints = this->MODStatPoints;
}

void UVS_SclopetiatorGI::IncrementStatPoints_Internal()
{
	this->MODStatPoints = this->MODStatPoints + 1;
}

void UVS_SclopetiatorGI::DecrementStatPoints_Internal()
{
	this->MODStatPoints = this->MODStatPoints - 1;
}

void UVS_SclopetiatorGI::IncrementPlayerHealth_Internal()
{
	this->MODPlayerStats.Health = this->MODPlayerStats.Health + 1;
}

void UVS_SclopetiatorGI::DecrementPlayerHealth_Internal()
{
	this->MODPlayerStats.Health = this->MODPlayerStats.Health - 1;
}

void UVS_SclopetiatorGI::IncreasePlayerMovement_Internal()
{
	this->MODPlayerStats.Speed = this->MODPlayerStats.Speed + 100.f;
}

void UVS_SclopetiatorGI::DecreasePlayerMovement_Internal()
{
	this->MODPlayerStats.Speed = this->MODPlayerStats.Speed - 100.f;
}

void UVS_SclopetiatorGI::IncreasePlayerLuck_Internal()
{
	this->MODPlayerStats.Luck = this->MODPlayerStats.Luck + 5.f;	
}

void UVS_SclopetiatorGI::DecreasePlayerLuck_Internal()
{
	this->MODPlayerStats.Luck = this->MODPlayerStats.Luck - 5.f;
}

void UVS_SclopetiatorGI::IncreasePistolDMG_Internal()
{
	this->MODPistolStats.DMG = this->MODPistolStats.DMG + 1;
}

void UVS_SclopetiatorGI::DecreasePistolDMG_Internal()
{
	this->MODPistolStats.DMG = this->MODPistolStats.DMG - 1;
}

bool UVS_SclopetiatorGI::CheckStatPoints_Internal()
{
	if (this->MODStatPoints > 0) {
		return true;
	}
	else {
		return false;
	}
}

bool UVS_SclopetiatorGI::IsHealthValid_Internal()
{
	if (this->MODPlayerStats.Health >= 5 || this->MODPlayerStats.Health <= 0) {
		return false;
	}
	else {
		return true;
	}
}

bool UVS_SclopetiatorGI::IsStatPointsValid_Internal()
{
	if (this->MODStatPoints < this->StatPoints) {
		return true;
	}
	else {
		return false;
	}
}

bool UVS_SclopetiatorGI::AnyIntegerChanges_Internal(int param1, int param2)
{
	if (param1 != param2) {
		return true;
	}
	else {
		return false;
	}

}

bool UVS_SclopetiatorGI::AnyFloatChanges_Internal(float param1, float param2)
{
	if (param1 != param2) {
		return true;
	}
	else {
		return false;
	}
}