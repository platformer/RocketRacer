// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RocketRacer/SortArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSortArray() {}
// Cross Module References
	ROCKETRACER_API UClass* Z_Construct_UClass_USortArray_NoRegister();
	ROCKETRACER_API UClass* Z_Construct_UClass_USortArray();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RocketRacer();
// End Cross Module References
	void USortArray::StaticRegisterNativesUSortArray()
	{
	}
	UClass* Z_Construct_UClass_USortArray_NoRegister()
	{
		return USortArray::StaticClass();
	}
	struct Z_Construct_UClass_USortArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USortArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RocketRacer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USortArray_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SortArray.h" },
		{ "ModuleRelativePath", "SortArray.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USortArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USortArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USortArray_Statics::ClassParams = {
		&USortArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USortArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USortArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USortArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USortArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USortArray, 2657548025);
	template<> ROCKETRACER_API UClass* StaticClass<USortArray>()
	{
		return USortArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USortArray(Z_Construct_UClass_USortArray, &USortArray::StaticClass, TEXT("/Script/RocketRacer"), TEXT("USortArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USortArray);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
