#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventStreamMessage)
namespace Amazon::Runtime::EventStreams {
class IEventStreamHeader;
}
namespace Amazon::Runtime::EventStreams {
class IEventStreamMessage;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
class EventStreamMessage;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::EventStreamMessage);
// Type: Amazon.Runtime.EventStreams::EventStreamMessage
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams::EventStreamMessage*
class CORDL_TYPE EventStreamMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Headers, put = set_Headers))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* Headers;

  __declspec(property(get = get_Payload, put = set_Payload))::ArrayW<uint8_t, ::Array<uint8_t>*> Payload;

  /// @brief Field <Headers>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Headers_k__BackingField,
      put = __cordl_internal_set__Headers_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* _Headers_k__BackingField;

  /// @brief Field <Payload>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Payload_k__BackingField, put = __cordl_internal_set__Payload_k__BackingField))::ArrayW<uint8_t, ::Array<uint8_t>*> _Payload_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::EventStreams::IEventStreamMessage"
  constexpr operator ::Amazon::Runtime::EventStreams::IEventStreamMessage*() noexcept;

  /// @brief Method FromBuffer, addr 0x2024024, size 0x9a4, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::EventStreams::EventStreamMessage* FromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  static inline ::Amazon::Runtime::EventStreams::EventStreamMessage* New_ctor();

  static inline ::Amazon::Runtime::EventStreams::EventStreamMessage* New_ctor(::System::Collections::Generic::List_1<::Amazon::Runtime::EventStreams::IEventStreamHeader*>* headers,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> payload);

  /// @brief Method ToByteArray, addr 0x20249c8, size 0x898, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>*& __cordl_internal_get__Headers_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>*> const&
  __cordl_internal_get__Headers_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__Payload_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__Payload_k__BackingField();

  constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* value);

  constexpr void __cordl_internal_set__Payload_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2023d3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2023d44, size 0x2e0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Amazon::Runtime::EventStreams::IEventStreamHeader*>* headers, ::ArrayW<uint8_t, ::Array<uint8_t>*> payload);

  /// @brief Method get_Headers, addr 0x2023d1c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* get_Headers();

  /// @brief Method get_Payload, addr 0x2023d2c, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Payload();

  /// @brief Convert to "::Amazon::Runtime::EventStreams::IEventStreamMessage"
  constexpr ::Amazon::Runtime::EventStreams::IEventStreamMessage* i___Amazon__Runtime__EventStreams__IEventStreamMessage() noexcept;

  /// @brief Method set_Headers, addr 0x2023d24, size 0x8, virtual true, abstract: false, final true
  inline void set_Headers(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* value);

  /// @brief Method set_Payload, addr 0x2023d34, size 0x8, virtual true, abstract: false, final true
  inline void set_Payload(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStreamMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStreamMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStreamMessage(EventStreamMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStreamMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStreamMessage(EventStreamMessage const&) = delete;

  /// @brief Field <Headers>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* ____Headers_k__BackingField;

  /// @brief Field <Payload>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____Payload_k__BackingField;

  /// @brief Field ContentType offset 0xffffffff size 0x8
  static constexpr ::ConstString ContentType{ u"vnd.amazon.eventstream" };

  /// @brief Field FramingSize offset 0xffffffff size 0x4
  static constexpr int32_t FramingSize{ static_cast<int32_t>(0x10) };

  /// @brief Field PreludeLen offset 0xffffffff size 0x4
  static constexpr int32_t PreludeLen{ static_cast<int32_t>(0xc) };

  /// @brief Field SizeOfInt32 offset 0xffffffff size 0x4
  static constexpr int32_t SizeOfInt32{ static_cast<int32_t>(0x4) };

  /// @brief Field TrailerLen offset 0xffffffff size 0x4
  static constexpr int32_t TrailerLen{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::EventStreamMessage, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::EventStreamMessage, ____Headers_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::EventStreamMessage, ____Payload_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::EventStreams
NEED_NO_BOX(::Amazon::Runtime::EventStreams::EventStreamMessage);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::EventStreamMessage*, "Amazon.Runtime.EventStreams", "EventStreamMessage");
