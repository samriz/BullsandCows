// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("This is Bulls and Cows."));
    PrintLine(TEXT("Enter a 4-letter word and press enter to continue..."));
    HiddenWord = TEXT("date");
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    
    ClearScreen();
    PrintLine("Your guess: ");
    PrintLine(Input);
    if(Input == HiddenWord) PrintLine("Congrats. You won the game.");
    else PrintLine("That's wrong but keep trying.");
}