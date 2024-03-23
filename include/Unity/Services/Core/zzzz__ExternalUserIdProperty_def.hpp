#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExternalUserIdProperty)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace Unity::Services::Core {
class ExternalUserIdProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::ExternalUserIdProperty);
// Type: Unity.Services.Core::ExternalUserIdProperty
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core {
// Is value type: false
// CS Name: ::Unity.Services.Core::ExternalUserIdProperty*
class CORDL_TYPE ExternalUserIdProperty : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_UserId, put = set_UserId))::StringW UserId;

  /// @brief Field UserIdChanged, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_UserIdChanged, put = __cordl_internal_set_UserIdChanged))::System::Action_1<::StringW>* UserIdChanged;

  /// @brief Field m_UserId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UserId, put = __cordl_internal_set_m_UserId))::StringW m_UserId;

  static inline ::Unity::Services::Core::ExternalUserIdProperty* New_ctor();

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_UserIdChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_UserIdChanged() const;

  constexpr ::StringW const& __cordl_internal_get_m_UserId() const;

  constexpr ::StringW& __cordl_internal_get_m_UserId();

  constexpr void __cordl_internal_set_UserIdChanged(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_UserId(::StringW value);

  /// @brief Method .ctor, addr 0x23b9e94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_UserIdChanged, addr 0x23b9d0c, size 0xb0, virtual false, abstract: false, final false
  inline void add_UserIdChanged(::System::Action_1<::StringW>* value);

  /// @brief Method get_UserId, addr 0x23b9e6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UserId();

  /// @brief Method remove_UserIdChanged, addr 0x23b9dbc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_UserIdChanged(::System::Action_1<::StringW>* value);

  /// @brief Method set_UserId, addr 0x23b9e74, size 0x20, virtual false, abstract: false, final false
  inline void set_UserId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExternalUserIdProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExternalUserIdProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExternalUserIdProperty(ExternalUserIdProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExternalUserIdProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExternalUserIdProperty(ExternalUserIdProperty const&) = delete;

  /// @brief Field UserIdChanged, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___UserIdChanged;

  /// @brief Field m_UserId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_UserId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::ExternalUserIdProperty, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::ExternalUserIdProperty, ___UserIdChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::ExternalUserIdProperty, ___m_UserId) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::ExternalUserIdProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::ExternalUserIdProperty*, "Unity.Services.Core", "ExternalUserIdProperty");
