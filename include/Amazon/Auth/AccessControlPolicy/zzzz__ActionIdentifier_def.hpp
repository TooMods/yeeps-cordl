#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ActionIdentifier)
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifier);
// Type: Amazon.Auth.AccessControlPolicy::ActionIdentifier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy::ActionIdentifier*
class CORDL_TYPE ActionIdentifier : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ActionName, put = set_ActionName))::StringW ActionName;

  /// @brief Field actionName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_actionName, put = __cordl_internal_set_actionName))::StringW actionName;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* New_ctor(::StringW actionName);

  constexpr ::StringW const& __cordl_internal_get_actionName() const;

  constexpr ::StringW& __cordl_internal_get_actionName();

  constexpr void __cordl_internal_set_actionName(::StringW value);

  /// @brief Method .ctor, addr 0x25e90a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW actionName);

  /// @brief Method get_ActionName, addr 0x25e90d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ActionName();

  /// @brief Method set_ActionName, addr 0x25e90d8, size 0x8, virtual false, abstract: false, final false
  inline void set_ActionName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActionIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionIdentifier(ActionIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionIdentifier(ActionIdentifier const&) = delete;

  /// @brief Field actionName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___actionName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifier, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::ActionIdentifier, ___actionName) == 0x10, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifier*, "Amazon.Auth.AccessControlPolicy", "ActionIdentifier");
