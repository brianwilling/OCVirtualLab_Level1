// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIRTUALLAB_Grabber_generated_h
#error "Grabber.generated.h already included, missing '#pragma once' in Grabber.h"
#endif
#define VIRTUALLAB_Grabber_generated_h

#define FID_VirtualLab_Source_VirtualLab_Grabber_h_15_SPARSE_DATA
#define FID_VirtualLab_Source_VirtualLab_Grabber_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGrab);


#define FID_VirtualLab_Source_VirtualLab_Grabber_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGrab);


#define FID_VirtualLab_Source_VirtualLab_Grabber_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualLab"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define FID_VirtualLab_Source_VirtualLab_Grabber_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualLab"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define FID_VirtualLab_Source_VirtualLab_Grabber_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public:


#define FID_VirtualLab_Source_VirtualLab_Grabber_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabber)


#define FID_VirtualLab_Source_VirtualLab_Grabber_h_12_PROLOG
#define FID_VirtualLab_Source_VirtualLab_Grabber_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VirtualLab_Source_VirtualLab_Grabber_h_15_SPARSE_DATA \
	FID_VirtualLab_Source_VirtualLab_Grabber_h_15_RPC_WRAPPERS \
	FID_VirtualLab_Source_VirtualLab_Grabber_h_15_INCLASS \
	FID_VirtualLab_Source_VirtualLab_Grabber_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VirtualLab_Source_VirtualLab_Grabber_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VirtualLab_Source_VirtualLab_Grabber_h_15_SPARSE_DATA \
	FID_VirtualLab_Source_VirtualLab_Grabber_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VirtualLab_Source_VirtualLab_Grabber_h_15_INCLASS_NO_PURE_DECLS \
	FID_VirtualLab_Source_VirtualLab_Grabber_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALLAB_API UClass* StaticClass<class UGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VirtualLab_Source_VirtualLab_Grabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
