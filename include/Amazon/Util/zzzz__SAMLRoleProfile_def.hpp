#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Util/zzzz__ProfileSettingsBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SAMLRoleProfile)
namespace Amazon::Runtime::Internal::Settings {
class __SettingsCollection__ObjectSettings;
}
namespace Amazon::Runtime {
class SAMLImmutableCredentials;
}
namespace Amazon::Util {
class SAMLEndpointSettings;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Util {
class SAMLRoleProfile;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::SAMLRoleProfile);
// Type: Amazon.Util::SAMLRoleProfile
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::SAMLRoleProfile*
class CORDL_TYPE SAMLRoleProfile : public ::Amazon::Util::ProfileSettingsBase {
public:
  // Declarations
  __declspec(property(get = get_EndpointSettings, put = set_EndpointSettings))::Amazon::Util::SAMLEndpointSettings* EndpointSettings;

  __declspec(property(get = get_Region, put = set_Region))::StringW Region;

  __declspec(property(get = get_RoleArn, put = set_RoleArn))::StringW RoleArn;

  __declspec(property(get = get_UseDefaultUserIdentity)) bool UseDefaultUserIdentity;

  __declspec(property(get = get_UserIdentity, put = set_UserIdentity))::StringW UserIdentity;

  /// @brief Field <EndpointSettings>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__EndpointSettings_k__BackingField,
                      put = __cordl_internal_set__EndpointSettings_k__BackingField))::Amazon::Util::SAMLEndpointSettings* _EndpointSettings_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Region_k__BackingField, put = __cordl_internal_set__Region_k__BackingField))::StringW _Region_k__BackingField;

  /// @brief Field <RoleArn>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__RoleArn_k__BackingField, put = __cordl_internal_set__RoleArn_k__BackingField))::StringW _RoleArn_k__BackingField;

  /// @brief Field <UserIdentity>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__UserIdentity_k__BackingField, put = __cordl_internal_set__UserIdentity_k__BackingField))::StringW _UserIdentity_k__BackingField;

  /// @brief Field _session, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__session, put = __cordl_internal_set__session))::Amazon::Runtime::SAMLImmutableCredentials* _session;

  /// @brief Field _synclock, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__synclock, put = __cordl_internal_set__synclock))::System::Object* _synclock;

  /// @brief Method CanCreateFrom, addr 0x220eae0, size 0x8c, virtual false, abstract: false, final false
  static inline bool CanCreateFrom(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os);

  /// @brief Method CanCreateFrom, addr 0x220c728, size 0x10, virtual false, abstract: false, final false
  static inline bool CanCreateFrom(::StringW profileName);

  /// @brief Method GetCurrentSession, addr 0x220e830, size 0x17c, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::SAMLImmutableCredentials* GetCurrentSession();

  /// @brief Method LoadActiveSessionCredentials, addr 0x220ef74, size 0x160, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::SAMLImmutableCredentials* LoadActiveSessionCredentials(::StringW profileName);

  /// @brief Method LoadFrom, addr 0x220eb6c, size 0x274, virtual false, abstract: false, final false
  static inline ::Amazon::Util::SAMLRoleProfile* LoadFrom(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os);

  /// @brief Method LoadFrom, addr 0x220c738, size 0x10, virtual false, abstract: false, final false
  static inline ::Amazon::Util::SAMLRoleProfile* LoadFrom(::StringW profileName);

  static inline ::Amazon::Util::SAMLRoleProfile* New_ctor(::StringW profileName, ::Amazon::Util::SAMLEndpointSettings* endpointSettings, ::StringW roleArn, ::StringW userIdentity,
                                                          ::Amazon::Runtime::SAMLImmutableCredentials* currentSession, ::StringW region);

  /// @brief Method Persist, addr 0x220f190, size 0x30, virtual true, abstract: false, final false
  inline ::StringW Persist();

  /// @brief Method Persist, addr 0x220b3c0, size 0x4a0, virtual false, abstract: false, final false
  static inline ::StringW Persist(::StringW profileName, ::StringW endpointSettingsName, ::StringW roleArn, ::StringW userIdentity, ::StringW session, ::StringW region);

  /// @brief Method Persist, addr 0x220eaa0, size 0x30, virtual false, abstract: false, final false
  inline ::StringW Persist(::StringW session);

  /// @brief Method PersistActiveSessionCredentials, addr 0x220f1c0, size 0x264, virtual false, abstract: false, final false
  static inline void PersistActiveSessionCredentials(::StringW profileName, ::StringW session);

  /// @brief Method PersistSession, addr 0x220e9d4, size 0xcc, virtual false, abstract: false, final false
  inline void PersistSession(::Amazon::Runtime::SAMLImmutableCredentials* credentials);

  /// @brief Method UpdateProfileSessionData, addr 0x220e9ac, size 0x28, virtual false, abstract: false, final false
  inline void UpdateProfileSessionData(::Amazon::Runtime::SAMLImmutableCredentials* credentials);

  /// @brief Method Validate, addr 0x220ede0, size 0x194, virtual false, abstract: false, final false
  static inline void Validate(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os);

  /// @brief Method Validate, addr 0x220f180, size 0x10, virtual false, abstract: false, final false
  static inline void Validate(::StringW profileName);

  constexpr ::Amazon::Util::SAMLEndpointSettings*& __cordl_internal_get__EndpointSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::SAMLEndpointSettings*> const& __cordl_internal_get__EndpointSettings_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Region_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Region_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RoleArn_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RoleArn_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__UserIdentity_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UserIdentity_k__BackingField();

  constexpr ::Amazon::Runtime::SAMLImmutableCredentials*& __cordl_internal_get__session();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::SAMLImmutableCredentials*> const& __cordl_internal_get__session() const;

  constexpr ::System::Object*& __cordl_internal_get__synclock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__synclock() const;

  constexpr void __cordl_internal_set__EndpointSettings_k__BackingField(::Amazon::Util::SAMLEndpointSettings* value);

  constexpr void __cordl_internal_set__Region_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RoleArn_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__UserIdentity_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__session(::Amazon::Runtime::SAMLImmutableCredentials* value);

  constexpr void __cordl_internal_set__synclock(::System::Object* value);

  /// @brief Method .ctor, addr 0x220f0d4, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::StringW profileName, ::Amazon::Util::SAMLEndpointSettings* endpointSettings, ::StringW roleArn, ::StringW userIdentity,
                    ::Amazon::Runtime::SAMLImmutableCredentials* currentSession, ::StringW region);

  /// @brief Method get_EndpointSettings, addr 0x220ead0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::SAMLEndpointSettings* get_EndpointSettings();

  /// @brief Method get_Region, addr 0x220e820, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Region();

  /// @brief Method get_RoleArn, addr 0x220e7f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RoleArn();

  /// @brief Method get_UseDefaultUserIdentity, addr 0x220e814, size 0xc, virtual false, abstract: false, final false
  inline bool get_UseDefaultUserIdentity();

  /// @brief Method get_UserIdentity, addr 0x220e804, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UserIdentity();

  /// @brief Method set_EndpointSettings, addr 0x220ead8, size 0x8, virtual false, abstract: false, final false
  inline void set_EndpointSettings(::Amazon::Util::SAMLEndpointSettings* value);

  /// @brief Method set_Region, addr 0x220e828, size 0x8, virtual false, abstract: false, final false
  inline void set_Region(::StringW value);

  /// @brief Method set_RoleArn, addr 0x220e7fc, size 0x8, virtual false, abstract: false, final false
  inline void set_RoleArn(::StringW value);

  /// @brief Method set_UserIdentity, addr 0x220e80c, size 0x8, virtual false, abstract: false, final false
  inline void set_UserIdentity(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SAMLRoleProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SAMLRoleProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SAMLRoleProfile(SAMLRoleProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SAMLRoleProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SAMLRoleProfile(SAMLRoleProfile const&) = delete;

  /// @brief Field _synclock, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____synclock;

  /// @brief Field <RoleArn>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____RoleArn_k__BackingField;

  /// @brief Field <UserIdentity>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____UserIdentity_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____Region_k__BackingField;

  /// @brief Field _session, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Runtime::SAMLImmutableCredentials* ____session;

  /// @brief Field <EndpointSettings>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Util::SAMLEndpointSettings* ____EndpointSettings_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::SAMLRoleProfile, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::SAMLRoleProfile, ____synclock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::SAMLRoleProfile, ____RoleArn_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::SAMLRoleProfile, ____UserIdentity_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::SAMLRoleProfile, ____Region_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::SAMLRoleProfile, ____session) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::SAMLRoleProfile, ____EndpointSettings_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::SAMLRoleProfile);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::SAMLRoleProfile*, "Amazon.Util", "SAMLRoleProfile");
