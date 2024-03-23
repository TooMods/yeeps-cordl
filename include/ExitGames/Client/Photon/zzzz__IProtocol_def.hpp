#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IProtocol)
namespace ExitGames::Client::Photon {
class ByteArraySlicePool;
}
namespace ExitGames::Client::Photon {
class DisconnectMessage;
}
namespace ExitGames::Client::Photon {
class EventData;
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
struct __IProtocol__DeserializationFlags;
}
namespace ExitGames::Client::Photon {
class IProtocol;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::__IProtocol__DeserializationFlags);
MARK_REF_PTR_T(::ExitGames::Client::Photon::IProtocol);
// Type: ::DeserializationFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::IProtocol::DeserializationFlags
struct CORDL_TYPE __IProtocol__DeserializationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IProtocol__DeserializationFlags_Unwrapped
  enum struct ____IProtocol__DeserializationFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_AllowPooledByteArray = static_cast<int32_t>(0x1),
    __E_WrapIncomingStructs = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IProtocol__DeserializationFlags_Unwrapped() const noexcept {
    return static_cast<____IProtocol__DeserializationFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IProtocol__DeserializationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IProtocol__DeserializationFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllowPooledByteArray value: static_cast<int32_t>(0x1)
  static ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags const AllowPooledByteArray;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags const None;

  /// @brief Field WrapIncomingStructs value: static_cast<int32_t>(0x2)
  static ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags const WrapIncomingStructs;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__IProtocol__DeserializationFlags, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
// Type: ExitGames.Client.Photon::IProtocol
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::IProtocol*
class CORDL_TYPE IProtocol : public ::System::Object {
public:
  // Declarations
  using DeserializationFlags = ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags;

  /// @brief Field ByteArraySlicePool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ByteArraySlicePool, put = __cordl_internal_set_ByteArraySlicePool))::ExitGames::Client::Photon::ByteArraySlicePool* ByteArraySlicePool;

  __declspec(property(get = get_ProtocolType))::StringW ProtocolType;

  __declspec(property(get = get_VersionBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> VersionBytes;

  /// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Deserialize(::ExitGames::Client::Photon::StreamBuffer* din, uint8_t type, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method Deserialize, addr 0x277ff14, size 0x94, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::ArrayW<uint8_t, ::Array<uint8_t>*> serializedData);

  /// @brief Method Deserialize, addr 0x277fec8, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method DeserializeByte, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint8_t DeserializeByte(::ExitGames::Client::Photon::StreamBuffer* din);

  /// @brief Method DeserializeDisconnectMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ExitGames::Client::Photon::DisconnectMessage* DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method DeserializeEventData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ExitGames::Client::Photon::EventData* DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer* din, ::ExitGames::Client::Photon::EventData* target,
                                                                      ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeMessage, addr 0x277ffa8, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Object* DeserializeMessage(::ExitGames::Client::Photon::StreamBuffer* stream);

  /// @brief Method DeserializeOperationRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ExitGames::Client::Photon::OperationRequest* DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* din,
                                                                                    ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeOperationResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ExitGames::Client::Photon::OperationResponse* DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                      ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags);

  /// @brief Method DeserializeShort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int16_t DeserializeShort(::ExitGames::Client::Photon::StreamBuffer* din);

  static inline ::ExitGames::Client::Photon::IProtocol* New_ctor();

  /// @brief Method Serialize, addr 0x277fe38, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Serialize(::System::Object* obj);

  /// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Serialize(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Object* serObject, bool setType);

  /// @brief Method SerializeEventData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SerializeEventData(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::EventData* serObject, bool setType);

  /// @brief Method SerializeMessage, addr 0x277fff4, size 0x10, virtual false, abstract: false, final false
  inline void SerializeMessage(::ExitGames::Client::Photon::StreamBuffer* ms, ::System::Object* msg);

  /// @brief Method SerializeOperationRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode, ::ExitGames::Client::Photon::ParameterDictionary* parameters, bool setType);

  /// @brief Method SerializeOperationRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* parameters,
                                        bool setType);

  /// @brief Method SerializeOperationResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationResponse* serObject, bool setType);

  /// @brief Method SerializeShort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SerializeShort(::ExitGames::Client::Photon::StreamBuffer* dout, int16_t serObject, bool setType);

  /// @brief Method SerializeString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SerializeString(::ExitGames::Client::Photon::StreamBuffer* dout, ::StringW serObject, bool setType);

  constexpr ::ExitGames::Client::Photon::ByteArraySlicePool*& __cordl_internal_get_ByteArraySlicePool();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::ByteArraySlicePool*> const& __cordl_internal_get_ByteArraySlicePool() const;

  constexpr void __cordl_internal_set_ByteArraySlicePool(::ExitGames::Client::Photon::ByteArraySlicePool* value);

  /// @brief Method .ctor, addr 0x2780004, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ProtocolType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ProtocolType();

  /// @brief Method get_VersionBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_VersionBytes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IProtocol();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IProtocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IProtocol(IProtocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IProtocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProtocol(IProtocol const&) = delete;

  /// @brief Field ByteArraySlicePool, offset: 0x10, size: 0x8, def value: None
  ::ExitGames::Client::Photon::ByteArraySlicePool* ___ByteArraySlicePool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::IProtocol, 0x18>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IProtocol, ___ByteArraySlicePool) == 0x10, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::__IProtocol__DeserializationFlags, "ExitGames.Client.Photon", "IProtocol/DeserializationFlags");
NEED_NO_BOX(::ExitGames::Client::Photon::IProtocol);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::IProtocol*, "ExitGames.Client.Photon", "IProtocol");
