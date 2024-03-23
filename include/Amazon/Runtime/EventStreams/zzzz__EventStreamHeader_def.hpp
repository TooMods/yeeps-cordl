#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamHeaderType_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventStreamHeader)
namespace Amazon::Runtime::EventStreams {
struct EventStreamHeaderType;
}
namespace Amazon::Runtime::EventStreams {
class IEventStreamHeader;
}
namespace System {
struct DateTime;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
class EventStreamHeader;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::EventStreamHeader);
// Type: Amazon.Runtime.EventStreams::EventStreamHeader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams::EventStreamHeader*
class CORDL_TYPE EventStreamHeader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HeaderType, put = set_HeaderType))::Amazon::Runtime::EventStreams::EventStreamHeaderType HeaderType;

  __declspec(property(get = get_HeaderValue, put = set_HeaderValue))::System::Object* HeaderValue;

  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Field <HeaderType>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__HeaderType_k__BackingField,
                      put = __cordl_internal_set__HeaderType_k__BackingField))::Amazon::Runtime::EventStreams::EventStreamHeaderType _HeaderType_k__BackingField;

  /// @brief Field <HeaderValue>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__HeaderValue_k__BackingField, put = __cordl_internal_set__HeaderValue_k__BackingField))::System::Object* _HeaderValue_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field _unixEpoch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__unixEpoch, put = setStaticF__unixEpoch))::System::DateTime _unixEpoch;

  /// @brief Convert operator to "::Amazon::Runtime::EventStreams::IEventStreamHeader"
  constexpr operator ::Amazon::Runtime::EventStreams::IEventStreamHeader*() noexcept;

  /// @brief Method AsBool, addr 0x20235c0, size 0x10, virtual true, abstract: false, final true
  inline bool AsBool();

  /// @brief Method AsByte, addr 0x2023650, size 0x70, virtual true, abstract: false, final true
  inline uint8_t AsByte();

  /// @brief Method AsByteBuf, addr 0x20239b0, size 0x48, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsByteBuf();

  /// @brief Method AsInt16, addr 0x2023728, size 0x70, virtual true, abstract: false, final true
  inline int16_t AsInt16();

  /// @brief Method AsInt32, addr 0x2023800, size 0x70, virtual true, abstract: false, final true
  inline int32_t AsInt32();

  /// @brief Method AsInt64, addr 0x20238d8, size 0x70, virtual true, abstract: false, final true
  inline int64_t AsInt64();

  /// @brief Method AsString, addr 0x2023a08, size 0x60, virtual true, abstract: false, final true
  inline ::StringW AsString();

  /// @brief Method AsTimestamp, addr 0x2023a78, size 0x70, virtual true, abstract: false, final true
  inline ::System::DateTime AsTimestamp();

  /// @brief Method AsUUID, addr 0x2023b50, size 0x74, virtual true, abstract: false, final true
  inline ::System::Guid AsUUID();

  /// @brief Method FromBuffer, addr 0x2022714, size 0x640, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::EventStreams::EventStreamHeader* FromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, ByRef<int32_t> newOffset);

  /// @brief Method GetWireSize, addr 0x2023410, size 0x1b0, virtual true, abstract: false, final true
  inline int32_t GetWireSize();

  static inline ::Amazon::Runtime::EventStreams::EventStreamHeader* New_ctor(::StringW name);

  /// @brief Method SetBool, addr 0x20235d0, size 0x80, virtual true, abstract: false, final true
  inline void SetBool(bool value);

  /// @brief Method SetByte, addr 0x20236c0, size 0x68, virtual true, abstract: false, final true
  inline void SetByte(uint8_t value);

  /// @brief Method SetByteBuf, addr 0x20239f8, size 0x10, virtual true, abstract: false, final true
  inline void SetByteBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method SetInt16, addr 0x2023798, size 0x68, virtual true, abstract: false, final true
  inline void SetInt16(int16_t value);

  /// @brief Method SetInt32, addr 0x2023870, size 0x68, virtual true, abstract: false, final true
  inline void SetInt32(int32_t value);

  /// @brief Method SetInt64, addr 0x2023948, size 0x68, virtual true, abstract: false, final true
  inline void SetInt64(int64_t value);

  /// @brief Method SetString, addr 0x2023a68, size 0x10, virtual true, abstract: false, final true
  inline void SetString(::StringW value);

  /// @brief Method SetTimestamp, addr 0x2023ae8, size 0x68, virtual true, abstract: false, final true
  inline void SetTimestamp(::System::DateTime value);

  /// @brief Method SetUUID, addr 0x2023bc4, size 0x74, virtual true, abstract: false, final true
  inline void SetUUID(::System::Guid value);

  /// @brief Method WriteToBuffer, addr 0x2022dbc, size 0x654, virtual true, abstract: false, final true
  inline int32_t WriteToBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType const& __cordl_internal_get__HeaderType_k__BackingField() const;

  constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType& __cordl_internal_get__HeaderType_k__BackingField();

  constexpr ::System::Object*& __cordl_internal_get__HeaderValue_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__HeaderValue_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__HeaderType_k__BackingField(::Amazon::Runtime::EventStreams::EventStreamHeaderType value);

  constexpr void __cordl_internal_set__HeaderValue_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x20226ec, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline ::System::DateTime getStaticF__unixEpoch();

  /// @brief Method get_HeaderType, addr 0x20226cc, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::EventStreams::EventStreamHeaderType get_HeaderType();

  /// @brief Method get_HeaderValue, addr 0x20226dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_HeaderValue();

  /// @brief Method get_Name, addr 0x20226c4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Name();

  /// @brief Convert to "::Amazon::Runtime::EventStreams::IEventStreamHeader"
  constexpr ::Amazon::Runtime::EventStreams::IEventStreamHeader* i___Amazon__Runtime__EventStreams__IEventStreamHeader() noexcept;

  static inline void setStaticF__unixEpoch(::System::DateTime value);

  /// @brief Method set_HeaderType, addr 0x20226d4, size 0x8, virtual false, abstract: false, final false
  inline void set_HeaderType(::Amazon::Runtime::EventStreams::EventStreamHeaderType value);

  /// @brief Method set_HeaderValue, addr 0x20226e4, size 0x8, virtual false, abstract: false, final false
  inline void set_HeaderValue(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStreamHeader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStreamHeader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStreamHeader(EventStreamHeader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStreamHeader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStreamHeader(EventStreamHeader const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <HeaderType>k__BackingField, offset: 0x18, size: 0x1, def value: None
  ::Amazon::Runtime::EventStreams::EventStreamHeaderType ____HeaderType_k__BackingField;

  /// @brief Field <HeaderValue>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____HeaderValue_k__BackingField;

  /// @brief Field _sizeOfByte offset 0xffffffff size 0x4
  static constexpr int32_t _sizeOfByte{ static_cast<int32_t>(0x1) };

  /// @brief Field _sizeOfGuid offset 0xffffffff size 0x4
  static constexpr int32_t _sizeOfGuid{ static_cast<int32_t>(0x10) };

  /// @brief Field _sizeOfInt16 offset 0xffffffff size 0x4
  static constexpr int32_t _sizeOfInt16{ static_cast<int32_t>(0x2) };

  /// @brief Field _sizeOfInt32 offset 0xffffffff size 0x4
  static constexpr int32_t _sizeOfInt32{ static_cast<int32_t>(0x4) };

  /// @brief Field _sizeOfInt64 offset 0xffffffff size 0x4
  static constexpr int32_t _sizeOfInt64{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::EventStreamHeader, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::EventStreamHeader, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::EventStreamHeader, ____HeaderType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::EventStreamHeader, ____HeaderValue_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::EventStreams
NEED_NO_BOX(::Amazon::Runtime::EventStreams::EventStreamHeader);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::EventStreamHeader*, "Amazon.Runtime.EventStreams", "EventStreamHeader");
