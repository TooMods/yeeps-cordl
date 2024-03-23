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
CORDL_MODULE_EXPORT(Protocol18)
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapper;
}
namespace ExitGames::Client::Photon {
class ByteArraySlice;
}
namespace ExitGames::Client::Photon {
class CustomType;
}
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
struct __Protocol18__GpType;
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
template <typename T> struct ArraySegment_1;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
struct __Protocol18__GpType;
}
namespace ExitGames::Client::Photon {
class Protocol18;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::__Protocol18__GpType);
MARK_REF_PTR_T(::ExitGames::Client::Photon::Protocol18);
// Type: ::GpType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::Protocol18::GpType
struct CORDL_TYPE __Protocol18__GpType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____Protocol18__GpType_Unwrapped
  enum struct ____Protocol18__GpType_Unwrapped : uint8_t {
    __E_Unknown = static_cast<uint8_t>(0x0u),
    __E_Boolean = static_cast<uint8_t>(0x2u),
    __E_Byte = static_cast<uint8_t>(0x3u),
    __E_Short = static_cast<uint8_t>(0x4u),
    __E_Float = static_cast<uint8_t>(0x5u),
    __E_Double = static_cast<uint8_t>(0x6u),
    __E_String = static_cast<uint8_t>(0x7u),
    __E_Null = static_cast<uint8_t>(0x8u),
    __E_CompressedInt = static_cast<uint8_t>(0x9u),
    __E_CompressedLong = static_cast<uint8_t>(0xau),
    __E_Int1 = static_cast<uint8_t>(0xbu),
    __E_Int1_ = static_cast<uint8_t>(0xcu),
    __E_Int2 = static_cast<uint8_t>(0xdu),
    __E_Int2_ = static_cast<uint8_t>(0xeu),
    __E_L1 = static_cast<uint8_t>(0xfu),
    __E_L1_ = static_cast<uint8_t>(0x10u),
    __E_L2 = static_cast<uint8_t>(0x11u),
    __E_L2_ = static_cast<uint8_t>(0x12u),
    __E_Custom = static_cast<uint8_t>(0x13u),
    __E_CustomTypeSlim = static_cast<uint8_t>(0x80u),
    __E_Dictionary = static_cast<uint8_t>(0x14u),
    __E_Hashtable = static_cast<uint8_t>(0x15u),
    __E_ObjectArray = static_cast<uint8_t>(0x17u),
    __E_OperationRequest = static_cast<uint8_t>(0x18u),
    __E_OperationResponse = static_cast<uint8_t>(0x19u),
    __E_EventData = static_cast<uint8_t>(0x1au),
    __E_BooleanFalse = static_cast<uint8_t>(0x1bu),
    __E_BooleanTrue = static_cast<uint8_t>(0x1cu),
    __E_ShortZero = static_cast<uint8_t>(0x1du),
    __E_IntZero = static_cast<uint8_t>(0x1eu),
    __E_LongZero = static_cast<uint8_t>(0x1fu),
    __E_FloatZero = static_cast<uint8_t>(0x20u),
    __E_DoubleZero = static_cast<uint8_t>(0x21u),
    __E_ByteZero = static_cast<uint8_t>(0x22u),
    __E_Array = static_cast<uint8_t>(0x40u),
    __E_BooleanArray = static_cast<uint8_t>(0x42u),
    __E_ByteArray = static_cast<uint8_t>(0x43u),
    __E_ShortArray = static_cast<uint8_t>(0x44u),
    __E_DoubleArray = static_cast<uint8_t>(0x46u),
    __E_FloatArray = static_cast<uint8_t>(0x45u),
    __E_StringArray = static_cast<uint8_t>(0x47u),
    __E_HashtableArray = static_cast<uint8_t>(0x55u),
    __E_DictionaryArray = static_cast<uint8_t>(0x54u),
    __E_CustomTypeArray = static_cast<uint8_t>(0x53u),
    __E_CompressedIntArray = static_cast<uint8_t>(0x49u),
    __E_CompressedLongArray = static_cast<uint8_t>(0x4au),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Protocol18__GpType_Unwrapped() const noexcept {
    return static_cast<____Protocol18__GpType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Protocol18__GpType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __Protocol18__GpType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Array value: static_cast<uint8_t>(0x40u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Array;

  /// @brief Field Boolean value: static_cast<uint8_t>(0x2u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Boolean;

  /// @brief Field BooleanArray value: static_cast<uint8_t>(0x42u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const BooleanArray;

  /// @brief Field BooleanFalse value: static_cast<uint8_t>(0x1bu)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const BooleanFalse;

  /// @brief Field BooleanTrue value: static_cast<uint8_t>(0x1cu)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const BooleanTrue;

  /// @brief Field Byte value: static_cast<uint8_t>(0x3u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Byte;

  /// @brief Field ByteArray value: static_cast<uint8_t>(0x43u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const ByteArray;

  /// @brief Field ByteZero value: static_cast<uint8_t>(0x22u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const ByteZero;

  /// @brief Field CompressedInt value: static_cast<uint8_t>(0x9u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const CompressedInt;

  /// @brief Field CompressedIntArray value: static_cast<uint8_t>(0x49u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const CompressedIntArray;

  /// @brief Field CompressedLong value: static_cast<uint8_t>(0xau)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const CompressedLong;

  /// @brief Field CompressedLongArray value: static_cast<uint8_t>(0x4au)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const CompressedLongArray;

  /// @brief Field Custom value: static_cast<uint8_t>(0x13u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Custom;

  /// @brief Field CustomTypeArray value: static_cast<uint8_t>(0x53u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const CustomTypeArray;

  /// @brief Field CustomTypeSlim value: static_cast<uint8_t>(0x80u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const CustomTypeSlim;

  /// @brief Field Dictionary value: static_cast<uint8_t>(0x14u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Dictionary;

  /// @brief Field DictionaryArray value: static_cast<uint8_t>(0x54u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const DictionaryArray;

  /// @brief Field Double value: static_cast<uint8_t>(0x6u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Double;

  /// @brief Field DoubleArray value: static_cast<uint8_t>(0x46u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const DoubleArray;

  /// @brief Field DoubleZero value: static_cast<uint8_t>(0x21u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const DoubleZero;

  /// @brief Field EventData value: static_cast<uint8_t>(0x1au)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const EventData;

  /// @brief Field Float value: static_cast<uint8_t>(0x5u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Float;

  /// @brief Field FloatArray value: static_cast<uint8_t>(0x45u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const FloatArray;

  /// @brief Field FloatZero value: static_cast<uint8_t>(0x20u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const FloatZero;

  /// @brief Field Hashtable value: static_cast<uint8_t>(0x15u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Hashtable;

  /// @brief Field HashtableArray value: static_cast<uint8_t>(0x55u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const HashtableArray;

  /// @brief Field Int1 value: static_cast<uint8_t>(0xbu)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Int1;

  /// @brief Field Int1_ value: static_cast<uint8_t>(0xcu)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Int1_;

  /// @brief Field Int2 value: static_cast<uint8_t>(0xdu)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Int2;

  /// @brief Field Int2_ value: static_cast<uint8_t>(0xeu)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Int2_;

  /// @brief Field IntZero value: static_cast<uint8_t>(0x1eu)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const IntZero;

  /// @brief Field L1 value: static_cast<uint8_t>(0xfu)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const L1;

  /// @brief Field L1_ value: static_cast<uint8_t>(0x10u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const L1_;

  /// @brief Field L2 value: static_cast<uint8_t>(0x11u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const L2;

  /// @brief Field L2_ value: static_cast<uint8_t>(0x12u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const L2_;

  /// @brief Field LongZero value: static_cast<uint8_t>(0x1fu)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const LongZero;

  /// @brief Field Null value: static_cast<uint8_t>(0x8u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Null;

  /// @brief Field ObjectArray value: static_cast<uint8_t>(0x17u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const ObjectArray;

  /// @brief Field OperationRequest value: static_cast<uint8_t>(0x18u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const OperationRequest;

  /// @brief Field OperationResponse value: static_cast<uint8_t>(0x19u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const OperationResponse;

  /// @brief Field Short value: static_cast<uint8_t>(0x4u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Short;

  /// @brief Field ShortArray value: static_cast<uint8_t>(0x44u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const ShortArray;

  /// @brief Field ShortZero value: static_cast<uint8_t>(0x1du)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const ShortZero;

  /// @brief Field String value: static_cast<uint8_t>(0x7u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const String;

  /// @brief Field StringArray value: static_cast<uint8_t>(0x47u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const StringArray;

  /// @brief Field Unknown value: static_cast<uint8_t>(0x0u)
  static ::ExitGames::Client::Photon::__Protocol18__GpType const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::__Protocol18__GpType, 0x1>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__Protocol18__GpType, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
// Type: ExitGames.Client.Photon::Protocol18
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::Protocol18*
class CORDL_TYPE Protocol18 : public ::ExitGames::Client::Photon::IProtocol {
public:
  // Declarations
  using GpType = ::ExitGames::Client::Photon::__Protocol18__GpType;

  __declspec(property(get = get_ProtocolType))::StringW ProtocolType;

  __declspec(property(get = get_VersionBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> VersionBytes;

  /// @brief Field boolMasks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_boolMasks, put = setStaticF_boolMasks))::ArrayW<uint8_t, ::Array<uint8_t>*> boolMasks;

  /// @brief Field memCompressedUInt32, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_memCompressedUInt32, put = __cordl_internal_set_memCompressedUInt32))::ArrayW<uint8_t, ::Array<uint8_t>*> memCompressedUInt32;

  /// @brief Field memCompressedUInt64, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_memCompressedUInt64, put = __cordl_internal_set_memCompressedUInt64))::ArrayW<uint8_t, ::Array<uint8_t>*> memCompressedUInt64;

  /// @brief Field memCustomTypeBodyLengthSerialized, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_memCustomTypeBodyLengthSerialized,
                      put = __cordl_internal_set_memCustomTypeBodyLengthSerialized))::ArrayW<uint8_t, ::Array<uint8_t>*> memCustomTypeBodyLengthSerialized;

  /// @brief Field memDoubleBlock, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_memDoubleBlock, put = __cordl_internal_set_memDoubleBlock))::ArrayW<double_t, ::Array<double_t>*> memDoubleBlock;

  /// @brief Field memFloatBlock, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_memFloatBlock, put = __cordl_internal_set_memFloatBlock))::ArrayW<float_t, ::Array<float_t>*> memFloatBlock;

  /// @brief Field versionBytes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_versionBytes, put = __cordl_internal_set_versionBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> versionBytes;

  /// @brief Method DecodeZigZag32, addr 0x286dfe4, size 0x10, virtual false, abstract: false, final false
  inline int32_t DecodeZigZag32(uint32_t value);

  /// @brief Method DecodeZigZag64, addr 0x286e0d8, size 0x10, virtual false, abstract: false, final false
  inline int64_t DecodeZigZag64(uint64_t value);

  /// @brief Method Deserialize, addr 0x28699b0, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* Deserialize(::ExitGames::Client::Photon::StreamBuffer* din, uint8_t type, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeByte, addr 0x286a4f8, size 0x18, virtual true, abstract: false, final false
  inline uint8_t DeserializeByte(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeDisconnectMessage, addr 0x286d5cc, size 0xec, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::DisconnectMessage* DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method DeserializeEventData, addr 0x286cf10, size 0x1f8, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::EventData* DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer* din, ::ExitGames::Client::Photon::EventData* target,
                                                                      ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeOperationRequest, addr 0x286d430, size 0x9c, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::OperationRequest* DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* din,
                                                                                    ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeOperationResponse, addr 0x286d4cc, size 0x100, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::OperationResponse* DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                      ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeShort, addr 0x286a490, size 0x4, virtual true, abstract: false, final false
  inline int16_t DeserializeShort(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method EncodeZigZag32, addr 0x2872220, size 0xc, virtual false, abstract: false, final false
  inline uint32_t EncodeZigZag32(int32_t value);

  /// @brief Method EncodeZigZag64, addr 0x287222c, size 0xc, virtual false, abstract: false, final false
  inline uint64_t EncodeZigZag64(int64_t value);

  /// @brief Method GetAllowedDictionaryKeyTypes, addr 0x286a528, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Type* GetAllowedDictionaryKeyTypes(::ExitGames::Client::Photon::__Protocol18__GpType gpType);

  /// @brief Method GetClrArrayType, addr 0x286a6e0, size 0x2e0, virtual false, abstract: false, final false
  static inline ::System::Type* GetClrArrayType(::ExitGames::Client::Photon::__Protocol18__GpType gpType);

  /// @brief Method GetCodeOfType, addr 0x286a9c0, size 0x654, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::__Protocol18__GpType GetCodeOfType(::System::Type* type);

  /// @brief Method GetCodeOfTypeCode, addr 0x286b014, size 0x68, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::__Protocol18__GpType GetCodeOfTypeCode(::System::TypeCode type);

  /// @brief Method GetDictArrayType, addr 0x286dba8, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Type* GetDictArrayType(::ExitGames::Client::Photon::StreamBuffer* stream);

  static inline ::ExitGames::Client::Photon::Protocol18* New_ctor();

  /// @brief Method Read, addr 0x286b07c, size 0x54, virtual false, abstract: false, final false
  inline ::System::Object* Read(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method Read, addr 0x28699bc, size 0xad4, virtual false, abstract: false, final false
  inline ::System::Object* Read(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t gpType, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method ReadArrayInArray, addr 0x286c7dc, size 0x154, virtual false, abstract: false, final false
  inline ::System::Array* ReadArrayInArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                           ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method ReadBoolean, addr 0x286b3f4, size 0x28, virtual false, abstract: false, final false
  inline bool ReadBoolean(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadBooleanArray, addr 0x286b9e8, size 0x224, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> ReadBooleanArray(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadByte, addr 0x286a510, size 0x18, virtual false, abstract: false, final false
  inline uint8_t ReadByte(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadByteArray, addr 0x286bc0c, size 0x84, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadByteArray(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadCompressedInt32, addr 0x286b634, size 0x1c, virtual false, abstract: false, final false
  inline int32_t ReadCompressedInt32(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadCompressedInt32Array, addr 0x286c66c, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> ReadCompressedInt32Array(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadCompressedInt64, addr 0x286b650, size 0x1c, virtual false, abstract: false, final false
  inline int64_t ReadCompressedInt64(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadCompressedInt64Array, addr 0x286c724, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<int64_t, ::Array<int64_t>*> ReadCompressedInt64Array(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadCompressedUInt32, addr 0x286cbb0, size 0x360, virtual false, abstract: false, final false
  inline uint32_t ReadCompressedUInt32(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadCompressedUInt64, addr 0x286dff4, size 0xe4, virtual false, abstract: false, final false
  inline uint64_t ReadCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadCustomType, addr 0x286b0d0, size 0x324, virtual false, abstract: false, final false
  inline ::System::Object* ReadCustomType(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t gpType);

  /// @brief Method ReadCustomTypeArray, addr 0x286c23c, size 0x430, virtual false, abstract: false, final false
  inline ::System::Object* ReadCustomTypeArray(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadDictionary, addr 0x286b7f0, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* ReadDictionary(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                            ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method ReadDictionaryArray, addr 0x286c06c, size 0x1d0, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Collections::IDictionary*, ::Array<::System::Collections::IDictionary*>*> ReadDictionaryArray(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                                          ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                                                                                          ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method ReadDictionaryElements, addr 0x286dca0, size 0x174, virtual false, abstract: false, final false
  inline bool ReadDictionaryElements(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__Protocol18__GpType keyReadType,
                                     ::ExitGames::Client::Photon::__Protocol18__GpType valueReadType, ::System::Collections::IDictionary* dictionary,
                                     ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags, ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method ReadDictionaryType, addr 0x286d968, size 0x240, virtual false, abstract: false, final false
  inline ::System::Type* ReadDictionaryType(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadDictionaryType, addr 0x286d6b8, size 0x2b0, virtual false, abstract: false, final false
  inline ::System::Type* ReadDictionaryType(::ExitGames::Client::Photon::StreamBuffer* stream, ByRef<::ExitGames::Client::Photon::__Protocol18__GpType> keyReadType,
                                            ByRef<::ExitGames::Client::Photon::__Protocol18__GpType> valueReadType);

  /// @brief Method ReadDouble, addr 0x286b4a8, size 0x8c, virtual false, abstract: false, final false
  inline double_t ReadDouble(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadDoubleArray, addr 0x286bd3c, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<double_t, ::Array<double_t>*> ReadDoubleArray(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadHashtable, addr 0x286b66c, size 0x184, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::Hashtable* ReadHashtable(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                               ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method ReadHashtableArray, addr 0x286bf70, size 0xfc, virtual false, abstract: false, final false
  inline ::ArrayW<::ExitGames::Client::Photon::Hashtable*, ::Array<::ExitGames::Client::Photon::Hashtable*>*> ReadHashtableArray(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                                                 ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                                                                                                 ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method ReadInt1, addr 0x286b5e4, size 0x30, virtual false, abstract: false, final false
  inline int32_t ReadInt1(::ExitGames::Client::Photon::StreamBuffer* stream, bool signNegative);

  /// @brief Method ReadInt16, addr 0x286a494, size 0x64, virtual false, abstract: false, final false
  inline int16_t ReadInt16(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadInt16Array, addr 0x286bc90, size 0xac, virtual false, abstract: false, final false
  inline ::ArrayW<int16_t, ::Array<int16_t>*> ReadInt16Array(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadInt2, addr 0x286b614, size 0x20, virtual false, abstract: false, final false
  inline int32_t ReadInt2(::ExitGames::Client::Photon::StreamBuffer* stream, bool signNegative);

  /// @brief Method ReadInt32, addr 0x286c994, size 0xa0, virtual false, abstract: false, final false
  inline int32_t ReadInt32(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadInt64, addr 0x286ca34, size 0x110, virtual false, abstract: false, final false
  inline int64_t ReadInt64(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadIntArray, addr 0x286d380, size 0xb0, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> ReadIntArray(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadNonAllocByteArray, addr 0x286cb44, size 0x6c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::ByteArraySlice* ReadNonAllocByteArray(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadObjectArray, addr 0x286b8ec, size 0xfc, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ReadObjectArray(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                  ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                                                  ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method ReadParameterDictionary, addr 0x286d25c, size 0x124, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::ParameterDictionary* ReadParameterDictionary(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::ParameterDictionary* target,
                                                                                   ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method ReadParameterTable, addr 0x286d108, size 0x154, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* ReadParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                      ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* target,
                                                                                                      ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method ReadSingle, addr 0x286b41c, size 0x8c, virtual false, abstract: false, final false
  inline float_t ReadSingle(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadSingleArray, addr 0x286bde4, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> ReadSingleArray(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadString, addr 0x286b534, size 0xb0, virtual false, abstract: false, final false
  inline ::StringW ReadString(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadStringArray, addr 0x286be8c, size 0xe4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> ReadStringArray(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadUShort, addr 0x286c930, size 0x64, virtual false, abstract: false, final false
  inline uint16_t ReadUShort(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method ReadWrapperArray, addr 0x286de14, size 0x1d0, virtual false, abstract: false, final false
  inline ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>*>
  ReadWrapperArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                   ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method Serialize, addr 0x2869774, size 0x8, virtual true, abstract: false, final false
  inline void Serialize(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Object* serObject, bool setType);

  /// @brief Method SerializeEventData, addr 0x28709bc, size 0x60, virtual true, abstract: false, final false
  inline void SerializeEventData(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::EventData* serObject, bool setType);

  /// @brief Method SerializeOperationRequest, addr 0x286ff90, size 0x2c, virtual false, abstract: false, final false
  inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationRequest* operation, bool setType);

  /// @brief Method SerializeOperationRequest, addr 0x2870e48, size 0x6c, virtual true, abstract: false, final false
  inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode, ::ExitGames::Client::Photon::ParameterDictionary* parameters, bool setType);

  /// @brief Method SerializeOperationRequest, addr 0x2870ddc, size 0x6c, virtual true, abstract: false, final false
  inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* parameters,
                                        bool setType);

  /// @brief Method SerializeOperationResponse, addr 0x2870eb4, size 0xbc, virtual true, abstract: false, final false
  inline void SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationResponse* serObject, bool setType);

  /// @brief Method SerializeShort, addr 0x28697ec, size 0x8, virtual true, abstract: false, final false
  inline void SerializeShort(::ExitGames::Client::Photon::StreamBuffer* dout, int16_t serObject, bool setType);

  /// @brief Method SerializeString, addr 0x2869864, size 0x8, virtual true, abstract: false, final false
  inline void SerializeString(::ExitGames::Client::Photon::StreamBuffer* dout, ::StringW serObject, bool setType);

  /// @brief Method Write, addr 0x286e0e8, size 0xb9c, virtual false, abstract: false, final false
  inline void Write(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, ::ExitGames::Client::Photon::__Protocol18__GpType gpType, bool writeType);

  /// @brief Method Write, addr 0x286977c, size 0x70, virtual false, abstract: false, final false
  inline void Write(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType);

  /// @brief Method WriteArrayHeader, addr 0x28714c0, size 0xb8, virtual false, abstract: false, final false
  inline bool WriteArrayHeader(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Type* type);

  /// @brief Method WriteArrayInArray, addr 0x286fa30, size 0xf8, virtual false, abstract: false, final false
  inline void WriteArrayInArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType);

  /// @brief Method WriteArraySegmentByte, addr 0x286ed04, size 0xd4, virtual false, abstract: false, final false
  inline void WriteArraySegmentByte(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::ArraySegment_1<uint8_t> seg, bool writeType);

  /// @brief Method WriteArrayType, addr 0x2871d48, size 0x3e0, virtual false, abstract: false, final false
  inline bool WriteArrayType(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Type* type, ByRef<::ExitGames::Client::Photon::__Protocol18__GpType> writeType);

  /// @brief Method WriteBoolArray, addr 0x28705d8, size 0x260, virtual false, abstract: false, final false
  inline void WriteBoolArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<bool, ::Array<bool>*> value, bool writeType);

  /// @brief Method WriteBoolean, addr 0x286edd8, size 0x38, virtual false, abstract: false, final false
  inline void WriteBoolean(::ExitGames::Client::Photon::StreamBuffer* stream, bool value, bool writeType);

  /// @brief Method WriteByte, addr 0x286ee10, size 0x58, virtual false, abstract: false, final false
  inline void WriteByte(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t value, bool writeType);

  /// @brief Method WriteByteArray, addr 0x286ffbc, size 0x68, virtual false, abstract: false, final false
  inline void WriteByteArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> value, bool writeType);

  /// @brief Method WriteByteArraySlice, addr 0x286ec84, size 0x80, virtual false, abstract: false, final false
  inline void WriteByteArraySlice(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::ByteArraySlice* buffer, bool writeType);

  /// @brief Method WriteCompressedInt32, addr 0x286ee68, size 0x128, virtual false, abstract: false, final false
  inline void WriteCompressedInt32(::ExitGames::Client::Photon::StreamBuffer* stream, int32_t value, bool writeType);

  /// @brief Method WriteCompressedInt64, addr 0x286ef90, size 0x128, virtual false, abstract: false, final false
  inline void WriteCompressedInt64(::ExitGames::Client::Photon::StreamBuffer* stream, int64_t value, bool writeType);

  /// @brief Method WriteCompressedUInt32, addr 0x287144c, size 0x74, virtual false, abstract: false, final false
  inline int32_t WriteCompressedUInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, uint32_t value);

  /// @brief Method WriteCompressedUInt32, addr 0x2872128, size 0xf0, virtual false, abstract: false, final false
  inline void WriteCompressedUInt32(::ExitGames::Client::Photon::StreamBuffer* stream, uint32_t value);

  /// @brief Method WriteCompressedUInt64, addr 0x2872238, size 0x188, virtual false, abstract: false, final false
  inline void WriteCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer* stream, uint64_t value);

  /// @brief Method WriteCustomType, addr 0x286f330, size 0x204, virtual false, abstract: false, final false
  inline void WriteCustomType(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType);

  /// @brief Method WriteCustomTypeArray, addr 0x286f534, size 0x4fc, virtual false, abstract: false, final false
  inline void WriteCustomTypeArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType);

  /// @brief Method WriteCustomTypeBody, addr 0x2871024, size 0x428, virtual false, abstract: false, final false
  inline void WriteCustomTypeBody(::ExitGames::Client::Photon::CustomType* customType, ::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value);

  /// @brief Method WriteDictionary, addr 0x286fb28, size 0xdc, virtual false, abstract: false, final false
  inline void WriteDictionary(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* dict, bool setType);

  /// @brief Method WriteDictionaryArray, addr 0x2870200, size 0xf8, virtual false, abstract: false, final false
  inline void WriteDictionaryArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<::System::Collections::IDictionary*, ::Array<::System::Collections::IDictionary*>*> dictArray,
                                   bool writeType);

  /// @brief Method WriteDictionaryElements, addr 0x2871578, size 0x3e8, virtual false, abstract: false, final false
  inline void WriteDictionaryElements(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Collections::IDictionary* dictionary, ::ExitGames::Client::Photon::__Protocol18__GpType keyWriteType,
                                      ::ExitGames::Client::Photon::__Protocol18__GpType valueWriteType);

  /// @brief Method WriteDictionaryHeader, addr 0x2871960, size 0x3e8, virtual false, abstract: false, final false
  inline void WriteDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Type* type, ByRef<::ExitGames::Client::Photon::__Protocol18__GpType> keyWriteType,
                                    ByRef<::ExitGames::Client::Photon::__Protocol18__GpType> valueWriteType);

  /// @brief Method WriteDouble, addr 0x286f1f4, size 0x13c, virtual false, abstract: false, final false
  inline void WriteDouble(::ExitGames::Client::Photon::StreamBuffer* stream, double_t value, bool writeType);

  /// @brief Method WriteDoubleArray, addr 0x28702f8, size 0x98, virtual false, abstract: false, final false
  inline void WriteDoubleArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<double_t, ::Array<double_t>*> values, bool setType);

  /// @brief Method WriteHashtable, addr 0x286fc04, size 0x244, virtual false, abstract: false, final false
  inline void WriteHashtable(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType);

  /// @brief Method WriteHashtableArray, addr 0x2870428, size 0x10c, virtual false, abstract: false, final false
  inline void WriteHashtableArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType);

  /// @brief Method WriteInt16, addr 0x28697f4, size 0x70, virtual false, abstract: false, final false
  inline void WriteInt16(::ExitGames::Client::Photon::StreamBuffer* stream, int16_t value, bool writeType);

  /// @brief Method WriteInt16Array, addr 0x2870534, size 0xa4, virtual false, abstract: false, final false
  inline void WriteInt16Array(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<int16_t, ::Array<int16_t>*> value, bool writeType);

  /// @brief Method WriteInt32ArrayCompressed, addr 0x286fe48, size 0xa4, virtual false, abstract: false, final false
  inline void WriteInt32ArrayCompressed(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<int32_t, ::Array<int32_t>*> value, bool writeType);

  /// @brief Method WriteInt64ArrayCompressed, addr 0x286feec, size 0xa4, virtual false, abstract: false, final false
  inline void WriteInt64ArrayCompressed(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<int64_t, ::Array<int64_t>*> values, bool setType);

  /// @brief Method WriteIntLength, addr 0x2870f94, size 0x4, virtual false, abstract: false, final false
  inline void WriteIntLength(::ExitGames::Client::Photon::StreamBuffer* stream, int32_t value);

  /// @brief Method WriteObjectArray, addr 0x2870024, size 0x1dc, virtual false, abstract: false, final false
  inline void WriteObjectArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Collections::IList* array, bool writeType);

  /// @brief Method WriteObjectArray, addr 0x2870f98, size 0x8c, virtual false, abstract: false, final false
  inline void WriteObjectArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* array, bool writeType);

  /// @brief Method WriteParameterTable, addr 0x2870a1c, size 0x1cc, virtual false, abstract: false, final false
  inline void WriteParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::ParameterDictionary* parameters);

  /// @brief Method WriteParameterTable, addr 0x2870be8, size 0x1f4, virtual false, abstract: false, final false
  inline void WriteParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* parameters);

  /// @brief Method WriteSingle, addr 0x286f0b8, size 0x13c, virtual false, abstract: false, final false
  inline void WriteSingle(::ExitGames::Client::Photon::StreamBuffer* stream, float_t value, bool writeType);

  /// @brief Method WriteSingleArray, addr 0x2870390, size 0x98, virtual false, abstract: false, final false
  inline void WriteSingleArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<float_t, ::Array<float_t>*> values, bool setType);

  /// @brief Method WriteString, addr 0x286986c, size 0x144, virtual false, abstract: false, final false
  inline void WriteString(::ExitGames::Client::Photon::StreamBuffer* stream, ::StringW value, bool writeType);

  /// @brief Method WriteStringArray, addr 0x2870838, size 0x184, virtual false, abstract: false, final false
  inline void WriteStringArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value0, bool writeType);

  /// @brief Method WriteUShort, addr 0x2870f70, size 0x24, virtual false, abstract: false, final false
  inline void WriteUShort(::ExitGames::Client::Photon::StreamBuffer* stream, uint16_t value);

  /// @brief Method WriteVarInt32, addr 0x2872218, size 0x8, virtual false, abstract: false, final false
  inline void WriteVarInt32(::ExitGames::Client::Photon::StreamBuffer* stream, int32_t value, bool writeType);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_memCompressedUInt32() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_memCompressedUInt32();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_memCompressedUInt64() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_memCompressedUInt64();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_memCustomTypeBodyLengthSerialized() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_memCustomTypeBodyLengthSerialized();

  constexpr ::ArrayW<double_t, ::Array<double_t>*> const& __cordl_internal_get_memDoubleBlock() const;

  constexpr ::ArrayW<double_t, ::Array<double_t>*>& __cordl_internal_get_memDoubleBlock();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_memFloatBlock() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_memFloatBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_versionBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_versionBytes();

  constexpr void __cordl_internal_set_memCompressedUInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_memCompressedUInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_memCustomTypeBodyLengthSerialized(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_memDoubleBlock(::ArrayW<double_t, ::Array<double_t>*> value);

  constexpr void __cordl_internal_set_memFloatBlock(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_versionBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x28723c0, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_boolMasks();

  /// @brief Method get_ProtocolType, addr 0x286972c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_ProtocolType();

  /// @brief Method get_VersionBytes, addr 0x286976c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_VersionBytes();

  static inline void setStaticF_boolMasks(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Protocol18();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Protocol18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Protocol18(Protocol18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Protocol18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Protocol18(Protocol18 const&) = delete;

  /// @brief Field versionBytes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___versionBytes;

  /// @brief Field memDoubleBlock, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<double_t, ::Array<double_t>*> ___memDoubleBlock;

  /// @brief Field memFloatBlock, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___memFloatBlock;

  /// @brief Field memCustomTypeBodyLengthSerialized, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___memCustomTypeBodyLengthSerialized;

  /// @brief Field memCompressedUInt32, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___memCompressedUInt32;

  /// @brief Field memCompressedUInt64, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___memCompressedUInt64;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::Protocol18, 0x48>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___versionBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___memDoubleBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___memFloatBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___memCustomTypeBodyLengthSerialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___memCompressedUInt32) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___memCompressedUInt64) == 0x40, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::__Protocol18__GpType, "ExitGames.Client.Photon", "Protocol18/GpType");
NEED_NO_BOX(::ExitGames::Client::Photon::Protocol18);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Protocol18*, "ExitGames.Client.Photon", "Protocol18");
