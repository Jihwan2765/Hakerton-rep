// Fill out your copyright notice in the Description page of Project Settings.


#include "TileSortLibrary.h"

void UTileSortLibrary::SortActorsByX(TArray<AActor*>& TargetArray)
{
	// C++의 퀵/힙 정렬 알고리즘(O(N log N))으로 0.001초 만에 X축 오름차순 정렬
	TargetArray.Sort([](const AActor& A, const AActor& B) {
		return A.GetActorLocation().X < B.GetActorLocation().X;
		});
}