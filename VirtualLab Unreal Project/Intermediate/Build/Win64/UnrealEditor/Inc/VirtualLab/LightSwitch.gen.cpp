// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualLab/LightSwitch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSwitch() {}
// Cross Module References
	VIRTUALLAB_API UClass* Z_Construct_UClass_ULightSwitch_NoRegister();
	VIRTUALLAB_API UClass* Z_Construct_UClass_ULightSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VirtualLab();
// End Cross Module References
	DEFINE_FUNCTION(ULightSwitch::execToggle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Toggle();
		P_NATIVE_END;
	}
	void ULightSwitch::StaticRegisterNativesULightSwitch()
	{
		UClass* Class = ULightSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Toggle", &ULightSwitch::execToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightSwitch_Toggle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightSwitch_Toggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightSwitch_Toggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightSwitch, nullptr, "Toggle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightSwitch_Toggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightSwitch_Toggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightSwitch_Toggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightSwitch_Toggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightSwitch);
	UClass* Z_Construct_UClass_ULightSwitch_NoRegister()
	{
		return ULightSwitch::StaticClass();
	}
	struct Z_Construct_UClass_ULightSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualLab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightSwitch_Toggle, "Toggle" }, // 1578366791
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSwitch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LightSwitch.h" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSwitch_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "LightSwitch" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightSwitch_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightSwitch, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_ULightSwitch_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightSwitch_Statics::NewProp_MaxDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightSwitch_Statics::NewProp_MaxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightSwitch_Statics::ClassParams = {
		&ULightSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULightSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightSwitch_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULightSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightSwitch()
	{
		if (!Z_Registration_Info_UClass_ULightSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightSwitch.OuterSingleton, Z_Construct_UClass_ULightSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightSwitch.OuterSingleton;
	}
	template<> VIRTUALLAB_API UClass* StaticClass<ULightSwitch>()
	{
		return ULightSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightSwitch);
	struct Z_CompiledInDeferFile_FID_VirtualLab_Source_VirtualLab_LightSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VirtualLab_Source_VirtualLab_LightSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightSwitch, ULightSwitch::StaticClass, TEXT("ULightSwitch"), &Z_Registration_Info_UClass_ULightSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightSwitch), 3222115987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VirtualLab_Source_VirtualLab_LightSwitch_h_373193977(TEXT("/Script/VirtualLab"),
		Z_CompiledInDeferFile_FID_VirtualLab_Source_VirtualLab_LightSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VirtualLab_Source_VirtualLab_LightSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
