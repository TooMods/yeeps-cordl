#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnknownEventStreamEvent)
namespace Amazon::Runtime::EventStreams::Internal {
class IEventStreamEvent;
}
namespace Amazon::Runtime::EventStreams {
class IEventStreamMessage;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams::Internal {
class UnknownEventStreamEvent;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::UnknownEventStreamEvent);
// Type: Amazon.Runtime.EventStreams.Internal::UnknownEventStreamEvent
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams.Internal::UnknownEventStreamEvent*
class CORDL_TYPE UnknownEventStreamEvent : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EventType, put = set_EventType))::StringW EventType;

  __declspec(property(get = get_ReceivedMessage, put = set_ReceivedMessage))::Amazon::Runtime::EventStreams::IEventStreamMessage* ReceivedMessage;

  /// @brief Field <EventType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__EventType_k__BackingField, put = __cordl_internal_set__EventType_k__BackingField))::StringW _EventType_k__BackingField;

  /// @brief Field <ReceivedMessage>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ReceivedMessage_k__BackingField,
                      put = __cordl_internal_set__ReceivedMessage_k__BackingField))::Amazon::Runtime::EventStreams::IEventStreamMessage* _ReceivedMessage_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent"
  constexpr operator ::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent*() noexcept;

  static inline ::Amazon::Runtime::EventStreams::Internal::UnknownEventStreamEvent* New_ctor();

  static inline ::Amazon::Runtime::EventStreams::Internal::UnknownEventStreamEvent* New_ctor(::Amazon::Runtime::EventStreams::IEventStreamMessage* receivedMessage, ::StringW eventType);

  constexpr ::StringW const& __cordl_internal_get__EventType_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__EventType_k__BackingField();

  constexpr ::Amazon::Runtime::EventStreams::IEventStreamMessage*& __cordl_internal_get__ReceivedMessage_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::EventStreams::IEventStreamMessage*> const& __cordl_internal_get__ReceivedMessage_k__BackingField() const;

  constexpr void __cordl_internal_set__EventType_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ReceivedMessage_k__BackingField(::Amazon::Runtime::EventStreams::IEventStreamMessage* value);

  /// @brief Method .ctor, addr 0x2026518, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2026520, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::EventStreams::IEventStreamMessage* receivedMessage, ::StringW eventType);

  /// @brief Method get_EventType, addr 0x2026508, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventType();

  /// @brief Method get_ReceivedMessage, addr 0x20264f8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::EventStreams::IEventStreamMessage* get_ReceivedMessage();

  /// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent"
  constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent* i___Amazon__Runtime__EventStreams__Internal__IEventStreamEvent() noexcept;

  /// @brief Method set_EventType, addr 0x2026510, size 0x8, virtual false, abstract: false, final false
  inline void set_EventType(::StringW value);

  /// @brief Method set_ReceivedMessage, addr 0x2026500, size 0x8, virtual false, abstract: false, final false
  inline void set_ReceivedMessage(::Amazon::Runtime::EventStreams::IEventStreamMessage* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnknownEventStreamEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnknownEventStreamEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnknownEventStreamEvent(UnknownEventStreamEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnknownEventStreamEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnknownEventStreamEvent(UnknownEventStreamEvent const&) = delete;

  /// @brief Field <ReceivedMessage>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::EventStreams::IEventStreamMessage* ____ReceivedMessage_k__BackingField;

  /// @brief Field <EventType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____EventType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::Internal::UnknownEventStreamEvent, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::UnknownEventStreamEvent, ____ReceivedMessage_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::UnknownEventStreamEvent, ____EventType_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::EventStreams::Internal
NEED_NO_BOX(::Amazon::Runtime::EventStreams::Internal::UnknownEventStreamEvent);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::Internal::UnknownEventStreamEvent*, "Amazon.Runtime.EventStreams.Internal", "UnknownEventStreamEvent");
