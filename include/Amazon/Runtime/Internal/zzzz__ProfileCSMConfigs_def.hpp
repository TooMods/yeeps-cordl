#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfileCSMConfigs)
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
namespace Amazon::Runtime::Internal {
class CSMFallbackConfigChain;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class ProfileCSMConfigs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ProfileCSMConfigs);
// Type: Amazon.Runtime.Internal::ProfileCSMConfigs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ProfileCSMConfigs*
class CORDL_TYPE ProfileCSMConfigs : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ProfileName, put = set_ProfileName))::StringW ProfileName;

  /// @brief Field <ProfileName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ProfileName_k__BackingField, put = __cordl_internal_set__ProfileName_k__BackingField))::StringW _ProfileName_k__BackingField;

  static inline ::Amazon::Runtime::Internal::ProfileCSMConfigs* New_ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain, ::StringW profileName,
                                                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* profileProperties);

  static inline ::Amazon::Runtime::Internal::ProfileCSMConfigs* New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source,
                                                                         ::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain);

  /// @brief Method Setup, addr 0x2035b60, size 0x64c, virtual false, abstract: false, final false
  inline void Setup(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* profileProperties);

  constexpr ::StringW const& __cordl_internal_get__ProfileName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ProfileName_k__BackingField();

  constexpr void __cordl_internal_set__ProfileName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2035b1c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain, ::StringW profileName,
                    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* profileProperties);

  /// @brief Method .ctor, addr 0x2035950, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain);

  /// @brief Method get_ProfileName, addr 0x2035b0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProfileName();

  /// @brief Method set_ProfileName, addr 0x2035b14, size 0x8, virtual false, abstract: false, final false
  inline void set_ProfileName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfileCSMConfigs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfileCSMConfigs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfileCSMConfigs(ProfileCSMConfigs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfileCSMConfigs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfileCSMConfigs(ProfileCSMConfigs const&) = delete;

  /// @brief Field <ProfileName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ProfileName_k__BackingField;

  /// @brief Field CSM_CLIENTID offset 0xffffffff size 0x8
  static constexpr ::ConstString CSM_CLIENTID{ u"csm_clientid" };

  /// @brief Field CSM_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString CSM_ENABLED{ u"csm_enabled" };

  /// @brief Field CSM_HOST offset 0xffffffff size 0x8
  static constexpr ::ConstString CSM_HOST{ u"csm_host" };

  /// @brief Field CSM_PORT offset 0xffffffff size 0x8
  static constexpr ::ConstString CSM_PORT{ u"csm_port" };

  /// @brief Field CSM_PROFILE_ERROR_MSG offset 0xffffffff size 0x8
  static constexpr ::ConstString CSM_PROFILE_ERROR_MSG{ u"CSM configurations not found using profile store." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ProfileCSMConfigs, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ProfileCSMConfigs, ____ProfileName_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ProfileCSMConfigs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ProfileCSMConfigs*, "Amazon.Runtime.Internal", "ProfileCSMConfigs");
