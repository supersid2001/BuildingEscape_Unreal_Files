// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define BUILDINGESCAPE_OpenDoor_generated_h

#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OpenAngle() { return STRUCT_OFFSET(UOpenDoor, OpenAngle); } \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UOpenDoor, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__OpenSpeed() { return STRUCT_OFFSET(UOpenDoor, OpenSpeed); } \
	FORCEINLINE static uint32 __PPO__CloseDegreesPerSecond() { return STRUCT_OFFSET(UOpenDoor, CloseDegreesPerSecond); } \
	FORCEINLINE static uint32 __PPO__DoorCloseDelay() { return STRUCT_OFFSET(UOpenDoor, DoorCloseDelay); } \
	FORCEINLINE static uint32 __PPO__MassToOpen() { return STRUCT_OFFSET(UOpenDoor, MassToOpen); } \
	FORCEINLINE static uint32 __PPO__useRotation() { return STRUCT_OFFSET(UOpenDoor, useRotation); } \
	FORCEINLINE static uint32 __PPO__FinalZ() { return STRUCT_OFFSET(UOpenDoor, FinalZ); }


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_11_PROLOG
#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_INCLASS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
