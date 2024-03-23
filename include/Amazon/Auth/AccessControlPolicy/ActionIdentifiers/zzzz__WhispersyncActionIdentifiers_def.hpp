#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WhispersyncActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class WhispersyncActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::WhispersyncActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::WhispersyncActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::WhispersyncActionIdentifiers*
class CORDL_TYPE WhispersyncActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllWhispersyncActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllWhispersyncActions, put = setStaticF_AllWhispersyncActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllWhispersyncActions;

  /// @brief Field GetDatamapUpdates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetDatamapUpdates, put = setStaticF_GetDatamapUpdates))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetDatamapUpdates;

  /// @brief Field PatchDatamapUpdates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PatchDatamapUpdates, put = setStaticF_PatchDatamapUpdates))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PatchDatamapUpdates;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllWhispersyncActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetDatamapUpdates();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PatchDatamapUpdates();

  static inline void setStaticF_AllWhispersyncActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetDatamapUpdates(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PatchDatamapUpdates(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhispersyncActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WhispersyncActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhispersyncActionIdentifiers(WhispersyncActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhispersyncActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhispersyncActionIdentifiers(WhispersyncActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::WhispersyncActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::WhispersyncActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::WhispersyncActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "WhispersyncActionIdentifiers");
