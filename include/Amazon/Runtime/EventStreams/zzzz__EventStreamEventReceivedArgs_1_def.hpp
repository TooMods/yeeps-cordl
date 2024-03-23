#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(EventStreamEventReceivedArgs_1)
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
template <typename T> class EventStreamEventReceivedArgs_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1);
// Type: Amazon.Runtime.EventStreams::EventStreamEventReceivedArgs`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams::EventStreamEventReceivedArgs`1<T>*
class CORDL_TYPE EventStreamEventReceivedArgs_1 : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_EventStreamEvent)) T EventStreamEvent;

  /// @brief Field <EventStreamEvent>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__EventStreamEvent_k__BackingField, put = __cordl_internal_set__EventStreamEvent_k__BackingField)) T _EventStreamEvent_k__BackingField;

  static inline ::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>* New_ctor(T eventStreamEvent);

  constexpr T const& __cordl_internal_get__EventStreamEvent_k__BackingField() const;

  constexpr T& __cordl_internal_get__EventStreamEvent_k__BackingField();

  constexpr void __cordl_internal_set__EventStreamEvent_k__BackingField(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T eventStreamEvent);

  /// @brief Method get_EventStreamEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_EventStreamEvent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStreamEventReceivedArgs_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStreamEventReceivedArgs_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStreamEventReceivedArgs_1(EventStreamEventReceivedArgs_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStreamEventReceivedArgs_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStreamEventReceivedArgs_1(EventStreamEventReceivedArgs_1 const&) = delete;

  /// @brief Field <EventStreamEvent>k__BackingField, offset: 0x10, size: 0x8, def value: None
  T ____EventStreamEvent_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1, "Amazon.Runtime.EventStreams", "EventStreamEventReceivedArgs`1");
