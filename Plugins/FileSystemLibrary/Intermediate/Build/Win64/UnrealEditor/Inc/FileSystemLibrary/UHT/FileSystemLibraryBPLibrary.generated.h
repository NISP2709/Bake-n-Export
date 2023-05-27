// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileSystemLibraryBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCreateProcessWithCallback;
class UObject;
struct FPathProperties;
#ifdef FILESYSTEMLIBRARY_FileSystemLibraryBPLibrary_generated_h
#error "FileSystemLibraryBPLibrary.generated.h already included, missing '#pragma once' in FileSystemLibraryBPLibrary.h"
#endif
#define FILESYSTEMLIBRARY_FileSystemLibraryBPLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FILESYSTEMLIBRARY_API UScriptStruct* StaticStruct<struct FPathProperties>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProcessName); \
	DECLARE_FUNCTION(execIsProcessRunning); \
	DECLARE_FUNCTION(execCreateProcess); \
	DECLARE_FUNCTION(execOpenSaveFileDialog); \
	DECLARE_FUNCTION(execOpenFileSelectDialog); \
	DECLARE_FUNCTION(execOpenFileMultiSelectDialog); \
	DECLARE_FUNCTION(execOpenFolderSelectDialog); \
	DECLARE_FUNCTION(execGetFileName); \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetFileExtension); \
	DECLARE_FUNCTION(execAppendStringArrayToFile); \
	DECLARE_FUNCTION(execSaveStringArrayToFile); \
	DECLARE_FUNCTION(execLoadTextFileToString); \
	DECLARE_FUNCTION(execInsertStringArrayToFile); \
	DECLARE_FUNCTION(execLoadTextFileToStringArray); \
	DECLARE_FUNCTION(execGetFilesRecursivelyInDirectory); \
	DECLARE_FUNCTION(execGetFilesInDirectory); \
	DECLARE_FUNCTION(execGetFileOrDirectorySize); \
	DECLARE_FUNCTION(execGetFileOrDirectoryProperties); \
	DECLARE_FUNCTION(execOpenDirectory); \
	DECLARE_FUNCTION(execMoveDirectory); \
	DECLARE_FUNCTION(execCopyDirectory); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execVerifyDirectory); \
	DECLARE_FUNCTION(execVerifyAndCreateDirectory); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execRenameFile); \
	DECLARE_FUNCTION(execMoveFile); \
	DECLARE_FUNCTION(execCopyFile); \
	DECLARE_FUNCTION(execVerifyFile);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProcessName); \
	DECLARE_FUNCTION(execIsProcessRunning); \
	DECLARE_FUNCTION(execCreateProcess); \
	DECLARE_FUNCTION(execOpenSaveFileDialog); \
	DECLARE_FUNCTION(execOpenFileSelectDialog); \
	DECLARE_FUNCTION(execOpenFileMultiSelectDialog); \
	DECLARE_FUNCTION(execOpenFolderSelectDialog); \
	DECLARE_FUNCTION(execGetFileName); \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetFileExtension); \
	DECLARE_FUNCTION(execAppendStringArrayToFile); \
	DECLARE_FUNCTION(execSaveStringArrayToFile); \
	DECLARE_FUNCTION(execLoadTextFileToString); \
	DECLARE_FUNCTION(execInsertStringArrayToFile); \
	DECLARE_FUNCTION(execLoadTextFileToStringArray); \
	DECLARE_FUNCTION(execGetFilesRecursivelyInDirectory); \
	DECLARE_FUNCTION(execGetFilesInDirectory); \
	DECLARE_FUNCTION(execGetFileOrDirectorySize); \
	DECLARE_FUNCTION(execGetFileOrDirectoryProperties); \
	DECLARE_FUNCTION(execOpenDirectory); \
	DECLARE_FUNCTION(execMoveDirectory); \
	DECLARE_FUNCTION(execCopyDirectory); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execVerifyDirectory); \
	DECLARE_FUNCTION(execVerifyAndCreateDirectory); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execRenameFile); \
	DECLARE_FUNCTION(execMoveFile); \
	DECLARE_FUNCTION(execCopyFile); \
	DECLARE_FUNCTION(execVerifyFile);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileSystemLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFileSystemLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileSystemLibrary"), NO_API) \
	DECLARE_SERIALIZER(UFileSystemLibraryBPLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUFileSystemLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFileSystemLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileSystemLibrary"), NO_API) \
	DECLARE_SERIALIZER(UFileSystemLibraryBPLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileSystemLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileSystemLibraryBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileSystemLibraryBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileSystemLibraryBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileSystemLibraryBPLibrary(UFileSystemLibraryBPLibrary&&); \
	NO_API UFileSystemLibraryBPLibrary(const UFileSystemLibraryBPLibrary&); \
public: \
	NO_API virtual ~UFileSystemLibraryBPLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileSystemLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileSystemLibraryBPLibrary(UFileSystemLibraryBPLibrary&&); \
	NO_API UFileSystemLibraryBPLibrary(const UFileSystemLibraryBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileSystemLibraryBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileSystemLibraryBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileSystemLibraryBPLibrary) \
	NO_API virtual ~UFileSystemLibraryBPLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_80_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_83_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FileSystemLibraryBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILESYSTEMLIBRARY_API UClass* StaticClass<class UFileSystemLibraryBPLibrary>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1100_DELEGATE \
static inline void FOnCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnCompleted) \
{ \
	OnCompleted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbIsProcessRunning); \
	DECLARE_FUNCTION(execCreateProcessWithCallback);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbIsProcessRunning); \
	DECLARE_FUNCTION(execCreateProcessWithCallback);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateProcessWithCallback(); \
	friend struct Z_Construct_UClass_UCreateProcessWithCallback_Statics; \
public: \
	DECLARE_CLASS(UCreateProcessWithCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileSystemLibrary"), NO_API) \
	DECLARE_SERIALIZER(UCreateProcessWithCallback)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_INCLASS \
private: \
	static void StaticRegisterNativesUCreateProcessWithCallback(); \
	friend struct Z_Construct_UClass_UCreateProcessWithCallback_Statics; \
public: \
	DECLARE_CLASS(UCreateProcessWithCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileSystemLibrary"), NO_API) \
	DECLARE_SERIALIZER(UCreateProcessWithCallback)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateProcessWithCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateProcessWithCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateProcessWithCallback); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateProcessWithCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreateProcessWithCallback(UCreateProcessWithCallback&&); \
	NO_API UCreateProcessWithCallback(const UCreateProcessWithCallback&); \
public: \
	NO_API virtual ~UCreateProcessWithCallback();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateProcessWithCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreateProcessWithCallback(UCreateProcessWithCallback&&); \
	NO_API UCreateProcessWithCallback(const UCreateProcessWithCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateProcessWithCallback); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateProcessWithCallback); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateProcessWithCallback) \
	NO_API virtual ~UCreateProcessWithCallback();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1093_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1096_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILESYSTEMLIBRARY_API UClass* StaticClass<class UCreateProcessWithCallback>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
