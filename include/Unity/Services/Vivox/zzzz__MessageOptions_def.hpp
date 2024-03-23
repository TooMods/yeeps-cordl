#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MessageOptions)
// Forward declare root types
namespace Unity::Services::Vivox {
class MessageOptions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::MessageOptions);
// Type: Unity.Services.Vivox::MessageOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::MessageOptions*
class CORDL_TYPE MessageOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Language, put = set_Language))::StringW Language;

  /// @brief Field <Language>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Language_k__BackingField, put = __cordl_internal_set__Language_k__BackingField))::StringW _Language_k__BackingField;

  static inline ::Unity::Services::Vivox::MessageOptions* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Language_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Language_k__BackingField();

  constexpr void __cordl_internal_set__Language_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1c13108, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Language, addr 0x1c130f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Language();

  /// @brief Method set_Language, addr 0x1c13100, size 0x8, virtual false, abstract: false, final false
  inline void set_Language(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageOptions(MessageOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageOptions(MessageOptions const&) = delete;

  /// @brief Field <Language>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Language_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::MessageOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::MessageOptions, ____Language_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::MessageOptions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::MessageOptions*, "Unity.Services.Vivox", "MessageOptions");
