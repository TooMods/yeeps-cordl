#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(EventStreamMessageReceivedEventArgs)
namespace Amazon::Runtime::EventStreams {
class EventStreamMessage;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams::Internal {
class EventStreamMessageReceivedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs);
// Type: Amazon.Runtime.EventStreams.Internal::EventStreamMessageReceivedEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams.Internal::EventStreamMessageReceivedEventArgs*
class CORDL_TYPE EventStreamMessageReceivedEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Context, put = set_Context))::System::Object* Context;

  __declspec(property(get = get_Message, put = set_Message))::Amazon::Runtime::EventStreams::EventStreamMessage* Message;

  /// @brief Field <Context>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Context_k__BackingField, put = __cordl_internal_set__Context_k__BackingField))::System::Object* _Context_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField,
                      put = __cordl_internal_set__Message_k__BackingField))::Amazon::Runtime::EventStreams::EventStreamMessage* _Message_k__BackingField;

  static inline ::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs* New_ctor(::Amazon::Runtime::EventStreams::EventStreamMessage* message);

  static inline ::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs* New_ctor(::Amazon::Runtime::EventStreams::EventStreamMessage* message, ::System::Object* context);

  constexpr ::System::Object*& __cordl_internal_get__Context_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Context_k__BackingField() const;

  constexpr ::Amazon::Runtime::EventStreams::EventStreamMessage*& __cordl_internal_get__Message_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::EventStreams::EventStreamMessage*> const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr void __cordl_internal_set__Context_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::Amazon::Runtime::EventStreams::EventStreamMessage* value);

  /// @brief Method .ctor, addr 0x202563c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::EventStreams::EventStreamMessage* message);

  /// @brief Method .ctor, addr 0x20256a8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::EventStreams::EventStreamMessage* message, ::System::Object* context);

  /// @brief Method get_Context, addr 0x202562c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Context();

  /// @brief Method get_Message, addr 0x202561c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::EventStreams::EventStreamMessage* get_Message();

  /// @brief Method set_Context, addr 0x2025634, size 0x8, virtual false, abstract: false, final false
  inline void set_Context(::System::Object* value);

  /// @brief Method set_Message, addr 0x2025624, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::Amazon::Runtime::EventStreams::EventStreamMessage* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStreamMessageReceivedEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStreamMessageReceivedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStreamMessageReceivedEventArgs(EventStreamMessageReceivedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStreamMessageReceivedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStreamMessageReceivedEventArgs(EventStreamMessageReceivedEventArgs const&) = delete;

  /// @brief Field <Message>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::EventStreams::EventStreamMessage* ____Message_k__BackingField;

  /// @brief Field <Context>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____Context_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs, ____Message_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs, ____Context_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::EventStreams::Internal
NEED_NO_BOX(::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*, "Amazon.Runtime.EventStreams.Internal", "EventStreamMessageReceivedEventArgs");
