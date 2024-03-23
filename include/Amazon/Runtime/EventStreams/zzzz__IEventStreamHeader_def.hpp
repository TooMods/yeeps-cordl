#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IEventStreamHeader)
namespace Amazon::Runtime::EventStreams {
struct EventStreamHeaderType;
}
namespace System {
struct DateTime;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
class IEventStreamHeader;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::IEventStreamHeader);
// Type: Amazon.Runtime.EventStreams::IEventStreamHeader
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams::IEventStreamHeader*
class CORDL_TYPE IEventStreamHeader {
public:
  // Declarations
  __declspec(property(get = get_HeaderType))::Amazon::Runtime::EventStreams::EventStreamHeaderType HeaderType;

  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Method AsBool, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool AsBool();

  /// @brief Method AsByte, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint8_t AsByte();

  /// @brief Method AsByteBuf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsByteBuf();

  /// @brief Method AsInt16, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int16_t AsInt16();

  /// @brief Method AsInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t AsInt32();

  /// @brief Method AsInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t AsInt64();

  /// @brief Method AsString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW AsString();

  /// @brief Method AsTimestamp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime AsTimestamp();

  /// @brief Method AsUUID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Guid AsUUID();

  /// @brief Method GetWireSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetWireSize();

  /// @brief Method SetBool, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetBool(bool value);

  /// @brief Method SetByte, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetByte(uint8_t value);

  /// @brief Method SetByteBuf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetByteBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method SetInt16, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetInt16(int16_t value);

  /// @brief Method SetInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetInt32(int32_t value);

  /// @brief Method SetInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetInt64(int64_t value);

  /// @brief Method SetString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetString(::StringW value);

  /// @brief Method SetTimestamp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetTimestamp(::System::DateTime value);

  /// @brief Method SetUUID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetUUID(::System::Guid value);

  /// @brief Method WriteToBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t WriteToBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method get_HeaderType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::EventStreams::EventStreamHeaderType get_HeaderType();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Name();

  // Ctor Parameters [CppParam { name: "", ty: "IEventStreamHeader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEventStreamHeader(IEventStreamHeader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEventStreamHeader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventStreamHeader(IEventStreamHeader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams
NEED_NO_BOX(::Amazon::Runtime::EventStreams::IEventStreamHeader);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::IEventStreamHeader*, "Amazon.Runtime.EventStreams", "IEventStreamHeader");
