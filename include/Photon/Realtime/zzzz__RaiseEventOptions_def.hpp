#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__EventCaching_def.hpp"
#include "Photon/Realtime/zzzz__ReceiverGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RaiseEventOptions)
namespace Photon::Realtime {
class WebFlags;
}
// Forward declare root types
namespace Photon::Realtime {
class RaiseEventOptions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::RaiseEventOptions);
// Type: Photon.Realtime::RaiseEventOptions
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::RaiseEventOptions*
class CORDL_TYPE RaiseEventOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field CachingOption, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_CachingOption, put = __cordl_internal_set_CachingOption))::Photon::Realtime::EventCaching CachingOption;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::Photon::Realtime::RaiseEventOptions* Default;

  /// @brief Field Flags, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Flags, put = __cordl_internal_set_Flags))::Photon::Realtime::WebFlags* Flags;

  /// @brief Field InterestGroup, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_InterestGroup, put = __cordl_internal_set_InterestGroup)) uint8_t InterestGroup;

  /// @brief Field Receivers, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_Receivers, put = __cordl_internal_set_Receivers))::Photon::Realtime::ReceiverGroup Receivers;

  /// @brief Field SequenceChannel, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_SequenceChannel, put = __cordl_internal_set_SequenceChannel)) uint8_t SequenceChannel;

  /// @brief Field TargetActors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_TargetActors, put = __cordl_internal_set_TargetActors))::ArrayW<int32_t, ::Array<int32_t>*> TargetActors;

  static inline ::Photon::Realtime::RaiseEventOptions* New_ctor();

  constexpr ::Photon::Realtime::EventCaching const& __cordl_internal_get_CachingOption() const;

  constexpr ::Photon::Realtime::EventCaching& __cordl_internal_get_CachingOption();

  constexpr ::Photon::Realtime::WebFlags*& __cordl_internal_get_Flags();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::WebFlags*> const& __cordl_internal_get_Flags() const;

  constexpr uint8_t const& __cordl_internal_get_InterestGroup() const;

  constexpr uint8_t& __cordl_internal_get_InterestGroup();

  constexpr ::Photon::Realtime::ReceiverGroup const& __cordl_internal_get_Receivers() const;

  constexpr ::Photon::Realtime::ReceiverGroup& __cordl_internal_get_Receivers();

  constexpr uint8_t const& __cordl_internal_get_SequenceChannel() const;

  constexpr uint8_t& __cordl_internal_get_SequenceChannel();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_TargetActors() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_TargetActors();

  constexpr void __cordl_internal_set_CachingOption(::Photon::Realtime::EventCaching value);

  constexpr void __cordl_internal_set_Flags(::Photon::Realtime::WebFlags* value);

  constexpr void __cordl_internal_set_InterestGroup(uint8_t value);

  constexpr void __cordl_internal_set_Receivers(::Photon::Realtime::ReceiverGroup value);

  constexpr void __cordl_internal_set_SequenceChannel(uint8_t value);

  constexpr void __cordl_internal_set_TargetActors(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x2247cfc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_Default();

  static inline void setStaticF_Default(::Photon::Realtime::RaiseEventOptions* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RaiseEventOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RaiseEventOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RaiseEventOptions(RaiseEventOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RaiseEventOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RaiseEventOptions(RaiseEventOptions const&) = delete;

  /// @brief Field CachingOption, offset: 0x10, size: 0x1, def value: None
  ::Photon::Realtime::EventCaching ___CachingOption;

  /// @brief Field InterestGroup, offset: 0x11, size: 0x1, def value: None
  uint8_t ___InterestGroup;

  /// @brief Field TargetActors, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___TargetActors;

  /// @brief Field Receivers, offset: 0x20, size: 0x1, def value: None
  ::Photon::Realtime::ReceiverGroup ___Receivers;

  /// @brief Field SequenceChannel, offset: 0x21, size: 0x1, def value: None
  uint8_t ___SequenceChannel;

  /// @brief Field Flags, offset: 0x28, size: 0x8, def value: None
  ::Photon::Realtime::WebFlags* ___Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::RaiseEventOptions, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::RaiseEventOptions, ___CachingOption) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RaiseEventOptions, ___InterestGroup) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RaiseEventOptions, ___TargetActors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RaiseEventOptions, ___Receivers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RaiseEventOptions, ___SequenceChannel) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RaiseEventOptions, ___Flags) == 0x28, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::RaiseEventOptions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::RaiseEventOptions*, "Photon.Realtime", "RaiseEventOptions");
