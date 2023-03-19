// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameInstance.h"

// 클래스 생성자의 값은 CDO에 저장되고 이후에 Init함수에서 SchoolName을 바꿔도
// CDO에 저장된 기본 값은 바뀌지 않는다.
UMyGameInstance::UMyGameInstance()
{
	SchoolName = TEXT("기본 학교");
}

void UMyGameInstance::Init()
{
	Super::Init();

}
