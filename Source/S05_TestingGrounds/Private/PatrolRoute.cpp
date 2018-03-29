// Growiel

#include "PatrolRoute.h"

// Sets default values for this component's properties
UPatrolRoute::UPatrolRoute()
{
	PrimaryComponentTick.bCanEverTick = false;
}

TArray<AActor*> UPatrolRoute::GetPatrolPoints()
{
	return PatrolPoints;
}

