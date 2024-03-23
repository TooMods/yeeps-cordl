#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ChannelOptions)
// Forward declare root types
namespace Unity::Services::Vivox {
class ChannelOptions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ChannelOptions);
// Type: Unity.Services.Vivox::ChannelOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ChannelOptions*
class CORDL_TYPE ChannelOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MakeActiveChannelUponJoining, put = set_MakeActiveChannelUponJoining)) bool MakeActiveChannelUponJoining;

  /// @brief Field <MakeActiveChannelUponJoining>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__MakeActiveChannelUponJoining_k__BackingField,
                      put = __cordl_internal_set__MakeActiveChannelUponJoining_k__BackingField)) bool _MakeActiveChannelUponJoining_k__BackingField;

  static inline ::Unity::Services::Vivox::ChannelOptions* New_ctor();

  constexpr bool const& __cordl_internal_get__MakeActiveChannelUponJoining_k__BackingField() const;

  constexpr bool& __cordl_internal_get__MakeActiveChannelUponJoining_k__BackingField();

  constexpr void __cordl_internal_set__MakeActiveChannelUponJoining_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1c177b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MakeActiveChannelUponJoining, addr 0x1c177a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_MakeActiveChannelUponJoining();

  /// @brief Method set_MakeActiveChannelUponJoining, addr 0x1c177ac, size 0xc, virtual false, abstract: false, final false
  inline void set_MakeActiveChannelUponJoining(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChannelOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChannelOptions(ChannelOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChannelOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChannelOptions(ChannelOptions const&) = delete;

  /// @brief Field <MakeActiveChannelUponJoining>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____MakeActiveChannelUponJoining_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ChannelOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelOptions, ____MakeActiveChannelUponJoining_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ChannelOptions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ChannelOptions*, "Unity.Services.Vivox", "ChannelOptions");
