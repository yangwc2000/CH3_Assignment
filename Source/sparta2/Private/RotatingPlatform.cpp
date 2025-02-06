#include "RotatingPlatform.h"
#include "Components/StaticMeshComponent.h"

// ������: �⺻ ����
ARotatingPlatform::ARotatingPlatform()
{
    // �� ������ Tick �Լ��� ȣ���ϰ� ����
    PrimaryActorTick.bCanEverTick = true;

    // StaticMeshComponent ���� �� ��Ʈ ������Ʈ�� ����
    PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
    RootComponent = PlatformMesh;

    // ȸ�� �ӵ��� �⺻�� ���� (��: 90��/��)
    RotationSpeed = 90.0f;
}

// ���� ���� �� ȣ��
void ARotatingPlatform::BeginPlay()
{
    Super::BeginPlay();
}

// �� ������ ȣ��Ǵ� Tick �Լ�
void ARotatingPlatform::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // DeltaTime�� ���ؼ� ȸ�� �� ���: �� ������ ȸ�� ����
    FRotator DeltaRotation(0, RotationSpeed * DeltaTime, 0);
    AddActorLocalRotation(DeltaRotation);
}
