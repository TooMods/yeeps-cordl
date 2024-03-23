#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Protocol16)
namespace ExitGames::Client::Photon {
class DisconnectMessage;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
class OperationRequest;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace ExitGames::Client::Photon {
struct __IProtocol__DeserializationFlags;
}
namespace ExitGames::Client::Photon {
struct __Protocol16__GpType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
struct __Protocol16__GpType;
}
namespace ExitGames::Client::Photon {
class Protocol16;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::__Protocol16__GpType);
MARK_REF_PTR_T(::ExitGames::Client::Photon::Protocol16);
// Type: ::GpType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::Protocol16::GpType
struct CORDL_TYPE __Protocol16__GpType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____Protocol16__GpType_Unwrapped
  enum struct ____Protocol16__GpType_Unwrapped : uint8_t {
    __E_Unknown = static_cast<uint8_t>(0x0u),
    __E_Array = static_cast<uint8_t>(0x79u),
    __E_Boolean = static_cast<uint8_t>(0x6fu),
    __E_Byte = static_cast<uint8_t>(0x62u),
    __E_ByteArray = static_cast<uint8_t>(0x78u),
    __E_ObjectArray = static_cast<uint8_t>(0x7au),
    __E_Short = static_cast<uint8_t>(0x6bu),
    __E_Float = static_cast<uint8_t>(0x66u),
    __E_Dictionary = static_cast<uint8_t>(0x44u),
    __E_Double = static_cast<uint8_t>(0x64u),
    __E_Hashtable = static_cast<uint8_t>(0x68u),
    __E_Integer = static_cast<uint8_t>(0x69u),
    __E_IntegerArray = static_cast<uint8_t>(0x6eu),
    __E_Long = static_cast<uint8_t>(0x6cu),
    __E_String = static_cast<uint8_t>(0x73u),
    __E_StringArray = static_cast<uint8_t>(0x61u),
    __E_Custom = static_cast<uint8_t>(0x63u),
    __E_Null = static_cast<uint8_t>(0x2au),
    __E_EventData = static_cast<uint8_t>(0x65u),
    __E_OperationRequest = static_cast<uint8_t>(0x71u),
    __E_OperationResponse = static_cast<uint8_t>(0x70u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Protocol16__GpType_Unwrapped() const noexcept {
    return static_cast<____Protocol16__GpType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Protocol16__GpType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __Protocol16__GpType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Array value: static_cast<uint8_t>(0x79u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Array;

  /// @brief Field Boolean value: static_cast<uint8_t>(0x6fu)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Boolean;

  /// @brief Field Byte value: static_cast<uint8_t>(0x62u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Byte;

  /// @brief Field ByteArray value: static_cast<uint8_t>(0x78u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const ByteArray;

  /// @brief Field Custom value: static_cast<uint8_t>(0x63u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Custom;

  /// @brief Field Dictionary value: static_cast<uint8_t>(0x44u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Dictionary;

  /// @brief Field Double value: static_cast<uint8_t>(0x64u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Double;

  /// @brief Field EventData value: static_cast<uint8_t>(0x65u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const EventData;

  /// @brief Field Float value: static_cast<uint8_t>(0x66u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Float;

  /// @brief Field Hashtable value: static_cast<uint8_t>(0x68u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Hashtable;

  /// @brief Field Integer value: static_cast<uint8_t>(0x69u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Integer;

  /// @brief Field IntegerArray value: static_cast<uint8_t>(0x6eu)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const IntegerArray;

  /// @brief Field Long value: static_cast<uint8_t>(0x6cu)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Long;

  /// @brief Field Null value: static_cast<uint8_t>(0x2au)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Null;

  /// @brief Field ObjectArray value: static_cast<uint8_t>(0x7au)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const ObjectArray;

  /// @brief Field OperationRequest value: static_cast<uint8_t>(0x71u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const OperationRequest;

  /// @brief Field OperationResponse value: static_cast<uint8_t>(0x70u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const OperationResponse;

  /// @brief Field Short value: static_cast<uint8_t>(0x6bu)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Short;

  /// @brief Field String value: static_cast<uint8_t>(0x73u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const String;

  /// @brief Field StringArray value: static_cast<uint8_t>(0x61u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const StringArray;

  /// @brief Field Unknown value: static_cast<uint8_t>(0x0u)
  static ::ExitGames::Client::Photon::__Protocol16__GpType const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::__Protocol16__GpType, 0x1>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__Protocol16__GpType, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
// Type: ExitGames.Client.Photon::Protocol16
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::Protocol16*
class CORDL_TYPE Protocol16 : public ::ExitGames::Client::Photon::IProtocol {
public:
  // Declarations
  using GpType = ::ExitGames::Client::Photon::__Protocol16__GpType;

  __declspec(property(get = get_ProtocolType))::StringW ProtocolType;

  __declspec(property(get = get_VersionBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> VersionBytes;

  /// @brief Field memDouble, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_memDouble, put = __cordl_internal_set_memDouble))::ArrayW<uint8_t, ::Array<uint8_t>*> memDouble;

  /// @brief Field memDoubleBlock, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_memDoubleBlock, put = __cordl_internal_set_memDoubleBlock))::ArrayW<double_t, ::Array<double_t>*> memDoubleBlock;

  /// @brief Field memDoubleBlockBytes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_memDoubleBlockBytes, put = __cordl_internal_set_memDoubleBlockBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> memDoubleBlockBytes;

  /// @brief Field memFloat, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_memFloat, put = __cordl_internal_set_memFloat))::ArrayW<uint8_t, ::Array<uint8_t>*> memFloat;

  /// @brief Field memFloatBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_memFloatBlock, put = setStaticF_memFloatBlock))::ArrayW<float_t, ::Array<float_t>*> memFloatBlock;

  /// @brief Field memFloatBlockBytes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_memFloatBlockBytes, put = setStaticF_memFloatBlockBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> memFloatBlockBytes;

  /// @brief Field memInteger, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_memInteger, put = __cordl_internal_set_memInteger))::ArrayW<uint8_t, ::Array<uint8_t>*> memInteger;

  /// @brief Field memLong, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_memLong, put = __cordl_internal_set_memLong))::ArrayW<uint8_t, ::Array<uint8_t>*> memLong;

  /// @brief Field memLongBlock, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_memLongBlock, put = __cordl_internal_set_memLongBlock))::ArrayW<int64_t, ::Array<int64_t>*> memLongBlock;

  /// @brief Field memLongBlockBytes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_memLongBlockBytes, put = __cordl_internal_set_memLongBlockBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> memLongBlockBytes;

  /// @brief Field memShort, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_memShort, put = __cordl_internal_set_memShort))::ArrayW<uint8_t, ::Array<uint8_t>*> memShort;

  /// @brief Field versionBytes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_versionBytes, put = __cordl_internal_set_versionBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> versionBytes;

  /// @brief Method CreateArrayByType, addr 0x2863d08, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Array* CreateArrayByType(uint8_t arrayType, int16_t length);

  /// @brief Method Deserialize, addr 0x28674c8, size 0x588, virtual true, abstract: false, final false
  inline ::System::Object* Deserialize(::ExitGames::Client::Photon::StreamBuffer* din, uint8_t type, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeArray, addr 0x2868a04, size 0x588, virtual false, abstract: false, final false
  inline ::System::Array* DeserializeArray(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeBoolean, addr 0x28683dc, size 0x28, virtual false, abstract: false, final false
  inline bool DeserializeBoolean(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeByte, addr 0x28690a4, size 0x18, virtual true, abstract: false, final false
  inline uint8_t DeserializeByte(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeByteArray, addr 0x2867de4, size 0x9c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DeserializeByteArray(::ExitGames::Client::Photon::StreamBuffer* din, int32_t size);

  /// @brief Method DeserializeCustom, addr 0x2863324, size 0x2d8, virtual false, abstract: false, final false
  inline ::System::Object* DeserializeCustom(::ExitGames::Client::Photon::StreamBuffer* din, uint8_t customTypeCode, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeDictionary, addr 0x2868068, size 0x374, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* DeserializeDictionary(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeDictionaryArray, addr 0x28691e0, size 0x24c, virtual false, abstract: false, final false
  inline bool DeserializeDictionaryArray(::ExitGames::Client::Photon::StreamBuffer* din, int16_t size, ByRef<::System::Array*> arrayResult);

  /// @brief Method DeserializeDictionaryType, addr 0x286942c, size 0x264, virtual false, abstract: false, final false
  inline ::System::Type* DeserializeDictionaryType(::ExitGames::Client::Photon::StreamBuffer* reader, ByRef<uint8_t> keyTypeCode, ByRef<uint8_t> valTypeCode);

  /// @brief Method DeserializeDisconnectMessage, addr 0x28644a8, size 0x108, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::DisconnectMessage* DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method DeserializeDouble, addr 0x2868800, size 0x204, virtual false, abstract: false, final false
  inline double_t DeserializeDouble(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeEventData, addr 0x2864864, size 0xb0, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::EventData* DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer* din, ::ExitGames::Client::Photon::EventData* target,
                                                                      ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeFloat, addr 0x286863c, size 0x1c4, virtual false, abstract: false, final false
  inline float_t DeserializeFloat(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeHashTable, addr 0x2867f4c, size 0x11c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::Hashtable* DeserializeHashTable(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeIntArray, addr 0x2867e80, size 0xcc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> DeserializeIntArray(::ExitGames::Client::Photon::StreamBuffer* din, int32_t size);

  /// @brief Method DeserializeInteger, addr 0x2867a50, size 0x160, virtual false, abstract: false, final false
  inline int32_t DeserializeInteger(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeLong, addr 0x2868404, size 0x238, virtual false, abstract: false, final false
  inline int64_t DeserializeLong(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeObjectArray, addr 0x2868f8c, size 0x118, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> DeserializeObjectArray(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeOperationRequest, addr 0x2864240, size 0xa4, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::OperationRequest* DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* din,
                                                                                    ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeOperationResponse, addr 0x28646dc, size 0x128, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::OperationResponse* DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                      ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeParameterDictionary, addr 0x28642e4, size 0x108, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::ParameterDictionary* DeserializeParameterDictionary(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::ParameterDictionary* target,
                                                                                          ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeParameterTable, addr 0x28645b0, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* DeserializeParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                             ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* target);

  /// @brief Method DeserializeShort, addr 0x28690bc, size 0x124, virtual true, abstract: false, final false
  inline int16_t DeserializeShort(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeString, addr 0x2867bb0, size 0x140, virtual false, abstract: false, final false
  inline ::StringW DeserializeString(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeStringArray, addr 0x2867cf0, size 0xf4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> DeserializeStringArray(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method GetCodeOfType, addr 0x28639d0, size 0x338, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::__Protocol16__GpType GetCodeOfType(::System::Type* type);

  /// @brief Method GetTypeOfCode, addr 0x2863664, size 0x36c, virtual false, abstract: false, final false
  inline ::System::Type* GetTypeOfCode(uint8_t typeCode);

  static inline ::ExitGames::Client::Photon::Protocol16* New_ctor();

  /// @brief Method Serialize, addr 0x2864914, size 0x8cc, virtual true, abstract: false, final false
  inline void Serialize(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Object* serObject, bool setType);

  /// @brief Method SerializeArray, addr 0x2866184, size 0x6c0, virtual false, abstract: false, final false
  inline void SerializeArray(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Array* serObject, bool setType);

  /// @brief Method SerializeBoolean, addr 0x286522c, size 0x4c, virtual false, abstract: false, final false
  inline void SerializeBoolean(::ExitGames::Client::Photon::StreamBuffer* dout, bool serObject, bool setType);

  /// @brief Method SerializeByte, addr 0x28651e0, size 0x4c, virtual false, abstract: false, final false
  inline void SerializeByte(::ExitGames::Client::Photon::StreamBuffer* dout, uint8_t serObject, bool setType);

  /// @brief Method SerializeByteArray, addr 0x2865d58, size 0x6c, virtual false, abstract: false, final false
  inline void SerializeByteArray(::ExitGames::Client::Photon::StreamBuffer* dout, ::ArrayW<uint8_t, ::Array<uint8_t>*> serObject, bool setType);

  /// @brief Method SerializeByteArraySegment, addr 0x28668bc, size 0x90, virtual false, abstract: false, final false
  inline void SerializeByteArraySegment(::ExitGames::Client::Photon::StreamBuffer* dout, ::ArrayW<uint8_t, ::Array<uint8_t>*> serObject, int32_t offset, int32_t count, bool setType);

  /// @brief Method SerializeCustom, addr 0x2862c9c, size 0x4e8, virtual false, abstract: false, final false
  inline bool SerializeCustom(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Object* serObject);

  /// @brief Method SerializeDictionary, addr 0x2866844, size 0x78, virtual false, abstract: false, final false
  inline void SerializeDictionary(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Collections::IDictionary* serObject, bool setType);

  /// @brief Method SerializeDictionaryElements, addr 0x2866ec8, size 0x508, virtual false, abstract: false, final false
  inline void SerializeDictionaryElements(::ExitGames::Client::Photon::StreamBuffer* writer, ::System::Object* dict, bool setKeyType, bool setValueType);

  /// @brief Method SerializeDictionaryHeader, addr 0x2866bfc, size 0x2cc, virtual false, abstract: false, final false
  inline void SerializeDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer* writer, ::System::Object* dict, ByRef<bool> setKeyType, ByRef<bool> setValueType);

  /// @brief Method SerializeDictionaryHeader, addr 0x28674a8, size 0x20, virtual false, abstract: false, final false
  inline void SerializeDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer* writer, ::System::Type* dictType);

  /// @brief Method SerializeDouble, addr 0x28658fc, size 0x23c, virtual false, abstract: false, final false
  inline void SerializeDouble(::ExitGames::Client::Photon::StreamBuffer* dout, double_t serObject, bool setType);

  /// @brief Method SerializeEventData, addr 0x2864804, size 0x60, virtual true, abstract: false, final false
  inline void SerializeEventData(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::EventData* serObject, bool setType);

  /// @brief Method SerializeFloat, addr 0x2865610, size 0x2ec, virtual false, abstract: false, final false
  inline void SerializeFloat(::ExitGames::Client::Photon::StreamBuffer* dout, float_t serObject, bool setType);

  /// @brief Method SerializeHashTable, addr 0x2865b38, size 0x220, virtual false, abstract: false, final false
  inline void SerializeHashTable(::ExitGames::Client::Photon::StreamBuffer* dout, ::ExitGames::Client::Photon::Hashtable* serObject, bool setType);

  /// @brief Method SerializeIntArrayOptimized, addr 0x2865fc0, size 0x1c4, virtual false, abstract: false, final false
  inline void SerializeIntArrayOptimized(::ExitGames::Client::Photon::StreamBuffer* inWriter, ::ArrayW<int32_t, ::Array<int32_t>*> serObject, bool setType);

  /// @brief Method SerializeInteger, addr 0x2865278, size 0x164, virtual false, abstract: false, final false
  inline void SerializeInteger(::ExitGames::Client::Photon::StreamBuffer* dout, int32_t serObject, bool setType);

  /// @brief Method SerializeLengthAsShort, addr 0x2863184, size 0x1a0, virtual false, abstract: false, final false
  inline void SerializeLengthAsShort(::ExitGames::Client::Photon::StreamBuffer* dout, int32_t serObject, ::StringW type);

  /// @brief Method SerializeLong, addr 0x28653dc, size 0x234, virtual false, abstract: false, final false
  inline void SerializeLong(::ExitGames::Client::Photon::StreamBuffer* dout, int64_t serObject, bool setType);

  /// @brief Method SerializeObjectArray, addr 0x2865dc4, size 0x1fc, virtual false, abstract: false, final false
  inline void SerializeObjectArray(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Collections::IList* objects, bool setType);

  /// @brief Method SerializeOperationRequest, addr 0x2863d24, size 0x2c, virtual false, abstract: false, final false
  inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationRequest* operation, bool setType);

  /// @brief Method SerializeOperationRequest, addr 0x2863fdc, size 0x6c, virtual true, abstract: false, final false
  inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode, ::ExitGames::Client::Photon::ParameterDictionary* parameters, bool setType);

  /// @brief Method SerializeOperationRequest, addr 0x2863d50, size 0x6c, virtual true, abstract: false, final false
  inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* parameters,
                                        bool setType);

  /// @brief Method SerializeOperationResponse, addr 0x28643ec, size 0xbc, virtual true, abstract: false, final false
  inline void SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationResponse* serObject, bool setType);

  /// @brief Method SerializeParameterTable, addr 0x2864048, size 0x1f8, virtual false, abstract: false, final false
  inline void SerializeParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method SerializeParameterTable, addr 0x2863dbc, size 0x220, virtual false, abstract: false, final false
  inline void SerializeParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* parameters);

  /// @brief Method SerializeShort, addr 0x286694c, size 0x134, virtual true, abstract: false, final false
  inline void SerializeShort(::ExitGames::Client::Photon::StreamBuffer* dout, int16_t serObject, bool setType);

  /// @brief Method SerializeString, addr 0x2866a80, size 0x17c, virtual true, abstract: false, final false
  inline void SerializeString(::ExitGames::Client::Photon::StreamBuffer* stream, ::StringW value, bool setType);

  /// @brief Method SerializeStringArray, addr 0x28673d0, size 0xd8, virtual false, abstract: false, final false
  inline void SerializeStringArray(::ExitGames::Client::Photon::StreamBuffer* dout, ::ArrayW<::StringW, ::Array<::StringW>*> serObject, bool setType);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_memDouble() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_memDouble();

  constexpr ::ArrayW<double_t, ::Array<double_t>*> const& __cordl_internal_get_memDoubleBlock() const;

  constexpr ::ArrayW<double_t, ::Array<double_t>*>& __cordl_internal_get_memDoubleBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_memDoubleBlockBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_memDoubleBlockBytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_memFloat() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_memFloat();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_memInteger() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_memInteger();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_memLong() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_memLong();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get_memLongBlock() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get_memLongBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_memLongBlockBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_memLongBlockBytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_memShort() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_memShort();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_versionBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_versionBytes();

  constexpr void __cordl_internal_set_memDouble(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_memDoubleBlock(::ArrayW<double_t, ::Array<double_t>*> value);

  constexpr void __cordl_internal_set_memDoubleBlockBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_memFloat(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_memInteger(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_memLong(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_memLongBlock(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set_memLongBlockBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_memShort(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_versionBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x286216c, size 0x144, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_memFloatBlock();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_memFloatBlockBytes();

  /// @brief Method get_ProtocolType, addr 0x2862c54, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_ProtocolType();

  /// @brief Method get_VersionBytes, addr 0x2862c94, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_VersionBytes();

  static inline void setStaticF_memFloatBlock(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_memFloatBlockBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Protocol16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Protocol16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Protocol16(Protocol16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Protocol16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Protocol16(Protocol16 const&) = delete;

  /// @brief Field versionBytes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___versionBytes;

  /// @brief Field memShort, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___memShort;

  /// @brief Field memLongBlock, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ___memLongBlock;

  /// @brief Field memLongBlockBytes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___memLongBlockBytes;

  /// @brief Field memDoubleBlock, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<double_t, ::Array<double_t>*> ___memDoubleBlock;

  /// @brief Field memDoubleBlockBytes, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___memDoubleBlockBytes;

  /// @brief Field memInteger, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___memInteger;

  /// @brief Field memLong, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___memLong;

  /// @brief Field memFloat, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___memFloat;

  /// @brief Field memDouble, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___memDouble;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::Protocol16, 0x68>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___versionBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memShort) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memLongBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memLongBlockBytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memDoubleBlock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memDoubleBlockBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memInteger) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memLong) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memFloat) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memDouble) == 0x60, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::__Protocol16__GpType, "ExitGames.Client.Photon", "Protocol16/GpType");
NEED_NO_BOX(::ExitGames::Client::Photon::Protocol16);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Protocol16*, "ExitGames.Client.Photon", "Protocol16");
