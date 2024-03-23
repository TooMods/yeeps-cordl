#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelCreationOptions)
// Forward declare root types
namespace Photon::Chat {
class ChannelCreationOptions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ChannelCreationOptions);
// Type: Photon.Chat::ChannelCreationOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ChannelCreationOptions*
class CORDL_TYPE ChannelCreationOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::Photon::Chat::ChannelCreationOptions* Default;

  __declspec(property(get = get_MaxSubscribers, put = set_MaxSubscribers)) int32_t MaxSubscribers;

  __declspec(property(get = get_PublishSubscribers, put = set_PublishSubscribers)) bool PublishSubscribers;

  /// @brief Field <MaxSubscribers>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxSubscribers_k__BackingField, put = __cordl_internal_set__MaxSubscribers_k__BackingField)) int32_t _MaxSubscribers_k__BackingField;

  /// @brief Field <PublishSubscribers>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__PublishSubscribers_k__BackingField, put = __cordl_internal_set__PublishSubscribers_k__BackingField)) bool _PublishSubscribers_k__BackingField;

  static inline ::Photon::Chat::ChannelCreationOptions* New_ctor();

  constexpr int32_t const& __cordl_internal_get__MaxSubscribers_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__MaxSubscribers_k__BackingField();

  constexpr bool const& __cordl_internal_get__PublishSubscribers_k__BackingField() const;

  constexpr bool& __cordl_internal_get__PublishSubscribers_k__BackingField();

  constexpr void __cordl_internal_set__MaxSubscribers_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__PublishSubscribers_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x180a2cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Photon::Chat::ChannelCreationOptions* getStaticF_Default();

  /// @brief Method get_MaxSubscribers, addr 0x180a2bc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxSubscribers();

  /// @brief Method get_PublishSubscribers, addr 0x180a2a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_PublishSubscribers();

  static inline void setStaticF_Default(::Photon::Chat::ChannelCreationOptions* value);

  /// @brief Method set_MaxSubscribers, addr 0x180a2c4, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxSubscribers(int32_t value);

  /// @brief Method set_PublishSubscribers, addr 0x180a2b0, size 0xc, virtual false, abstract: false, final false
  inline void set_PublishSubscribers(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelCreationOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChannelCreationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChannelCreationOptions(ChannelCreationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChannelCreationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChannelCreationOptions(ChannelCreationOptions const&) = delete;

  /// @brief Field <PublishSubscribers>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____PublishSubscribers_k__BackingField;

  /// @brief Field <MaxSubscribers>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____MaxSubscribers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChannelCreationOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Chat::ChannelCreationOptions, ____PublishSubscribers_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChannelCreationOptions, ____MaxSubscribers_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ChannelCreationOptions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChannelCreationOptions*, "Photon.Chat", "ChannelCreationOptions");
