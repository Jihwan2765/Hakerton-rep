// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/Actor.h"
#include "TileSortLibrary.generated.h"

UCLASS()
class HACKERTONTEST_API UTileSortLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// 블루프린트에서 호출할 수 있는 정렬 노드 정의
	UFUNCTION(BlueprintCallable, Category = "Tile Sort")
	static void SortActorsByX(UPARAM(ref) TArray<AActor*>& TargetArray);
};
