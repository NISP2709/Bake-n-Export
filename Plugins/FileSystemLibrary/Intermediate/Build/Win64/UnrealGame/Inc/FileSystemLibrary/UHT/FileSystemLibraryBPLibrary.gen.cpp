// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileSystemLibrary/Public/FileSystemLibraryBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSystemLibraryBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FILESYSTEMLIBRARY_API UClass* Z_Construct_UClass_UCreateProcessWithCallback();
	FILESYSTEMLIBRARY_API UClass* Z_Construct_UClass_UCreateProcessWithCallback_NoRegister();
	FILESYSTEMLIBRARY_API UClass* Z_Construct_UClass_UFileSystemLibraryBPLibrary();
	FILESYSTEMLIBRARY_API UClass* Z_Construct_UClass_UFileSystemLibraryBPLibrary_NoRegister();
	FILESYSTEMLIBRARY_API UFunction* Z_Construct_UDelegateFunction_UCreateProcessWithCallback_OnCompleted__DelegateSignature();
	FILESYSTEMLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FPathProperties();
	UPackage* Z_Construct_UPackage__Script_FileSystemLibrary();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PathProperties;
class UScriptStruct* FPathProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PathProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PathProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathProperties, Z_Construct_UPackage__Script_FileSystemLibrary(), TEXT("PathProperties"));
	}
	return Z_Registration_Info_UScriptStruct_PathProperties.OuterSingleton;
}
template<> FILESYSTEMLIBRARY_API UScriptStruct* StaticStruct<FPathProperties>()
{
	return FPathProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPathProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreationDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccessDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModificationDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileSizeBytes_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FileSizeBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDirectory_MetaData[];
#endif
		static void NewProp_isDirectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isReadOnly_MetaData[];
#endif
		static void NewProp_isReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isReadOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPathProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_CreationDate_MetaData[] = {
		{ "Category", "PathProperties" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_CreationDate = { "CreationDate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPathProperties, CreationDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_CreationDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_CreationDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_AccessDate_MetaData[] = {
		{ "Category", "PathProperties" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_AccessDate = { "AccessDate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPathProperties, AccessDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_AccessDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_AccessDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_ModificationDate_MetaData[] = {
		{ "Category", "PathProperties" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_ModificationDate = { "ModificationDate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPathProperties, ModificationDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_ModificationDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_ModificationDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_FileSizeBytes_MetaData[] = {
		{ "Category", "PathProperties" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_FileSizeBytes = { "FileSizeBytes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPathProperties, FileSizeBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_FileSizeBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_FileSizeBytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isDirectory_MetaData[] = {
		{ "Category", "PathProperties" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isDirectory_SetBit(void* Obj)
	{
		((FPathProperties*)Obj)->isDirectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isDirectory = { "isDirectory", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPathProperties), &Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isDirectory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isReadOnly_MetaData[] = {
		{ "Category", "PathProperties" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isReadOnly_SetBit(void* Obj)
	{
		((FPathProperties*)Obj)->isReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isReadOnly = { "isReadOnly", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPathProperties), &Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isReadOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_CreationDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_AccessDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_ModificationDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_FileSizeBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathProperties_Statics::NewProp_isReadOnly,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FileSystemLibrary,
		nullptr,
		&NewStructOps,
		"PathProperties",
		sizeof(FPathProperties),
		alignof(FPathProperties),
		Z_Construct_UScriptStruct_FPathProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPathProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPathProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_PathProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PathProperties.InnerSingleton, Z_Construct_UScriptStruct_FPathProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PathProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execGetProcessName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProcessID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileSystemLibraryBPLibrary::GetProcessName(Z_Param_ProcessID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execIsProcessRunning)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProcessID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::IsProcessRunning(Z_Param_ProcessID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execCreateProcess)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToExecutable);
		P_GET_PROPERTY(FStrProperty,Z_Param_Arguments);
		P_GET_UBOOL(Z_Param_LaunchDetached);
		P_GET_UBOOL(Z_Param_LaunchedHidden);
		P_GET_UBOOL(Z_Param_LaunchReallyHidden);
		P_GET_PROPERTY(FIntProperty,Z_Param_PriorityModifier);
		P_GET_UBOOL(Z_Param_UseWorkingDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_WorkingDirectory);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ProcessID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::CreateProcess(Z_Param_PathToExecutable,Z_Param_Arguments,Z_Param_LaunchDetached,Z_Param_LaunchedHidden,Z_Param_LaunchReallyHidden,Z_Param_PriorityModifier,Z_Param_UseWorkingDirectory,Z_Param_WorkingDirectory,Z_Param_Out_ProcessID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execOpenSaveFileDialog)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SaveToPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::OpenSaveFileDialog(Z_Param_Out_SaveToPath,Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_DefaultFileName,Z_Param_FileTypes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execOpenFileSelectDialog)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::OpenFileSelectDialog(Z_Param_Out_FilePath,Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_FileTypes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execOpenFileMultiSelectDialog)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_FilePaths);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_UBOOL(Z_Param_AllowMultiSelect);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::OpenFileMultiSelectDialog(Z_Param_Out_FilePaths,Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_AllowMultiSelect,Z_Param_FileTypes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execOpenFolderSelectDialog)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FolderPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::OpenFolderSelectDialog(Z_Param_Out_FolderPath,Z_Param_DialogTitle,Z_Param_DefaultPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execGetFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_IncludeExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileSystemLibraryBPLibrary::GetFileName(Z_Param_Path,Z_Param_IncludeExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execGetFilePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileSystemLibraryBPLibrary::GetFilePath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execGetFileExtension)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileSystemLibraryBPLibrary::GetFileExtension(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execAppendStringArrayToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_GET_TARRAY(FString,Z_Param_FileContent);
		P_GET_UBOOL(Z_Param_AppendFileToStringArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::AppendStringArrayToFile(Z_Param_PathToFile,Z_Param_FileContent,Z_Param_AppendFileToStringArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execSaveStringArrayToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_GET_TARRAY(FString,Z_Param_FileContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::SaveStringArrayToFile(Z_Param_PathToFile,Z_Param_FileContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execLoadTextFileToString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FileContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::LoadTextFileToString(Z_Param_Out_FileContent,Z_Param_PathToFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execInsertStringArrayToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_GET_TARRAY(FString,Z_Param_FileContent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InsertAtIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::InsertStringArrayToFile(Z_Param_PathToFile,Z_Param_FileContent,Z_Param_InsertAtIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execLoadTextFileToStringArray)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_FileContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::LoadTextFileToStringArray(Z_Param_Out_FileContent,Z_Param_PathToFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execGetFilesRecursivelyInDirectory)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtensionFilter);
		P_GET_UBOOL(Z_Param_OnlyReturnFilenames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::GetFilesRecursivelyInDirectory(Z_Param_Out_Files,Z_Param_PathToDirectory,Z_Param_ExtensionFilter,Z_Param_OnlyReturnFilenames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execGetFilesInDirectory)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtensionFilter);
		P_GET_UBOOL(Z_Param_OnlyReturnFilenames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::GetFilesInDirectory(Z_Param_Out_Files,Z_Param_PathToDirectory,Z_Param_ExtensionFilter,Z_Param_OnlyReturnFilenames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execGetFileOrDirectorySize)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSizeBytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::GetFileOrDirectorySize(Z_Param_Out_FileSizeBytes,Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execGetFileOrDirectoryProperties)
	{
		P_GET_STRUCT_REF(FPathProperties,Z_Param_Out_Properties);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::GetFileOrDirectoryProperties(Z_Param_Out_Properties,Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execOpenDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileSystemLibraryBPLibrary::OpenDirectory(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execMoveDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewPathToDirectory);
		P_GET_UBOOL(Z_Param_AllowOvewrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::MoveDirectory(Z_Param_PathToDirectory,Z_Param_NewPathToDirectory,Z_Param_AllowOvewrite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execCopyDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewPathToDirectory);
		P_GET_UBOOL(Z_Param_AllowOvewrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::CopyDirectory(Z_Param_PathToDirectory,Z_Param_NewPathToDirectory,Z_Param_AllowOvewrite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execDeleteDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::DeleteDirectory(Z_Param_PathToDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execVerifyDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::VerifyDirectory(Z_Param_PathToDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execVerifyAndCreateDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToDirectory);
		P_GET_UBOOL(Z_Param_CreateDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::VerifyAndCreateDirectory(Z_Param_PathToDirectory,Z_Param_CreateDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execDeleteFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::DeleteFile(Z_Param_PathToFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execRenameFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::RenameFile(Z_Param_PathToFile,Z_Param_NewFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execMoveFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::MoveFile(Z_Param_PathToFile,Z_Param_DestinationFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execCopyFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::CopyFile(Z_Param_PathToFile,Z_Param_DestinationFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileSystemLibraryBPLibrary::execVerifyFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileSystemLibraryBPLibrary::VerifyFile(Z_Param_PathToFile);
		P_NATIVE_END;
	}
	void UFileSystemLibraryBPLibrary::StaticRegisterNativesUFileSystemLibraryBPLibrary()
	{
		UClass* Class = UFileSystemLibraryBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendStringArrayToFile", &UFileSystemLibraryBPLibrary::execAppendStringArrayToFile },
			{ "CopyDirectory", &UFileSystemLibraryBPLibrary::execCopyDirectory },
			{ "CopyFile", &UFileSystemLibraryBPLibrary::execCopyFile },
			{ "CreateProcess", &UFileSystemLibraryBPLibrary::execCreateProcess },
			{ "DeleteDirectory", &UFileSystemLibraryBPLibrary::execDeleteDirectory },
			{ "DeleteFile", &UFileSystemLibraryBPLibrary::execDeleteFile },
			{ "GetFileExtension", &UFileSystemLibraryBPLibrary::execGetFileExtension },
			{ "GetFileName", &UFileSystemLibraryBPLibrary::execGetFileName },
			{ "GetFileOrDirectoryProperties", &UFileSystemLibraryBPLibrary::execGetFileOrDirectoryProperties },
			{ "GetFileOrDirectorySize", &UFileSystemLibraryBPLibrary::execGetFileOrDirectorySize },
			{ "GetFilePath", &UFileSystemLibraryBPLibrary::execGetFilePath },
			{ "GetFilesInDirectory", &UFileSystemLibraryBPLibrary::execGetFilesInDirectory },
			{ "GetFilesRecursivelyInDirectory", &UFileSystemLibraryBPLibrary::execGetFilesRecursivelyInDirectory },
			{ "GetProcessName", &UFileSystemLibraryBPLibrary::execGetProcessName },
			{ "InsertStringArrayToFile", &UFileSystemLibraryBPLibrary::execInsertStringArrayToFile },
			{ "IsProcessRunning", &UFileSystemLibraryBPLibrary::execIsProcessRunning },
			{ "LoadTextFileToString", &UFileSystemLibraryBPLibrary::execLoadTextFileToString },
			{ "LoadTextFileToStringArray", &UFileSystemLibraryBPLibrary::execLoadTextFileToStringArray },
			{ "MoveDirectory", &UFileSystemLibraryBPLibrary::execMoveDirectory },
			{ "MoveFile", &UFileSystemLibraryBPLibrary::execMoveFile },
			{ "OpenDirectory", &UFileSystemLibraryBPLibrary::execOpenDirectory },
			{ "OpenFileMultiSelectDialog", &UFileSystemLibraryBPLibrary::execOpenFileMultiSelectDialog },
			{ "OpenFileSelectDialog", &UFileSystemLibraryBPLibrary::execOpenFileSelectDialog },
			{ "OpenFolderSelectDialog", &UFileSystemLibraryBPLibrary::execOpenFolderSelectDialog },
			{ "OpenSaveFileDialog", &UFileSystemLibraryBPLibrary::execOpenSaveFileDialog },
			{ "RenameFile", &UFileSystemLibraryBPLibrary::execRenameFile },
			{ "SaveStringArrayToFile", &UFileSystemLibraryBPLibrary::execSaveStringArrayToFile },
			{ "VerifyAndCreateDirectory", &UFileSystemLibraryBPLibrary::execVerifyAndCreateDirectory },
			{ "VerifyDirectory", &UFileSystemLibraryBPLibrary::execVerifyDirectory },
			{ "VerifyFile", &UFileSystemLibraryBPLibrary::execVerifyFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics
	{
		struct FileSystemLibraryBPLibrary_eventAppendStringArrayToFile_Parms
		{
			FString PathToFile;
			TArray<FString> FileContent;
			bool AppendFileToStringArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileContent_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FileContent;
		static void NewProp_AppendFileToStringArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AppendFileToStringArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventAppendStringArrayToFile_Parms, PathToFile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_FileContent_Inner = { "FileContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_FileContent = { "FileContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventAppendStringArrayToFile_Parms, FileContent), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_AppendFileToStringArray_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventAppendStringArrayToFile_Parms*)Obj)->AppendFileToStringArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_AppendFileToStringArray = { "AppendFileToStringArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventAppendStringArrayToFile_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_AppendFileToStringArray_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventAppendStringArrayToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventAppendStringArrayToFile_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_PathToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_FileContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_FileContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_AppendFileToStringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemFile I/O" },
		{ "Comment", "/* This function will append the input string array to the file's content. The AppendFileToStringArray param will insert the input content before the file's. \n\x09@param PathToFile\x09\x09\x09\x09Path to the file to edit.\n\x09@param FileContent\x09\x09\x09\x09""Content to append to the file.\n\x09@param AppendFileToStringArray\x09If true, will insert the input FileContent before the file's content.\n\x09*/" },
		{ "DisplayName", "AppendStringArrayToFile" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will append the input string array to the file's content. The AppendFileToStringArray param will insert the input content before the file's.\n      @param PathToFile                               Path to the file to edit.\n      @param FileContent                              Content to append to the file.\n      @param AppendFileToStringArray  If true, will insert the input FileContent before the file's content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "AppendStringArrayToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::FileSystemLibraryBPLibrary_eventAppendStringArrayToFile_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics
	{
		struct FileSystemLibraryBPLibrary_eventCopyDirectory_Parms
		{
			FString PathToDirectory;
			FString NewPathToDirectory;
			bool AllowOvewrite;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewPathToDirectory;
		static void NewProp_AllowOvewrite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowOvewrite;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_PathToDirectory = { "PathToDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventCopyDirectory_Parms, PathToDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_NewPathToDirectory = { "NewPathToDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventCopyDirectory_Parms, NewPathToDirectory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_AllowOvewrite_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventCopyDirectory_Parms*)Obj)->AllowOvewrite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_AllowOvewrite = { "AllowOvewrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventCopyDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_AllowOvewrite_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventCopyDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventCopyDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_PathToDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_NewPathToDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_AllowOvewrite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "System Directory Operations" },
		{ "Comment", "/* This function will copy all files and folders from PathToDirectory to NewPathToDirectory. \n\x09@param\x09PathToDirectory\x09\x09Path to the directory to copy.\n\x09@param\x09NewPathToDirectory\x09Path to the directory to copy the files to.\n\x09@param\x09""AllowOvewrite\x09\x09If true, files that already exist in the destination path will be overwritten.\n\x09*/" },
		{ "CPP_Default_AllowOvewrite", "true" },
		{ "CPP_Default_NewPathToDirectory", "" },
		{ "CPP_Default_PathToDirectory", "" },
		{ "DisplayName", "CopyDirectory" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will copy all files and folders from PathToDirectory to NewPathToDirectory.\n      @param  PathToDirectory         Path to the directory to copy.\n      @param  NewPathToDirectory      Path to the directory to copy the files to.\n      @param  AllowOvewrite           If true, files that already exist in the destination path will be overwritten." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "CopyDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::FileSystemLibraryBPLibrary_eventCopyDirectory_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics
	{
		struct FileSystemLibraryBPLibrary_eventCopyFile_Parms
		{
			FString PathToFile;
			FString DestinationFilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventCopyFile_Parms, PathToFile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::NewProp_DestinationFilePath = { "DestinationFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventCopyFile_Parms, DestinationFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventCopyFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventCopyFile_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::NewProp_PathToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::NewProp_DestinationFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "System File Operations" },
		{ "Comment", "/* This function will copy a file from a path to another. You need to include the full path with extension for both input parameters. \n\x09@param\x09PathToFile\x09\x09\x09\x09Path to the file to copy (including extension).\n\x09@param\x09""DestinationFilePath\x09\x09Path to copy the file to (including filename and extension).\n\x09*/" },
		{ "CPP_Default_DestinationFilePath", "" },
		{ "DisplayName", "CopyFile" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will copy a file from a path to another. You need to include the full path with extension for both input parameters.\n      @param  PathToFile                              Path to the file to copy (including extension).\n      @param  DestinationFilePath             Path to copy the file to (including filename and extension)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "CopyFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::FileSystemLibraryBPLibrary_eventCopyFile_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics
	{
		struct FileSystemLibraryBPLibrary_eventCreateProcess_Parms
		{
			FString PathToExecutable;
			FString Arguments;
			bool LaunchDetached;
			bool LaunchedHidden;
			bool LaunchReallyHidden;
			int32 PriorityModifier;
			bool UseWorkingDirectory;
			FString WorkingDirectory;
			int32 ProcessID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToExecutable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Arguments;
		static void NewProp_LaunchDetached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchDetached;
		static void NewProp_LaunchedHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchedHidden;
		static void NewProp_LaunchReallyHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchReallyHidden;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PriorityModifier;
		static void NewProp_UseWorkingDirectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseWorkingDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WorkingDirectory;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_PathToExecutable = { "PathToExecutable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventCreateProcess_Parms, PathToExecutable), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventCreateProcess_Parms, Arguments), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchDetached_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventCreateProcess_Parms*)Obj)->LaunchDetached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchDetached = { "LaunchDetached", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventCreateProcess_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchDetached_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchedHidden_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventCreateProcess_Parms*)Obj)->LaunchedHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchedHidden = { "LaunchedHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventCreateProcess_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchedHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchReallyHidden_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventCreateProcess_Parms*)Obj)->LaunchReallyHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchReallyHidden = { "LaunchReallyHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventCreateProcess_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchReallyHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_PriorityModifier = { "PriorityModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventCreateProcess_Parms, PriorityModifier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_UseWorkingDirectory_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventCreateProcess_Parms*)Obj)->UseWorkingDirectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_UseWorkingDirectory = { "UseWorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventCreateProcess_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_UseWorkingDirectory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_WorkingDirectory = { "WorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventCreateProcess_Parms, WorkingDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_ProcessID = { "ProcessID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventCreateProcess_Parms, ProcessID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventCreateProcess_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventCreateProcess_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_PathToExecutable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_Arguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchDetached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchedHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_LaunchReallyHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_PriorityModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_UseWorkingDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_WorkingDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_ProcessID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Process" },
		{ "Comment", "/* Creates a new process and its primary thread. The new process runs the specified executable file in the security context of the calling process.\n\x09\x09@param\x09PathToExecutable\x09\x09The path to the executable to run.\n\x09\x09@param\x09""Arguments\x09\x09\x09\x09""Any command line argument to run when executing.\n\x09\x09@param\x09LaunchDetached\x09\x09\x09If true, the process will have its own window.\n\x09\x09@param\x09LaunchedHidden\x09\x09\x09If true, the new process will be minimized in the task bar\n\x09\x09@param\x09LaunchReallyHidden\x09\x09If true, the new process will not have a window or be in the task bar\n\x09\x09@param\x09PriorityModifier\x09\x09""2 idle, -1 low, 0 normal, 1 high, 2 higher\n\x09\x09@param\x09UseWorkingDirectory\x09\x09If true, will use WorkingDirectory to start the executable in instead of its current directory.\n\x09\x09@param\x09WorkingDirectory\x09\x09""Directory to start the executable in (required UseWorkingDirectory = true).\n\x09\x09@param ProcessID\x09\x09\x09\x09The created process' ID, use this to track its execution.\n\x09*/" },
		{ "DisplayName", "CreateProcess" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "Creates a new process and its primary thread. The new process runs the specified executable file in the security context of the calling process.\n              @param  PathToExecutable                The path to the executable to run.\n              @param  Arguments                               Any command line argument to run when executing.\n              @param  LaunchDetached                  If true, the process will have its own window.\n              @param  LaunchedHidden                  If true, the new process will be minimized in the task bar\n              @param  LaunchReallyHidden              If true, the new process will not have a window or be in the task bar\n              @param  PriorityModifier                2 idle, -1 low, 0 normal, 1 high, 2 higher\n              @param  UseWorkingDirectory             If true, will use WorkingDirectory to start the executable in instead of its current directory.\n              @param  WorkingDirectory                Directory to start the executable in (required UseWorkingDirectory = true).\n              @param ProcessID                                The created process' ID, use this to track its execution." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "CreateProcess", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::FileSystemLibraryBPLibrary_eventCreateProcess_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics
	{
		struct FileSystemLibraryBPLibrary_eventDeleteDirectory_Parms
		{
			FString PathToDirectory;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToDirectory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::NewProp_PathToDirectory = { "PathToDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventDeleteDirectory_Parms, PathToDirectory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventDeleteDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::NewProp_PathToDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "System Directory Operations" },
		{ "Comment", "/* This function will the specified directory and all file/folders inside it. \n\x09@param PathToDirectory The path to the directory to delete.\n\x09*/" },
		{ "CPP_Default_PathToDirectory", "" },
		{ "DisplayName", "DeleteDirectory" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will the specified directory and all file/folders inside it.\n      @param PathToDirectory The path to the directory to delete." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "DeleteDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::FileSystemLibraryBPLibrary_eventDeleteDirectory_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics
	{
		struct FileSystemLibraryBPLibrary_eventDeleteFile_Parms
		{
			FString PathToFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventDeleteFile_Parms, PathToFile), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::NewProp_PathToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "System File Operations" },
		{ "Comment", "/* This function will rename the specified file. You need to include filename with extension for both input parameters. \n\x09@param PathToFile\x09Path to the file to delete (including extension).\n\x09*/" },
		{ "DisplayName", "DeleteFile" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will rename the specified file. You need to include filename with extension for both input parameters.\n      @param PathToFile       Path to the file to delete (including extension)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "DeleteFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::FileSystemLibraryBPLibrary_eventDeleteFile_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics
	{
		struct FileSystemLibraryBPLibrary_eventGetFileExtension_Parms
		{
			FString Path;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFileExtension_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFileExtension_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemFile I/O" },
		{ "Comment", "/* This function will return a file extension from the input path. \n\x09@param PathToFile Path to get the extension from.\n\x09*/" },
		{ "DisplayName", "GetExtension" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will return a file extension from the input path.\n      @param PathToFile Path to get the extension from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "GetFileExtension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::FileSystemLibraryBPLibrary_eventGetFileExtension_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics
	{
		struct FileSystemLibraryBPLibrary_eventGetFileName_Parms
		{
			FString Path;
			bool IncludeExtension;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_IncludeExtension_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeExtension;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFileName_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::NewProp_IncludeExtension_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventGetFileName_Parms*)Obj)->IncludeExtension = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::NewProp_IncludeExtension = { "IncludeExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventGetFileName_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::NewProp_IncludeExtension_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::NewProp_IncludeExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemFile I/O" },
		{ "Comment", "/* This function will return a filename from the input path. \n\x09@param Path\x09\x09\x09\x09Path to extract the filename from.\n\x09@param IncludeExtension If true, the filename will be returned with its extension.\n\x09*/" },
		{ "DisplayName", "GetFilename" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will return a filename from the input path.\n      @param Path                             Path to extract the filename from.\n      @param IncludeExtension If true, the filename will be returned with its extension." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "GetFileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::FileSystemLibraryBPLibrary_eventGetFileName_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics
	{
		struct FileSystemLibraryBPLibrary_eventGetFileOrDirectoryProperties_Parms
		{
			FPathProperties Properties;
			FString Path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFileOrDirectoryProperties_Parms, Properties), Z_Construct_UScriptStruct_FPathProperties, METADATA_PARAMS(nullptr, 0) }; // 3621635508
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFileOrDirectoryProperties_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventGetFileOrDirectoryProperties_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventGetFileOrDirectoryProperties_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "File System Library" },
		{ "Comment", "/* This function will return the file's or folder's properties. \n\x09@param\x09Path\x09\x09Path to the file (including extension).\n\x09@return\x09Properties\x09The file's property.\n\x09*/" },
		{ "CPP_Default_Path", "" },
		{ "DisplayName", "GetFileOrDirectoryProperties" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will return the file's or folder's properties.\n      @param  Path            Path to the file (including extension).\n      @return Properties      The file's property." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "GetFileOrDirectoryProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::FileSystemLibraryBPLibrary_eventGetFileOrDirectoryProperties_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics
	{
		struct FileSystemLibraryBPLibrary_eventGetFileOrDirectorySize_Parms
		{
			int32 FileSizeBytes;
			FString Path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FileSizeBytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::NewProp_FileSizeBytes = { "FileSizeBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFileOrDirectorySize_Parms, FileSizeBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFileOrDirectorySize_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventGetFileOrDirectorySize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventGetFileOrDirectorySize_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::NewProp_FileSizeBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::Function_MetaDataParams[] = {
		{ "Category", "File System Library" },
		{ "Comment", "/* This function will return the file's or folder's properties. \n\x09@param\x09Path\x09\x09\x09Path to the file (including extension).\n\x09@return\x09""FileSizeBytes\x09The file's size in bytes (multiply by 1 000 000 to get the result in Mb).\n\x09*/" },
		{ "CPP_Default_Path", "" },
		{ "DisplayName", "GetFileOrDirectorySize" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will return the file's or folder's properties.\n      @param  Path                    Path to the file (including extension).\n      @return FileSizeBytes   The file's size in bytes (multiply by 1 000 000 to get the result in Mb)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "GetFileOrDirectorySize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::FileSystemLibraryBPLibrary_eventGetFileOrDirectorySize_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics
	{
		struct FileSystemLibraryBPLibrary_eventGetFilePath_Parms
		{
			FString Path;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFilePath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemFile I/O" },
		{ "Comment", "/* This function will return a valid directory path from the input path (without a filename nor extension). \n\x09@param PathToFile The path to extract the valid directory from.\n\x09*/" },
		{ "DisplayName", "GetDirectoryPath" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will return a valid directory path from the input path (without a filename nor extension).\n      @param PathToFile The path to extract the valid directory from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "GetFilePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::FileSystemLibraryBPLibrary_eventGetFilePath_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics
	{
		struct FileSystemLibraryBPLibrary_eventGetFilesInDirectory_Parms
		{
			TArray<FString> Files;
			FString PathToDirectory;
			FString ExtensionFilter;
			bool OnlyReturnFilenames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtensionFilter;
		static void NewProp_OnlyReturnFilenames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyReturnFilenames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFilesInDirectory_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_PathToDirectory = { "PathToDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFilesInDirectory_Parms, PathToDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_ExtensionFilter = { "ExtensionFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFilesInDirectory_Parms, ExtensionFilter), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_OnlyReturnFilenames_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventGetFilesInDirectory_Parms*)Obj)->OnlyReturnFilenames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_OnlyReturnFilenames = { "OnlyReturnFilenames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventGetFilesInDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_OnlyReturnFilenames_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventGetFilesInDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventGetFilesInDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_PathToDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_ExtensionFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_OnlyReturnFilenames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "File System Library" },
		{ "Comment", "/* This function will return the name of all files present in the specified directory. \n\x09@param\x09PathToDirectory\x09\x09\x09Path to the directory.\n\x09@param\x09""ExtensionFilter\x09\x09\x09If set, will only return files of the input extension. (\".XXX\" or \"XXX\").\n\x09@param\x09OnlyReturnFilenames\x09\x09If true, will only return the filenames (without the extension).\n\x09@return\x09""Files\x09\x09\x09\x09\x09The files found in the specific directory.\n\x09*/" },
		{ "DisplayName", "GetFilesInDirectory" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will return the name of all files present in the specified directory.\n      @param  PathToDirectory                 Path to the directory.\n      @param  ExtensionFilter                 If set, will only return files of the input extension. (\".XXX\" or \"XXX\").\n      @param  OnlyReturnFilenames             If true, will only return the filenames (without the extension).\n      @return Files                                   The files found in the specific directory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "GetFilesInDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::FileSystemLibraryBPLibrary_eventGetFilesInDirectory_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics
	{
		struct FileSystemLibraryBPLibrary_eventGetFilesRecursivelyInDirectory_Parms
		{
			TArray<FString> Files;
			FString PathToDirectory;
			FString ExtensionFilter;
			bool OnlyReturnFilenames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtensionFilter;
		static void NewProp_OnlyReturnFilenames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyReturnFilenames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFilesRecursivelyInDirectory_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_PathToDirectory = { "PathToDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFilesRecursivelyInDirectory_Parms, PathToDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_ExtensionFilter = { "ExtensionFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetFilesRecursivelyInDirectory_Parms, ExtensionFilter), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_OnlyReturnFilenames_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventGetFilesRecursivelyInDirectory_Parms*)Obj)->OnlyReturnFilenames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_OnlyReturnFilenames = { "OnlyReturnFilenames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventGetFilesRecursivelyInDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_OnlyReturnFilenames_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventGetFilesRecursivelyInDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventGetFilesRecursivelyInDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_PathToDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_ExtensionFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_OnlyReturnFilenames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "File System Library" },
		{ "Comment", "/* This function will return the name of all files present in the specified directory and all sub-directories.\n\x09@param\x09PathToDirectory\x09\x09\x09Path to the directory.\n\x09@param\x09""ExtensionFilter\x09\x09\x09If set, will only return files of the input extension. (\".XXX\" or \"XXX\").\n\x09@param\x09OnlyReturnFilenames\x09\x09If true, will only return the filenames (without the extension).\n\x09@return\x09""Files\x09\x09\x09\x09\x09The files found in the specific directory.\n\x09*/" },
		{ "DisplayName", "GetFilesRecursivelyInDirectory" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will return the name of all files present in the specified directory and all sub-directories.\n      @param  PathToDirectory                 Path to the directory.\n      @param  ExtensionFilter                 If set, will only return files of the input extension. (\".XXX\" or \"XXX\").\n      @param  OnlyReturnFilenames             If true, will only return the filenames (without the extension).\n      @return Files                                   The files found in the specific directory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "GetFilesRecursivelyInDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::FileSystemLibraryBPLibrary_eventGetFilesRecursivelyInDirectory_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics
	{
		struct FileSystemLibraryBPLibrary_eventGetProcessName_Parms
		{
			int32 ProcessID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::NewProp_ProcessID = { "ProcessID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetProcessName_Parms, ProcessID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventGetProcessName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::NewProp_ProcessID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Process" },
		{ "Comment", "/* Returns the name of the process.\n\x09\x09@param ProcessID\x09The ID of the process to query.\n\x09*/" },
		{ "DisplayName", "GetProcessName" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "Returns the name of the process.\n              @param ProcessID        The ID of the process to query." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "GetProcessName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::FileSystemLibraryBPLibrary_eventGetProcessName_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics
	{
		struct FileSystemLibraryBPLibrary_eventInsertStringArrayToFile_Parms
		{
			FString PathToFile;
			TArray<FString> FileContent;
			int32 InsertAtIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileContent_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FileContent;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InsertAtIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventInsertStringArrayToFile_Parms, PathToFile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_FileContent_Inner = { "FileContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_FileContent = { "FileContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventInsertStringArrayToFile_Parms, FileContent), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_InsertAtIndex = { "InsertAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventInsertStringArrayToFile_Parms, InsertAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventInsertStringArrayToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventInsertStringArrayToFile_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_PathToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_FileContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_FileContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_InsertAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemFile I/O" },
		{ "Comment", "/* This function will load the content of the specified file to a string. For text file, each array element represents a line from the document.\n\x09@param\x09PathToFile\x09\x09Path to file to edit.\n\x09@param\x09""FileContent\x09\x09""Content to insert (where one element of the array represent a line of the document).\n\x09@param\x09InsertAtIndex\x09Line number to insert to content at.\n\x09*/" },
		{ "DisplayName", "InsertStringArrayToFile" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will load the content of the specified file to a string. For text file, each array element represents a line from the document.\n      @param  PathToFile              Path to file to edit.\n      @param  FileContent             Content to insert (where one element of the array represent a line of the document).\n      @param  InsertAtIndex   Line number to insert to content at." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "InsertStringArrayToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::FileSystemLibraryBPLibrary_eventInsertStringArrayToFile_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics
	{
		struct FileSystemLibraryBPLibrary_eventIsProcessRunning_Parms
		{
			int32 ProcessID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::NewProp_ProcessID = { "ProcessID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventIsProcessRunning_Parms, ProcessID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventIsProcessRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventIsProcessRunning_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::NewProp_ProcessID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Process" },
		{ "Comment", "/* Returns whether or not a specific process is running or not.\n\x09\x09@param ProcessID\x09The ID of the process to query.\n\x09*/" },
		{ "DisplayName", "IsProcessRunning" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "Returns whether or not a specific process is running or not.\n              @param ProcessID        The ID of the process to query." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "IsProcessRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::FileSystemLibraryBPLibrary_eventIsProcessRunning_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics
	{
		struct FileSystemLibraryBPLibrary_eventLoadTextFileToString_Parms
		{
			FString FileContent;
			FString PathToFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileContent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::NewProp_FileContent = { "FileContent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventLoadTextFileToString_Parms, FileContent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventLoadTextFileToString_Parms, PathToFile), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventLoadTextFileToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventLoadTextFileToString_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::NewProp_FileContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::NewProp_PathToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemFile I/O" },
		{ "Comment", "/* This function will load the content of the specified file to a string array. For text file, each array element represents a line from the document.\n\x09@param\x09PathToFile\x09\x09Path to the file to load the string from.\n\x09@return\x09""FileContent\x09\x09The file's content.\n\x09*/" },
		{ "DisplayName", "LoadTextFileToString" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will load the content of the specified file to a string array. For text file, each array element represents a line from the document.\n      @param  PathToFile              Path to the file to load the string from.\n      @return FileContent             The file's content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "LoadTextFileToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::FileSystemLibraryBPLibrary_eventLoadTextFileToString_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics
	{
		struct FileSystemLibraryBPLibrary_eventLoadTextFileToStringArray_Parms
		{
			TArray<FString> FileContent;
			FString PathToFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileContent_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FileContent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::NewProp_FileContent_Inner = { "FileContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::NewProp_FileContent = { "FileContent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventLoadTextFileToStringArray_Parms, FileContent), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventLoadTextFileToStringArray_Parms, PathToFile), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventLoadTextFileToStringArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventLoadTextFileToStringArray_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::NewProp_FileContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::NewProp_FileContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::NewProp_PathToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemFile I/O" },
		{ "Comment", "/* This function will load the content of the specified file to a string array. For text file, each array element represents a line from the document.\n\x09@param\x09PathToFile\x09Path to the file to load the string array from.\n\x09@return\x09""FileContent\x09The file's content.\n\x09*/" },
		{ "DisplayName", "LoadTextFileToStringArray" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will load the content of the specified file to a string array. For text file, each array element represents a line from the document.\n      @param  PathToFile      Path to the file to load the string array from.\n      @return FileContent     The file's content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "LoadTextFileToStringArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::FileSystemLibraryBPLibrary_eventLoadTextFileToStringArray_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics
	{
		struct FileSystemLibraryBPLibrary_eventMoveDirectory_Parms
		{
			FString PathToDirectory;
			FString NewPathToDirectory;
			bool AllowOvewrite;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewPathToDirectory;
		static void NewProp_AllowOvewrite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowOvewrite;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_PathToDirectory = { "PathToDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventMoveDirectory_Parms, PathToDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_NewPathToDirectory = { "NewPathToDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventMoveDirectory_Parms, NewPathToDirectory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_AllowOvewrite_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventMoveDirectory_Parms*)Obj)->AllowOvewrite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_AllowOvewrite = { "AllowOvewrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventMoveDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_AllowOvewrite_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventMoveDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventMoveDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_PathToDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_NewPathToDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_AllowOvewrite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "System Directory Operations" },
		{ "Comment", "/* This function will move all files and folders from PathToDirectory to NewPathToDirectory. \n\x09@param\x09PathToDirectory\x09\x09Path to the directory to move.\n\x09@param\x09NewPathToDirectory\x09Path to the directory to move the files to.\n\x09@param\x09""AllowOvewrite\x09\x09If true, files that already exist in the destination path will be overwritten.\n\x09*/" },
		{ "CPP_Default_AllowOvewrite", "true" },
		{ "CPP_Default_NewPathToDirectory", "" },
		{ "CPP_Default_PathToDirectory", "" },
		{ "DisplayName", "MoveDirectory" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will move all files and folders from PathToDirectory to NewPathToDirectory.\n      @param  PathToDirectory         Path to the directory to move.\n      @param  NewPathToDirectory      Path to the directory to move the files to.\n      @param  AllowOvewrite           If true, files that already exist in the destination path will be overwritten." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "MoveDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::FileSystemLibraryBPLibrary_eventMoveDirectory_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics
	{
		struct FileSystemLibraryBPLibrary_eventMoveFile_Parms
		{
			FString PathToFile;
			FString DestinationFilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventMoveFile_Parms, PathToFile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::NewProp_DestinationFilePath = { "DestinationFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventMoveFile_Parms, DestinationFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventMoveFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventMoveFile_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::NewProp_PathToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::NewProp_DestinationFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "System File Operations" },
		{ "Comment", "/* This function will copy a file from a path to another. You need to include the full path with extension for both input parameters. \n\x09@param\x09PathToFile\x09\x09\x09\x09Path to the file to move (including extension).\n\x09@param\x09""DestinationFilePath\x09\x09Path to move the file to (including filename and extension).\n\x09*/" },
		{ "CPP_Default_DestinationFilePath", "" },
		{ "DisplayName", "MoveFile" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will copy a file from a path to another. You need to include the full path with extension for both input parameters.\n      @param  PathToFile                              Path to the file to move (including extension).\n      @param  DestinationFilePath             Path to move the file to (including filename and extension)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "MoveFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::FileSystemLibraryBPLibrary_eventMoveFile_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics
	{
		struct FileSystemLibraryBPLibrary_eventOpenDirectory_Parms
		{
			FString Path;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenDirectory_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "File System Library" },
		{ "Comment", "/** Opens Windows' explorer or Mac OS' finder at the specified path.\n\x09* @param Path\x09\x09Path to the directory.\n\x09*/" },
		{ "DisplayName", "Open Directory" },
		{ "Keywords", "explorer finder folder directory" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "Opens Windows' explorer or Mac OS' finder at the specified path.\n@param Path           Path to the directory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "OpenDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::FileSystemLibraryBPLibrary_eventOpenDirectory_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics
	{
		struct FileSystemLibraryBPLibrary_eventOpenFileMultiSelectDialog_Parms
		{
			TArray<FString> FilePaths;
			FString DialogTitle;
			FString DefaultPath;
			bool AllowMultiSelect;
			FString FileTypes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePaths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilePaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static void NewProp_AllowMultiSelect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowMultiSelect;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_FilePaths_Inner = { "FilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_FilePaths = { "FilePaths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFileMultiSelectDialog_Parms, FilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFileMultiSelectDialog_Parms, DialogTitle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFileMultiSelectDialog_Parms, DefaultPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_AllowMultiSelect_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventOpenFileMultiSelectDialog_Parms*)Obj)->AllowMultiSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_AllowMultiSelect = { "AllowMultiSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventOpenFileMultiSelectDialog_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_AllowMultiSelect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFileMultiSelectDialog_Parms, FileTypes), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventOpenFileMultiSelectDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventOpenFileMultiSelectDialog_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_FilePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_FilePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_AllowMultiSelect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_FileTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "System File Dialogs" },
		{ "Comment", "/*This will open a Folder Select dialog that allows multiple files to be selected. The FilePath return value contain the path for the file selected, its name and its extension.\n@param DialogTitle\x09\x09Title of the dialog window.\n@param DefaultPath\x09\x09Path to open by default (default is blank).\n@param FileTypes\x09\x09The file type filter (you can add as many as you need). The format is: [Type Name] (*.[Type Extension]*)|*.[Type Extension]*|\n*/" },
		{ "CPP_Default_AllowMultiSelect", "false" },
		{ "CPP_Default_DefaultPath", "" },
		{ "CPP_Default_DialogTitle", "Select a file" },
		{ "CPP_Default_FileTypes", "All Files (*.*)|*.*|" },
		{ "DisplayName", "OpenFileMultiSelectDialog" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This will open a Folder Select dialog that allows multiple files to be selected. The FilePath return value contain the path for the file selected, its name and its extension.\n@param DialogTitle             Title of the dialog window.\n@param DefaultPath             Path to open by default (default is blank).\n@param FileTypes               The file type filter (you can add as many as you need). The format is: [Type Name] (*.[Type Extension]*)|*.[Type Extension]*|" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "OpenFileMultiSelectDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::FileSystemLibraryBPLibrary_eventOpenFileMultiSelectDialog_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics
	{
		struct FileSystemLibraryBPLibrary_eventOpenFileSelectDialog_Parms
		{
			FString FilePath;
			FString DialogTitle;
			FString DefaultPath;
			FString FileTypes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFileSelectDialog_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFileSelectDialog_Parms, DialogTitle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFileSelectDialog_Parms, DefaultPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFileSelectDialog_Parms, FileTypes), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventOpenFileSelectDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventOpenFileSelectDialog_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_FileTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "System File Dialogs" },
		{ "Comment", "/*This will open a Folder Select dialog. The FilePath return value contain the path for the file selected, its name and its extension.\n@param DialogTitle\x09\x09Title of the dialog window.\n@param DefaultPath\x09\x09Path to open by default (default is blank).\n@param FileTypes\x09\x09The file type filter (you can add as many as you need). The format is: [Type Name] (*.[Type Extension]*)|*.[Type Extension]*|\n*/" },
		{ "CPP_Default_DefaultPath", "" },
		{ "CPP_Default_DialogTitle", "Select a file" },
		{ "CPP_Default_FileTypes", "All Files (*.*)|*.*|" },
		{ "DisplayName", "OpenFileSelectDialog" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This will open a Folder Select dialog. The FilePath return value contain the path for the file selected, its name and its extension.\n@param DialogTitle             Title of the dialog window.\n@param DefaultPath             Path to open by default (default is blank).\n@param FileTypes               The file type filter (you can add as many as you need). The format is: [Type Name] (*.[Type Extension]*)|*.[Type Extension]*|" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "OpenFileSelectDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::FileSystemLibraryBPLibrary_eventOpenFileSelectDialog_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics
	{
		struct FileSystemLibraryBPLibrary_eventOpenFolderSelectDialog_Parms
		{
			FString FolderPath;
			FString DialogTitle;
			FString DefaultPath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFolderSelectDialog_Parms, FolderPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFolderSelectDialog_Parms, DialogTitle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenFolderSelectDialog_Parms, DefaultPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventOpenFolderSelectDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventOpenFolderSelectDialog_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "System File Dialogs" },
		{ "Comment", "/*This will open a Folder Select dialog. The FolderPath return value contain the path for the folder selected, its name and its extension.\n@param DialogTitle\x09\x09Title of the dialog window.\n@param DefaultPath\x09\x09Path to open by default (default is blank).\n*/" },
		{ "CPP_Default_DefaultPath", "" },
		{ "CPP_Default_DialogTitle", "Select a folder" },
		{ "DisplayName", "OpenFolderSelectDialog" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This will open a Folder Select dialog. The FolderPath return value contain the path for the folder selected, its name and its extension.\n@param DialogTitle             Title of the dialog window.\n@param DefaultPath             Path to open by default (default is blank)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "OpenFolderSelectDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::FileSystemLibraryBPLibrary_eventOpenFolderSelectDialog_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics
	{
		struct FileSystemLibraryBPLibrary_eventOpenSaveFileDialog_Parms
		{
			FString SaveToPath;
			FString DialogTitle;
			FString DefaultPath;
			FString DefaultFileName;
			FString FileTypes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveToPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_SaveToPath = { "SaveToPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenSaveFileDialog_Parms, SaveToPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenSaveFileDialog_Parms, DialogTitle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenSaveFileDialog_Parms, DefaultPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_DefaultFileName = { "DefaultFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenSaveFileDialog_Parms, DefaultFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventOpenSaveFileDialog_Parms, FileTypes), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventOpenSaveFileDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventOpenSaveFileDialog_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_SaveToPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_DefaultFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_FileTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "System File Dialogs" },
		{ "Comment", "/*This will open a File Save dialog. The return value contains the path to the file selected, its name and extension.\n\x09@param DialogTitle\x09\x09Title of the dialog window.\n\x09@param DefaultPath\x09\x09Path to open by default (default is blank).\n\x09@param DefaultFileName\x09Name to give the file by default.\n\x09@param FileTypes\x09\x09The file type filter (you can add as many as you need). The format is: [Type Name] (*.[Type Extension]*)|*.[Type Extension]*|\n\x09*/" },
		{ "CPP_Default_DefaultFileName", "" },
		{ "CPP_Default_DefaultPath", "" },
		{ "CPP_Default_DialogTitle", "Select a file" },
		{ "CPP_Default_FileTypes", "All Files (*.*)|*.*|" },
		{ "DisplayName", "OpenSaveFileDialog" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This will open a File Save dialog. The return value contains the path to the file selected, its name and extension.\n       @param DialogTitle              Title of the dialog window.\n       @param DefaultPath              Path to open by default (default is blank).\n       @param DefaultFileName  Name to give the file by default.\n       @param FileTypes                The file type filter (you can add as many as you need). The format is: [Type Name] (*.[Type Extension]*)|*.[Type Extension]*|" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "OpenSaveFileDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::FileSystemLibraryBPLibrary_eventOpenSaveFileDialog_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics
	{
		struct FileSystemLibraryBPLibrary_eventRenameFile_Parms
		{
			FString PathToFile;
			FString NewFileName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventRenameFile_Parms, PathToFile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::NewProp_NewFileName = { "NewFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventRenameFile_Parms, NewFileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventRenameFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventRenameFile_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::NewProp_PathToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::NewProp_NewFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "System File Operations" },
		{ "Comment", "/* This function will rename the specified file. You need to include filename with extension for both input parameters. \n\x09@param\x09PathToFile\x09\x09Path to the file to rename (including extension).\n\x09@param\x09NewFileName\x09\x09New name for the file (including extension).\n\x09*/" },
		{ "CPP_Default_NewFileName", "" },
		{ "DisplayName", "RenameFile" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will rename the specified file. You need to include filename with extension for both input parameters.\n      @param  PathToFile              Path to the file to rename (including extension).\n      @param  NewFileName             New name for the file (including extension)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "RenameFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::FileSystemLibraryBPLibrary_eventRenameFile_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics
	{
		struct FileSystemLibraryBPLibrary_eventSaveStringArrayToFile_Parms
		{
			FString PathToFile;
			TArray<FString> FileContent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileContent_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FileContent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventSaveStringArrayToFile_Parms, PathToFile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::NewProp_FileContent_Inner = { "FileContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::NewProp_FileContent = { "FileContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventSaveStringArrayToFile_Parms, FileContent), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventSaveStringArrayToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventSaveStringArrayToFile_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::NewProp_PathToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::NewProp_FileContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::NewProp_FileContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemFile I/O" },
		{ "Comment", "/* This function save the input content to a file.\n\x09@param PathToFile\x09PathToFile\x09Path to the file to create (including the extension).\n\x09@param FileContent\x09""FileContent\x09The file's content.\n\x09*/" },
		{ "DisplayName", "SaveStringArrayToFile" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function save the input content to a file.\n      @param PathToFile       PathToFile      Path to the file to create (including the extension).\n      @param FileContent      FileContent     The file's content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "SaveStringArrayToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::FileSystemLibraryBPLibrary_eventSaveStringArrayToFile_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics
	{
		struct FileSystemLibraryBPLibrary_eventVerifyAndCreateDirectory_Parms
		{
			FString PathToDirectory;
			bool CreateDirectory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToDirectory;
		static void NewProp_CreateDirectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateDirectory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_PathToDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_PathToDirectory = { "PathToDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventVerifyAndCreateDirectory_Parms, PathToDirectory), METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_PathToDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_PathToDirectory_MetaData)) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_CreateDirectory_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventVerifyAndCreateDirectory_Parms*)Obj)->CreateDirectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_CreateDirectory = { "CreateDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventVerifyAndCreateDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_CreateDirectory_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventVerifyAndCreateDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventVerifyAndCreateDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_PathToDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_CreateDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "System Directory Operations" },
		{ "Comment", "/* This function will check to see if the specified directory (folder) exist. If it doesn't and CreateDirectory=true, it will create the directory for you. \n\x09@param PathToDirectory\x09Path to the directory to verify.\n\x09@param CreateDirectory\x09If true, the directory will be created if it doesn't exist.\n\x09*/" },
		{ "CPP_Default_CreateDirectory", "true" },
		{ "CPP_Default_PathToDirectory", "" },
		{ "DisplayName", "VerifyAndCreateDirectory" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will check to see if the specified directory (folder) exist. If it doesn't and CreateDirectory=true, it will create the directory for you.\n      @param PathToDirectory  Path to the directory to verify.\n      @param CreateDirectory  If true, the directory will be created if it doesn't exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "VerifyAndCreateDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::FileSystemLibraryBPLibrary_eventVerifyAndCreateDirectory_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics
	{
		struct FileSystemLibraryBPLibrary_eventVerifyDirectory_Parms
		{
			FString PathToDirectory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToDirectory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::NewProp_PathToDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::NewProp_PathToDirectory = { "PathToDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventVerifyDirectory_Parms, PathToDirectory), METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::NewProp_PathToDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::NewProp_PathToDirectory_MetaData)) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventVerifyDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventVerifyDirectory_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::NewProp_PathToDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "System Directory Operations" },
		{ "Comment", "/* This function will check to see if the specified directory (folder) exist.\n@param PathToDirectory\x09Path to the directory to verify.\n*/" },
		{ "CPP_Default_PathToDirectory", "" },
		{ "DisplayName", "VerifyDirectory" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will check to see if the specified directory (folder) exist.\n@param PathToDirectory Path to the directory to verify." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "VerifyDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::FileSystemLibraryBPLibrary_eventVerifyDirectory_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics
	{
		struct FileSystemLibraryBPLibrary_eventVerifyFile_Parms
		{
			FString PathToFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::NewProp_PathToFile = { "PathToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileSystemLibraryBPLibrary_eventVerifyFile_Parms, PathToFile), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileSystemLibraryBPLibrary_eventVerifyFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileSystemLibraryBPLibrary_eventVerifyFile_Parms), &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::NewProp_PathToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "System File Operations" },
		{ "Comment", "/* This function will check to see if the specified file (folder) exists. You need to include the file extension. \n\x09@param PathToFile The path to the file to verify (including extension)\n\x09*/" },
		{ "CPP_Default_PathToFile", "" },
		{ "DisplayName", "VerifyFile" },
		{ "Keywords", "FileSystemLibrary" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "This function will check to see if the specified file (folder) exists. You need to include the file extension.\n      @param PathToFile The path to the file to verify (including extension)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemLibraryBPLibrary, nullptr, "VerifyFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::FileSystemLibraryBPLibrary_eventVerifyFile_Parms), Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileSystemLibraryBPLibrary);
	UClass* Z_Construct_UClass_UFileSystemLibraryBPLibrary_NoRegister()
	{
		return UFileSystemLibraryBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FileSystemLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_AppendStringArrayToFile, "AppendStringArrayToFile" }, // 4140555190
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyDirectory, "CopyDirectory" }, // 1107210237
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CopyFile, "CopyFile" }, // 1786868637
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_CreateProcess, "CreateProcess" }, // 687557534
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteDirectory, "DeleteDirectory" }, // 1387436965
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_DeleteFile, "DeleteFile" }, // 3545268710
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileExtension, "GetFileExtension" }, // 3351209115
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileName, "GetFileName" }, // 458473247
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectoryProperties, "GetFileOrDirectoryProperties" }, // 2779642196
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFileOrDirectorySize, "GetFileOrDirectorySize" }, // 3032997855
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilePath, "GetFilePath" }, // 3688388412
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesInDirectory, "GetFilesInDirectory" }, // 3369238138
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetFilesRecursivelyInDirectory, "GetFilesRecursivelyInDirectory" }, // 616451949
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_GetProcessName, "GetProcessName" }, // 1467771229
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_InsertStringArrayToFile, "InsertStringArrayToFile" }, // 146539531
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_IsProcessRunning, "IsProcessRunning" }, // 1998183020
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToString, "LoadTextFileToString" }, // 3823561092
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_LoadTextFileToStringArray, "LoadTextFileToStringArray" }, // 2707242775
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveDirectory, "MoveDirectory" }, // 2189714305
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_MoveFile, "MoveFile" }, // 1627858238
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenDirectory, "OpenDirectory" }, // 2150244807
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileMultiSelectDialog, "OpenFileMultiSelectDialog" }, // 2523854315
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFileSelectDialog, "OpenFileSelectDialog" }, // 3947377993
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenFolderSelectDialog, "OpenFolderSelectDialog" }, // 987137757
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_OpenSaveFileDialog, "OpenSaveFileDialog" }, // 163081563
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_RenameFile, "RenameFile" }, // 2576727178
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_SaveStringArrayToFile, "SaveStringArrayToFile" }, // 791016386
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyAndCreateDirectory, "VerifyAndCreateDirectory" }, // 692801918
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyDirectory, "VerifyDirectory" }, // 4099352363
		{ &Z_Construct_UFunction_UFileSystemLibraryBPLibrary_VerifyFile, "VerifyFile" }, // 648399221
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FileSystemLibraryBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileSystemLibraryBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics::ClassParams = {
		&UFileSystemLibraryBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileSystemLibraryBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UFileSystemLibraryBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileSystemLibraryBPLibrary.OuterSingleton, Z_Construct_UClass_UFileSystemLibraryBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileSystemLibraryBPLibrary.OuterSingleton;
	}
	template<> FILESYSTEMLIBRARY_API UClass* StaticClass<UFileSystemLibraryBPLibrary>()
	{
		return UFileSystemLibraryBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileSystemLibraryBPLibrary);
	UFileSystemLibraryBPLibrary::~UFileSystemLibraryBPLibrary() {}
	struct Z_Construct_UDelegateFunction_UCreateProcessWithCallback_OnCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCreateProcessWithCallback_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCreateProcessWithCallback_OnCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateProcessWithCallback, nullptr, "OnCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCreateProcessWithCallback_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCreateProcessWithCallback_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCreateProcessWithCallback_OnCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCreateProcessWithCallback_OnCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCreateProcessWithCallback::execbIsProcessRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bIsProcessRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreateProcessWithCallback::execCreateProcessWithCallback)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObj);
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToExecutable);
		P_GET_PROPERTY(FStrProperty,Z_Param_Arguments);
		P_GET_UBOOL(Z_Param_LaunchDetached);
		P_GET_UBOOL(Z_Param_LaunchedHidden);
		P_GET_UBOOL(Z_Param_LaunchReallyHidden);
		P_GET_PROPERTY(FIntProperty,Z_Param_PriorityModifier);
		P_GET_UBOOL(Z_Param_UseWorkingDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_WorkingDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCreateProcessWithCallback**)Z_Param__Result=UCreateProcessWithCallback::CreateProcessWithCallback(Z_Param_WorldContextObj,Z_Param_PathToExecutable,Z_Param_Arguments,Z_Param_LaunchDetached,Z_Param_LaunchedHidden,Z_Param_LaunchReallyHidden,Z_Param_PriorityModifier,Z_Param_UseWorkingDirectory,Z_Param_WorkingDirectory);
		P_NATIVE_END;
	}
	void UCreateProcessWithCallback::StaticRegisterNativesUCreateProcessWithCallback()
	{
		UClass* Class = UCreateProcessWithCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "bIsProcessRunning", &UCreateProcessWithCallback::execbIsProcessRunning },
			{ "CreateProcessWithCallback", &UCreateProcessWithCallback::execCreateProcessWithCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreateProcessWithCallback_bIsProcessRunning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateProcessWithCallback_bIsProcessRunning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateProcessWithCallback_bIsProcessRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateProcessWithCallback, nullptr, "bIsProcessRunning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreateProcessWithCallback_bIsProcessRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateProcessWithCallback_bIsProcessRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreateProcessWithCallback_bIsProcessRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreateProcessWithCallback_bIsProcessRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics
	{
		struct CreateProcessWithCallback_eventCreateProcessWithCallback_Parms
		{
			UObject* WorldContextObj;
			FString PathToExecutable;
			FString Arguments;
			bool LaunchDetached;
			bool LaunchedHidden;
			bool LaunchReallyHidden;
			int32 PriorityModifier;
			bool UseWorkingDirectory;
			FString WorkingDirectory;
			UCreateProcessWithCallback* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObj;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToExecutable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Arguments;
		static void NewProp_LaunchDetached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchDetached;
		static void NewProp_LaunchedHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchedHidden;
		static void NewProp_LaunchReallyHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchReallyHidden;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PriorityModifier;
		static void NewProp_UseWorkingDirectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseWorkingDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WorkingDirectory;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_WorldContextObj = { "WorldContextObj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateProcessWithCallback_eventCreateProcessWithCallback_Parms, WorldContextObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_PathToExecutable = { "PathToExecutable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateProcessWithCallback_eventCreateProcessWithCallback_Parms, PathToExecutable), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateProcessWithCallback_eventCreateProcessWithCallback_Parms, Arguments), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchDetached_SetBit(void* Obj)
	{
		((CreateProcessWithCallback_eventCreateProcessWithCallback_Parms*)Obj)->LaunchDetached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchDetached = { "LaunchDetached", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CreateProcessWithCallback_eventCreateProcessWithCallback_Parms), &Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchDetached_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchedHidden_SetBit(void* Obj)
	{
		((CreateProcessWithCallback_eventCreateProcessWithCallback_Parms*)Obj)->LaunchedHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchedHidden = { "LaunchedHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CreateProcessWithCallback_eventCreateProcessWithCallback_Parms), &Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchedHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchReallyHidden_SetBit(void* Obj)
	{
		((CreateProcessWithCallback_eventCreateProcessWithCallback_Parms*)Obj)->LaunchReallyHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchReallyHidden = { "LaunchReallyHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CreateProcessWithCallback_eventCreateProcessWithCallback_Parms), &Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchReallyHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_PriorityModifier = { "PriorityModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateProcessWithCallback_eventCreateProcessWithCallback_Parms, PriorityModifier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_UseWorkingDirectory_SetBit(void* Obj)
	{
		((CreateProcessWithCallback_eventCreateProcessWithCallback_Parms*)Obj)->UseWorkingDirectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_UseWorkingDirectory = { "UseWorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CreateProcessWithCallback_eventCreateProcessWithCallback_Parms), &Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_UseWorkingDirectory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_WorkingDirectory = { "WorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateProcessWithCallback_eventCreateProcessWithCallback_Parms, WorkingDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateProcessWithCallback_eventCreateProcessWithCallback_Parms, ReturnValue), Z_Construct_UClass_UCreateProcessWithCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_WorldContextObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_PathToExecutable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_Arguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchDetached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchedHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_LaunchReallyHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_PriorityModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_UseWorkingDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_WorkingDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FileSystemLibrary" },
		{ "Comment", "/* Same as CreateProcess but has an output pin that executes when the process has ended. \n\x09Use with caution, this might cause performance issues as we are checking whether the process\n\x09is running every tick.\n\n\x09\x09@param\x09PathToExecutable\x09\x09The path to the executable to run.\n\x09\x09@param\x09""Arguments\x09\x09\x09\x09""Any command line argument to run when executing.\n\x09\x09@param\x09LaunchDetached\x09\x09\x09If true, the process will have its own window.\n\x09\x09@param\x09LaunchedHidden\x09\x09\x09If true, the new process will be minimized in the task bar\n\x09\x09@param\x09LaunchReallyHidden\x09\x09If true, the new process will not have a window or be in the task bar\n\x09\x09@param\x09PriorityModifier\x09\x09""2 idle, -1 low, 0 normal, 1 high, 2 higher\n\x09\x09@param\x09UseWorkingDirectory\x09\x09If true, will use WorkingDirectory to start the executable in instead of its current directory.\n\x09\x09@param\x09WorkingDirectory\x09\x09""Directory to start the executable in (required UseWorkingDirectory = true).\n\x09*/" },
		{ "DisplayName", "CreateProcessWithCallback" },
		{ "Keywords", "process create execute" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "Same as CreateProcess but has an output pin that executes when the process has ended.\n      Use with caution, this might cause performance issues as we are checking whether the process\n      is running every tick.\n\n              @param  PathToExecutable                The path to the executable to run.\n              @param  Arguments                               Any command line argument to run when executing.\n              @param  LaunchDetached                  If true, the process will have its own window.\n              @param  LaunchedHidden                  If true, the new process will be minimized in the task bar\n              @param  LaunchReallyHidden              If true, the new process will not have a window or be in the task bar\n              @param  PriorityModifier                2 idle, -1 low, 0 normal, 1 high, 2 higher\n              @param  UseWorkingDirectory             If true, will use WorkingDirectory to start the executable in instead of its current directory.\n              @param  WorkingDirectory                Directory to start the executable in (required UseWorkingDirectory = true)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateProcessWithCallback, nullptr, "CreateProcessWithCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::CreateProcessWithCallback_eventCreateProcessWithCallback_Parms), Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateProcessWithCallback);
	UClass* Z_Construct_UClass_UCreateProcessWithCallback_NoRegister()
	{
		return UCreateProcessWithCallback::StaticClass();
	}
	struct Z_Construct_UClass_UCreateProcessWithCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateProcessWithCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FileSystemLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreateProcessWithCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateProcessWithCallback_bIsProcessRunning, "bIsProcessRunning" }, // 2743728156
		{ &Z_Construct_UFunction_UCreateProcessWithCallback_CreateProcessWithCallback, "CreateProcessWithCallback" }, // 2948881258
		{ &Z_Construct_UDelegateFunction_UCreateProcessWithCallback_OnCompleted__DelegateSignature, "OnCompleted__DelegateSignature" }, // 4219920568
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateProcessWithCallback_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/***** AsynAction to launch a process and trigger a callback when it finishes. *****/" },
		{ "IncludePath", "FileSystemLibraryBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
		{ "ToolTip", "** AsynAction to launch a process and trigger a callback when it finishes. ****" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateProcessWithCallback_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Public/FileSystemLibraryBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateProcessWithCallback_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCreateProcessWithCallback, Completed), Z_Construct_UDelegateFunction_UCreateProcessWithCallback_OnCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateProcessWithCallback_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateProcessWithCallback_Statics::NewProp_Completed_MetaData)) }; // 4219920568
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateProcessWithCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateProcessWithCallback_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateProcessWithCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateProcessWithCallback>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateProcessWithCallback_Statics::ClassParams = {
		&UCreateProcessWithCallback::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreateProcessWithCallback_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateProcessWithCallback_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateProcessWithCallback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateProcessWithCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateProcessWithCallback()
	{
		if (!Z_Registration_Info_UClass_UCreateProcessWithCallback.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateProcessWithCallback.OuterSingleton, Z_Construct_UClass_UCreateProcessWithCallback_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateProcessWithCallback.OuterSingleton;
	}
	template<> FILESYSTEMLIBRARY_API UClass* StaticClass<UCreateProcessWithCallback>()
	{
		return UCreateProcessWithCallback::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateProcessWithCallback);
	UCreateProcessWithCallback::~UCreateProcessWithCallback() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FPathProperties::StaticStruct, Z_Construct_UScriptStruct_FPathProperties_Statics::NewStructOps, TEXT("PathProperties"), &Z_Registration_Info_UScriptStruct_PathProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathProperties), 3621635508U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileSystemLibraryBPLibrary, UFileSystemLibraryBPLibrary::StaticClass, TEXT("UFileSystemLibraryBPLibrary"), &Z_Registration_Info_UClass_UFileSystemLibraryBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileSystemLibraryBPLibrary), 4021965733U) },
		{ Z_Construct_UClass_UCreateProcessWithCallback, UCreateProcessWithCallback::StaticClass, TEXT("UCreateProcessWithCallback"), &Z_Registration_Info_UClass_UCreateProcessWithCallback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateProcessWithCallback), 1248752818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_1514693325(TEXT("/Script/FileSystemLibrary"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSystemLibrary_Source_FileSystemLibrary_Public_FileSystemLibraryBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
