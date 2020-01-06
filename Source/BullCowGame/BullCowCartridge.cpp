// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("This is Bulls and Cows."));
    PrintLine(TEXT("Enter a 4-letter word and press enter to continue..."));
    SetupGame(); // setup game
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    
    ClearScreen();

    HiddenWord.Len();
    
    PrintLine("Your guess: ");
    PrintLine(Input);
    if(Input == HiddenWord) PrintLine("Congrats. You won the game.");
    else 
    {
        if(Input.Len() != HiddenWord.Len())
        {
            PrintLine(TEXT("The hidden word is 4 letters. Please try again."));
        }
        PrintLine("You lose.");
    }
}

void UBullCowCartridge::SetupGame() //initialize member variables
{
    HiddenWord = TEXT("date");
    Tries = 4;
}