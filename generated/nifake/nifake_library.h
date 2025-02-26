//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-FAKE
//---------------------------------------------------------------------
#ifndef NIFAKE_GRPC_LIBRARY_H
#define NIFAKE_GRPC_LIBRARY_H

#include "nifake_library_interface.h"

#include <server/shared_library.h>

namespace nifake_grpc {

class NiFakeLibrary : public nifake_grpc::NiFakeLibraryInterface {
 public:
  NiFakeLibrary();
  virtual ~NiFakeLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus Abort(ViSession vi);
  ViStatus AcceptListOfDurationsInSeconds(ViSession vi, ViInt32 count, ViReal64 delays[]);
  ViStatus AcceptViSessionArray(ViUInt32 sessionCount, ViSession sessionArray[]);
  ViStatus AcceptViUInt32Array(ViSession vi, ViInt32 arrayLen, ViUInt32 uInt32Array[]);
  ViStatus BoolArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[]);
  ViStatus BoolArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[]);
  ViStatus Close(ViSession vi);
  ViStatus CloseExtCal(ViSession vi, ViInt32 action);
  ViStatus CommandWithReservedParam(ViSession vi, ViBoolean* reserved);
  ViStatus ConfigureAbc(ViSession vi);
  ViStatus Control4022(ViString resourceName, ViInt32 configuration);
  ViStatus CreateConfigurationList(ViInt32 numberOfListAttributes, ViAttr listAttributeIds[]);
  ViStatus CustomNestedStructRoundtrip(CustomStructNestedTypedef_struct nestedCustomTypeIn, CustomStructNestedTypedef_struct* nestedCustomTypeOut);
  ViStatus DoubleAllTheNums(ViSession vi, ViInt32 numberCount, ViReal64 numbers[]);
  ViStatus EnumArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViInt16 anArray[]);
  ViStatus EnumInputFunctionWithDefaults(ViSession vi, ViInt16 aTurtle);
  ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  ViStatus FetchWaveform(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveformData[], ViInt32* actualNumberOfSamples);
  ViStatus GetABoolean(ViSession vi, ViBoolean* aBoolean);
  ViStatus GetANumber(ViSession vi, ViInt16* aNumber);
  ViStatus GetAStringOfFixedMaximumSize(ViSession vi, ViChar aString[256]);
  ViStatus GetAnIviDanceString(ViSession vi, ViInt32 bufferSize, ViChar aString[]);
  ViStatus GetAnIviDanceWithATwistArray(ViSession vi, ViConstString aString, ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize);
  ViStatus GetAnIviDanceWithATwistArrayOfCustomType(ViSession vi, ViInt32 bufferSize, CustomStruct arrayOut[], ViInt32* actualSize);
  ViStatus GetAnIviDanceWithATwistArrayWithInputArray(ViInt32 dataIn[], ViInt32 arraySizeIn, ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize);
  ViStatus GetAnIviDanceWithATwistByteArray(ViInt32 bufferSize, ViInt8 arrayOut[], ViInt32* actualSize);
  ViStatus GetAnIviDanceWithATwistString(ViSession vi, ViInt32 bufferSize, ViChar aString[], ViInt32* actualSize);
  ViStatus GetAnIviDanceWithATwistStringStrlenBug(ViInt32 bufferSize, ViChar stringOut[], ViInt32* actualSize);
  ViStatus GetArraySizeForCustomCode(ViSession vi, ViInt32* sizeOut);
  ViStatus GetArrayUsingIviDance(ViSession vi, ViInt32 arraySize, ViReal64 arrayOut[]);
  ViStatus GetArrayViUInt8WithEnum(ViSession vi, ViInt32 arrayLen, ViUInt8 uInt8EnumArray[]);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue);
  ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue);
  ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue);
  ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]);
  ViStatus GetBitfieldAsEnumArray(ViInt64* flags);
  ViStatus GetCalDateAndTime(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute);
  ViStatus GetCalInterval(ViSession vi, ViInt32* months);
  ViStatus GetCustomType(ViSession vi, CustomStruct* cs);
  ViStatus GetCustomTypeArray(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[]);
  ViStatus GetEnumValue(ViSession vi, ViInt32* aQuantity, ViInt16* aTurtle);
  ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  ViStatus GetViInt32Array(ViSession vi, ViInt32 arrayLen, ViInt32 int32Array[]);
  ViStatus GetViUInt32Array(ViSession vi, ViInt32 arrayLen, ViUInt32 uInt32Array[]);
  ViStatus GetViUInt8(ViSession vi, ViUInt8* aUint8Number);
  ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  ViStatus InitExtCal(ViRsrc resourceName, ViString calibrationPassword, ViSession* vi);
  ViStatus InitWithOptions(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  ViStatus InitWithVarArgs(ViRsrc resourceName, ViSession* vi, ViConstString stringArg, ViInt16 turtle, ViConstString stringArg0, ViInt16 turtle0, ViConstString stringArg1, ViInt16 turtle1, ViConstString stringArg2, ViInt16 turtle2);
  ViStatus Initiate(ViSession vi);
  ViStatus MethodUsingEnumWithGrpcNameValues(ViInt32 usingEnum);
  ViStatus MethodUsingWholeAndFractionalNumbers(ViInt32* wholeNumber, ViReal64* fractionalNumber);
  ViStatus MethodUsingWholeMappedNumbers(ViReal64* wholeNumber);
  ViStatus MethodWithGetLastErrorParam();
  ViStatus MethodWithGrpcFieldNumber(ViInt32 attributeValue);
  ViStatus MethodWithGrpcOnlyParam(ViInt32 simpleParam, ViInt32* grpcOnlyParam);
  ViStatus MethodWithProtoOnlyParameter();
  ViStatus MultipleArrayTypes(ViSession vi, ViInt32 outputArraySize, ViReal64 outputArray[], ViReal64 outputArrayOfFixedLength[3], ViInt32 inputArraySizes, ViReal64 inputArrayOfFloats[], ViInt16 inputArrayOfIntegers[]);
  ViStatus MultipleArraysSameSize(ViSession vi, ViReal64 values1[], ViReal64 values2[], ViReal64 values3[], ViReal64 values4[], ViInt32 size);
  ViStatus MultipleArraysSameSizeWithOptional(ViSession vi, ViReal64 values1[], ViReal64 values2[], ViReal64 values3[], ViReal64 values4[], CustomStruct values5[], ViInt32 size);
  ViStatus OneInputFunction(ViSession vi, ViInt32 aNumber);
  ViStatus ParametersAreMultipleTypes(ViSession vi, ViBoolean aBoolean, ViInt32 anInt32, ViInt64 anInt64, ViInt16 anIntEnum, ViReal64 aFloat, ViReal64 aFloatEnum, ViConstString aString);
  ViStatus PoorlyNamedSimpleFunction(ViSession vi);
  ViStatus Read(ViSession vi, ViReal64 maximumTime, ViReal64* reading);
  ViStatus ReadDataWithInOutIviTwist(ViInt32 data[], ViInt32* bufferSize);
  ViStatus ReadDataWithMultipleIviTwistParamSets(ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize, ViInt32 otherBufferSize, ViInt32 otherArrayOut[], ViInt32* otherActualSize);
  ViStatus ReadFromChannel(ViSession vi, ViConstString channelName, ViInt32 maximumTime, ViReal64* reading);
  ViStatus ReturnANumberAndAString(ViSession vi, ViInt16* aNumber, ViChar aString[256]);
  ViStatus ReturnDurationInSeconds(ViSession vi, ViReal64* timedelta);
  ViStatus ReturnListOfDurationsInSeconds(ViSession vi, ViInt32 numberOfElements, ViReal64 timedeltas[]);
  ViStatus ReturnMultipleTypes(ViSession vi, ViBoolean* aBoolean, ViInt32* anInt32, ViInt64* anInt64, ViInt16* anIntEnum, ViReal64* aFloat, ViReal64* aFloatEnum, ViInt32 arraySize, ViReal64 anArray[], ViInt32 stringSize, ViChar aString[]);
  ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue);
  ViStatus SetCustomType(ViSession vi, CustomStruct cs);
  ViStatus SetCustomTypeArray(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[]);
  ViStatus StringValuedEnumInputFunctionWithDefaults(ViSession vi, ViConstString aMobileOSName);
  ViStatus TwoInputFunction(ViSession vi, ViReal64 aNumber, ViString aString);
  ViStatus Use64BitNumber(ViSession vi, ViInt64 input, ViInt64* output);
  ViStatus UseATwoDimensionParameter(ViSession vi, ViInt32 array[], ViInt32 arrayLengths[], ViInt32 arraySize);
  ViStatus ViInt16ArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViInt16 anArray[]);
  ViStatus ViUInt8ArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViUInt8 anArray[]);
  ViStatus ViUInt8ArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViUInt8 anArray[]);
  ViStatus WriteWaveform(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveform[]);

 private:
  using AbortPtr = decltype(&niFake_Abort);
  using AcceptListOfDurationsInSecondsPtr = decltype(&niFake_AcceptListOfDurationsInSeconds);
  using AcceptViSessionArrayPtr = decltype(&niFake_AcceptViSessionArray);
  using AcceptViUInt32ArrayPtr = decltype(&niFake_AcceptViUInt32Array);
  using BoolArrayInputFunctionPtr = decltype(&niFake_BoolArrayInputFunction);
  using BoolArrayOutputFunctionPtr = decltype(&niFake_BoolArrayOutputFunction);
  using ClosePtr = decltype(&niFake_close);
  using CloseExtCalPtr = decltype(&niFake_CloseExtCal);
  using CommandWithReservedParamPtr = decltype(&niFake_CommandWithReservedParam);
  using ConfigureAbcPtr = decltype(&niFake_ConfigureABC);
  using Control4022Ptr = decltype(&niFake_4022Control);
  using CreateConfigurationListPtr = decltype(&niFake_CreateConfigurationList);
  using CustomNestedStructRoundtripPtr = decltype(&niFake_CustomNestedStructRoundtrip);
  using DoubleAllTheNumsPtr = decltype(&niFake_DoubleAllTheNums);
  using EnumArrayOutputFunctionPtr = decltype(&niFake_EnumArrayOutputFunction);
  using EnumInputFunctionWithDefaultsPtr = decltype(&niFake_EnumInputFunctionWithDefaults);
  using ErrorMessagePtr = decltype(&niFake_error_message);
  using ExportAttributeConfigurationBufferPtr = decltype(&niFake_ExportAttributeConfigurationBuffer);
  using FetchWaveformPtr = decltype(&niFake_FetchWaveform);
  using GetABooleanPtr = decltype(&niFake_GetABoolean);
  using GetANumberPtr = decltype(&niFake_GetANumber);
  using GetAStringOfFixedMaximumSizePtr = decltype(&niFake_GetAStringOfFixedMaximumSize);
  using GetAnIviDanceStringPtr = decltype(&niFake_GetAnIviDanceString);
  using GetAnIviDanceWithATwistArrayPtr = decltype(&niFake_GetAnIviDanceWithATwistArray);
  using GetAnIviDanceWithATwistArrayOfCustomTypePtr = decltype(&niFake_GetAnIviDanceWithATwistArrayOfCustomType);
  using GetAnIviDanceWithATwistArrayWithInputArrayPtr = decltype(&niFake_GetAnIviDanceWithATwistArrayWithInputArray);
  using GetAnIviDanceWithATwistByteArrayPtr = decltype(&niFake_GetAnIviDanceWithATwistByteArray);
  using GetAnIviDanceWithATwistStringPtr = decltype(&niFake_GetAnIviDanceWithATwistString);
  using GetAnIviDanceWithATwistStringStrlenBugPtr = decltype(&niFake_GetAnIviDanceWithATwistStringStrlenBug);
  using GetArraySizeForCustomCodePtr = decltype(&niFake_GetArraySizeForCustomCode);
  using GetArrayUsingIviDancePtr = decltype(&niFake_GetArrayUsingIviDance);
  using GetArrayViUInt8WithEnumPtr = decltype(&niFake_GetArrayViUInt8WithEnum);
  using GetAttributeViBooleanPtr = decltype(&niFake_GetAttributeViBoolean);
  using GetAttributeViInt32Ptr = decltype(&niFake_GetAttributeViInt32);
  using GetAttributeViInt64Ptr = decltype(&niFake_GetAttributeViInt64);
  using GetAttributeViReal64Ptr = decltype(&niFake_GetAttributeViReal64);
  using GetAttributeViSessionPtr = decltype(&niFake_GetAttributeViSession);
  using GetAttributeViStringPtr = decltype(&niFake_GetAttributeViString);
  using GetBitfieldAsEnumArrayPtr = decltype(&niFake_GetBitfieldAsEnumArray);
  using GetCalDateAndTimePtr = decltype(&niFake_GetCalDateAndTime);
  using GetCalIntervalPtr = decltype(&niFake_GetCalInterval);
  using GetCustomTypePtr = decltype(&niFake_GetCustomType);
  using GetCustomTypeArrayPtr = decltype(&niFake_GetCustomTypeArray);
  using GetEnumValuePtr = decltype(&niFake_GetEnumValue);
  using GetErrorPtr = decltype(&niFake_GetError);
  using GetViInt32ArrayPtr = decltype(&niFake_GetViInt32Array);
  using GetViUInt32ArrayPtr = decltype(&niFake_GetViUInt32Array);
  using GetViUInt8Ptr = decltype(&niFake_GetViUInt8);
  using ImportAttributeConfigurationBufferPtr = decltype(&niFake_ImportAttributeConfigurationBuffer);
  using InitExtCalPtr = decltype(&niFake_InitExtCal);
  using InitWithOptionsPtr = decltype(&niFake_InitWithOptions);
  using InitWithVarArgsPtr = decltype(&niFake_InitWithVarArgs);
  using InitiatePtr = ViStatus (*)(ViSession vi);
  using MethodUsingEnumWithGrpcNameValuesPtr = decltype(&niFake_MethodUsingEnumWithGrpcNameValues);
  using MethodUsingWholeAndFractionalNumbersPtr = decltype(&niFake_MethodUsingWholeAndFractionalNumbers);
  using MethodUsingWholeMappedNumbersPtr = decltype(&niFake_MethodUsingWholeMappedNumbers);
  using MethodWithGetLastErrorParamPtr = decltype(&niFake_MethodWithGetLastErrorParam);
  using MethodWithGrpcFieldNumberPtr = decltype(&niFake_MethodWithGrpcFieldNumber);
  using MethodWithGrpcOnlyParamPtr = decltype(&niFake_MethodWithGrpcOnlyParam);
  using MethodWithProtoOnlyParameterPtr = decltype(&niFake_MethodWithProtoOnlyParameter);
  using MultipleArrayTypesPtr = decltype(&niFake_MultipleArrayTypes);
  using MultipleArraysSameSizePtr = decltype(&niFake_MultipleArraysSameSize);
  using MultipleArraysSameSizeWithOptionalPtr = decltype(&niFake_MultipleArraysSameSizeWithOptional);
  using OneInputFunctionPtr = decltype(&niFake_OneInputFunction);
  using ParametersAreMultipleTypesPtr = decltype(&niFake_ParametersAreMultipleTypes);
  using PoorlyNamedSimpleFunctionPtr = decltype(&niFake_PoorlyNamedSimpleFunction);
  using ReadPtr = decltype(&niFake_Read);
  using ReadDataWithInOutIviTwistPtr = decltype(&niFake_ReadDataWithInOutIviTwist);
  using ReadDataWithMultipleIviTwistParamSetsPtr = decltype(&niFake_ReadDataWithMultipleIviTwistParamSets);
  using ReadFromChannelPtr = decltype(&niFake_ReadFromChannel);
  using ReturnANumberAndAStringPtr = decltype(&niFake_ReturnANumberAndAString);
  using ReturnDurationInSecondsPtr = decltype(&niFake_ReturnDurationInSeconds);
  using ReturnListOfDurationsInSecondsPtr = decltype(&niFake_ReturnListOfDurationsInSeconds);
  using ReturnMultipleTypesPtr = decltype(&niFake_ReturnMultipleTypes);
  using SelfTestPtr = ViStatus (*)(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  using SetAttributeViBooleanPtr = decltype(&niFake_SetAttributeViBoolean);
  using SetAttributeViInt32Ptr = decltype(&niFake_SetAttributeViInt32);
  using SetAttributeViInt64Ptr = decltype(&niFake_SetAttributeViInt64);
  using SetAttributeViReal64Ptr = decltype(&niFake_SetAttributeViReal64);
  using SetAttributeViStringPtr = decltype(&niFake_SetAttributeViString);
  using SetCustomTypePtr = decltype(&niFake_SetCustomType);
  using SetCustomTypeArrayPtr = decltype(&niFake_SetCustomTypeArray);
  using StringValuedEnumInputFunctionWithDefaultsPtr = decltype(&niFake_StringValuedEnumInputFunctionWithDefaults);
  using TwoInputFunctionPtr = decltype(&niFake_TwoInputFunction);
  using Use64BitNumberPtr = decltype(&niFake_Use64BitNumber);
  using UseATwoDimensionParameterPtr = decltype(&niFake_UseATwoDimensionParameter);
  using ViInt16ArrayInputFunctionPtr = decltype(&niFake_ViInt16ArrayInputFunction);
  using ViUInt8ArrayInputFunctionPtr = decltype(&niFake_ViUInt8ArrayInputFunction);
  using ViUInt8ArrayOutputFunctionPtr = decltype(&niFake_ViUInt8ArrayOutputFunction);
  using WriteWaveformPtr = decltype(&niFake_WriteWaveform);

  typedef struct FunctionPointers {
    AbortPtr Abort;
    AcceptListOfDurationsInSecondsPtr AcceptListOfDurationsInSeconds;
    AcceptViSessionArrayPtr AcceptViSessionArray;
    AcceptViUInt32ArrayPtr AcceptViUInt32Array;
    BoolArrayInputFunctionPtr BoolArrayInputFunction;
    BoolArrayOutputFunctionPtr BoolArrayOutputFunction;
    ClosePtr Close;
    CloseExtCalPtr CloseExtCal;
    CommandWithReservedParamPtr CommandWithReservedParam;
    ConfigureAbcPtr ConfigureAbc;
    Control4022Ptr Control4022;
    CreateConfigurationListPtr CreateConfigurationList;
    CustomNestedStructRoundtripPtr CustomNestedStructRoundtrip;
    DoubleAllTheNumsPtr DoubleAllTheNums;
    EnumArrayOutputFunctionPtr EnumArrayOutputFunction;
    EnumInputFunctionWithDefaultsPtr EnumInputFunctionWithDefaults;
    ErrorMessagePtr ErrorMessage;
    ExportAttributeConfigurationBufferPtr ExportAttributeConfigurationBuffer;
    FetchWaveformPtr FetchWaveform;
    GetABooleanPtr GetABoolean;
    GetANumberPtr GetANumber;
    GetAStringOfFixedMaximumSizePtr GetAStringOfFixedMaximumSize;
    GetAnIviDanceStringPtr GetAnIviDanceString;
    GetAnIviDanceWithATwistArrayPtr GetAnIviDanceWithATwistArray;
    GetAnIviDanceWithATwistArrayOfCustomTypePtr GetAnIviDanceWithATwistArrayOfCustomType;
    GetAnIviDanceWithATwistArrayWithInputArrayPtr GetAnIviDanceWithATwistArrayWithInputArray;
    GetAnIviDanceWithATwistByteArrayPtr GetAnIviDanceWithATwistByteArray;
    GetAnIviDanceWithATwistStringPtr GetAnIviDanceWithATwistString;
    GetAnIviDanceWithATwistStringStrlenBugPtr GetAnIviDanceWithATwistStringStrlenBug;
    GetArraySizeForCustomCodePtr GetArraySizeForCustomCode;
    GetArrayUsingIviDancePtr GetArrayUsingIviDance;
    GetArrayViUInt8WithEnumPtr GetArrayViUInt8WithEnum;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViInt64Ptr GetAttributeViInt64;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViSessionPtr GetAttributeViSession;
    GetAttributeViStringPtr GetAttributeViString;
    GetBitfieldAsEnumArrayPtr GetBitfieldAsEnumArray;
    GetCalDateAndTimePtr GetCalDateAndTime;
    GetCalIntervalPtr GetCalInterval;
    GetCustomTypePtr GetCustomType;
    GetCustomTypeArrayPtr GetCustomTypeArray;
    GetEnumValuePtr GetEnumValue;
    GetErrorPtr GetError;
    GetViInt32ArrayPtr GetViInt32Array;
    GetViUInt32ArrayPtr GetViUInt32Array;
    GetViUInt8Ptr GetViUInt8;
    ImportAttributeConfigurationBufferPtr ImportAttributeConfigurationBuffer;
    InitExtCalPtr InitExtCal;
    InitWithOptionsPtr InitWithOptions;
    InitWithVarArgsPtr InitWithVarArgs;
    InitiatePtr Initiate;
    MethodUsingEnumWithGrpcNameValuesPtr MethodUsingEnumWithGrpcNameValues;
    MethodUsingWholeAndFractionalNumbersPtr MethodUsingWholeAndFractionalNumbers;
    MethodUsingWholeMappedNumbersPtr MethodUsingWholeMappedNumbers;
    MethodWithGetLastErrorParamPtr MethodWithGetLastErrorParam;
    MethodWithGrpcFieldNumberPtr MethodWithGrpcFieldNumber;
    MethodWithGrpcOnlyParamPtr MethodWithGrpcOnlyParam;
    MethodWithProtoOnlyParameterPtr MethodWithProtoOnlyParameter;
    MultipleArrayTypesPtr MultipleArrayTypes;
    MultipleArraysSameSizePtr MultipleArraysSameSize;
    MultipleArraysSameSizeWithOptionalPtr MultipleArraysSameSizeWithOptional;
    OneInputFunctionPtr OneInputFunction;
    ParametersAreMultipleTypesPtr ParametersAreMultipleTypes;
    PoorlyNamedSimpleFunctionPtr PoorlyNamedSimpleFunction;
    ReadPtr Read;
    ReadDataWithInOutIviTwistPtr ReadDataWithInOutIviTwist;
    ReadDataWithMultipleIviTwistParamSetsPtr ReadDataWithMultipleIviTwistParamSets;
    ReadFromChannelPtr ReadFromChannel;
    ReturnANumberAndAStringPtr ReturnANumberAndAString;
    ReturnDurationInSecondsPtr ReturnDurationInSeconds;
    ReturnListOfDurationsInSecondsPtr ReturnListOfDurationsInSeconds;
    ReturnMultipleTypesPtr ReturnMultipleTypes;
    SelfTestPtr SelfTest;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViInt64Ptr SetAttributeViInt64;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViStringPtr SetAttributeViString;
    SetCustomTypePtr SetCustomType;
    SetCustomTypeArrayPtr SetCustomTypeArray;
    StringValuedEnumInputFunctionWithDefaultsPtr StringValuedEnumInputFunctionWithDefaults;
    TwoInputFunctionPtr TwoInputFunction;
    Use64BitNumberPtr Use64BitNumber;
    UseATwoDimensionParameterPtr UseATwoDimensionParameter;
    ViInt16ArrayInputFunctionPtr ViInt16ArrayInputFunction;
    ViUInt8ArrayInputFunctionPtr ViUInt8ArrayInputFunction;
    ViUInt8ArrayOutputFunctionPtr ViUInt8ArrayOutputFunction;
    WriteWaveformPtr WriteWaveform;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nifake_grpc

#endif  // NIFAKE_GRPC_LIBRARY_H
