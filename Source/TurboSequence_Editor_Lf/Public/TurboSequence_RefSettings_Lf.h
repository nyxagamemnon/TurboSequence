﻿// Copyright Lukas Fratzl, 2022-2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "TurboSequence_RefSettings_Lf.generated.h"

/**
 * 
 */
UCLASS(config = "TurboSequence_Lf")
class TURBOSEQUENCE_EDITOR_LF_API UTurboSequence_RefSettings_Lf : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	// Constructors / Destructors

	UTurboSequence_RefSettings_Lf();
	virtual ~UTurboSequence_RefSettings_Lf() override;

	//~ Begin UDeveloperSettings Interface
	virtual FName GetContainerName() const override;
	virtual FName GetCategoryName() const override;
	virtual FName GetSectionName() const override;

#if WITH_EDITOR
	virtual FText GetSectionText() const override;
	virtual FText GetSectionDescription() const override;
#endif
	// End of UDeveloperSettings

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	UPROPERTY(EditAnywhere, Config, meta = (DisplayName = "Default Rendering NiagaraSystem", ConfigRestartRequired = true))
	FString Default_Rendering_NiagaraSystem = FString("/Script/Niagara.NiagaraSystem'/TurboSequence_Lf/Resources/FXS_TurboSequence_Mesh_Lf.FXS_TurboSequence_Mesh_Lf'");

	UPROPERTY(EditAnywhere, Config, meta = (DisplayName = "Default Rendering Transform Texture", ConfigRestartRequired = true))
	FString Default_Rendering_TransformTexture = FString("/Script/Engine.TextureRenderTarget2DArray'/TurboSequence_Lf/Resources/T_TurboSequence_TransformTexture_Lf.T_TurboSequence_TransformTexture_Lf'");

	UPROPERTY(EditAnywhere, Config, meta = (DisplayName = "Default Rendering Skin Weight Texture", ConfigRestartRequired = true))
	FString Default_Rendering_SkinWeightTexture = FString("/Script/Engine.TextureRenderTarget2DArray'/TurboSequence_Lf/Resources/T_TurboSequence_SkinWeightTexture_Lf.T_TurboSequence_SkinWeightTexture_Lf'");

	UPROPERTY(EditAnywhere, Config, meta = (DisplayName = "Default Rendering Custom Data Texture", ConfigRestartRequired = true))
	FString Default_Rendering_DataTexture = FString("/Script/Engine.TextureRenderTarget2DArray'/TurboSequence_Lf/Resources/T_TurboSequence_DataTexture_Lf.T_TurboSequence_DataTexture_Lf'");
};
