#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfileManager)
namespace Amazon::Runtime::Internal::Settings {
class SettingsCollection;
}
namespace Amazon::Runtime::Internal::Settings {
class __SettingsCollection__ObjectSettings;
}
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace Amazon::Util {
class ProfileSettingsBase;
}
namespace Amazon::Util {
class SAMLEndpointSettings;
}
namespace Amazon::Util {
class __ProfileManager____c;
}
namespace Amazon::Util {
class __ProfileManager____c__DisplayClass22_0;
}
namespace Amazon::Util {
class __ProfileManager____c__DisplayClass23_0;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Util {
class ProfileManager;
}
namespace Amazon::Util {
class __ProfileManager____c;
}
namespace Amazon::Util {
class __ProfileManager____c__DisplayClass22_0;
}
namespace Amazon::Util {
class __ProfileManager____c__DisplayClass23_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::ProfileManager);
MARK_REF_PTR_T(::Amazon::Util::__ProfileManager____c);
MARK_REF_PTR_T(::Amazon::Util::__ProfileManager____c__DisplayClass22_0);
MARK_REF_PTR_T(::Amazon::Util::__ProfileManager____c__DisplayClass23_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::ProfileManager::<>c*
class CORDL_TYPE __ProfileManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Util::__ProfileManager____c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0))::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>* __9__9_0;

  static inline ::Amazon::Util::__ProfileManager____c* New_ctor();

  /// @brief Method <ListProfileNames>b__9_0, addr 0x220d6ec, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _ListProfileNames_b__9_0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os);

  /// @brief Method .ctor, addr 0x220d6e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Util::__ProfileManager____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>* getStaticF___9__9_0();

  static inline void setStaticF___9(::Amazon::Util::__ProfileManager____c* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProfileManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProfileManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProfileManager____c(__ProfileManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProfileManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProfileManager____c(__ProfileManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__ProfileManager____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::ProfileManager::<>c__DisplayClass22_0*
class CORDL_TYPE __ProfileManager____c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field profileName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_profileName, put = __cordl_internal_set_profileName))::StringW profileName;

  static inline ::Amazon::Util::__ProfileManager____c__DisplayClass22_0* New_ctor();

  /// @brief Method <ReadProfileSettings>b__0, addr 0x220d744, size 0x68, virtual false, abstract: false, final false
  inline bool _ReadProfileSettings_b__0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x);

  constexpr ::StringW const& __cordl_internal_get_profileName() const;

  constexpr ::StringW& __cordl_internal_get_profileName();

  constexpr void __cordl_internal_set_profileName(::StringW value);

  /// @brief Method .ctor, addr 0x220d59c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProfileManager____c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProfileManager____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProfileManager____c__DisplayClass22_0(__ProfileManager____c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProfileManager____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProfileManager____c__DisplayClass22_0(__ProfileManager____c__DisplayClass22_0 const&) = delete;

  /// @brief Field profileName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___profileName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__ProfileManager____c__DisplayClass22_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__ProfileManager____c__DisplayClass22_0, ___profileName) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::ProfileManager::<>c__DisplayClass23_0*
class CORDL_TYPE __ProfileManager____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field settingsKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_settingsKey, put = __cordl_internal_set_settingsKey))::StringW settingsKey;

  static inline ::Amazon::Util::__ProfileManager____c__DisplayClass23_0* New_ctor();

  /// @brief Method <ReadSettings>b__0, addr 0x220d7ac, size 0x28, virtual false, abstract: false, final false
  inline bool _ReadSettings_b__0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x);

  constexpr ::StringW const& __cordl_internal_get_settingsKey() const;

  constexpr ::StringW& __cordl_internal_get_settingsKey();

  constexpr void __cordl_internal_set_settingsKey(::StringW value);

  /// @brief Method .ctor, addr 0x220d678, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProfileManager____c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProfileManager____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProfileManager____c__DisplayClass23_0(__ProfileManager____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProfileManager____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProfileManager____c__DisplayClass23_0(__ProfileManager____c__DisplayClass23_0 const&) = delete;

  /// @brief Field settingsKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___settingsKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__ProfileManager____c__DisplayClass23_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__ProfileManager____c__DisplayClass23_0, ___settingsKey) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util
// Type: Amazon.Util::ProfileManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::ProfileManager*
class CORDL_TYPE ProfileManager : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Util::__ProfileManager____c;

  using __c__DisplayClass22_0 = ::Amazon::Util::__ProfileManager____c__DisplayClass22_0;

  using __c__DisplayClass23_0 = ::Amazon::Util::__ProfileManager____c__DisplayClass23_0;

  /// @brief Method CopyProfileSettings, addr 0x220c948, size 0x588, virtual false, abstract: false, final false
  static inline ::StringW CopyProfileSettings(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* source, ::StringW destinationProfileName);

  /// @brief Method CopyProfileSettings, addr 0x220c8a0, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW CopyProfileSettings(::StringW sourceProfileName, ::StringW destinationProfileName);

  /// @brief Method GetAWSCredentials, addr 0x220d0b4, size 0xf0, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetAWSCredentials(::StringW profileName);

  /// @brief Method GetProfile, addr 0x220d1a4, size 0x128, virtual false, abstract: false, final false
  static inline ::Amazon::Util::ProfileSettingsBase* GetProfile(::StringW profileName);

  /// @brief Method GetProfile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetProfile(::StringW profileName);

  /// @brief Method GetSAMLEndpoint, addr 0x220d4f0, size 0xac, virtual false, abstract: false, final false
  static inline ::Amazon::Util::SAMLEndpointSettings* GetSAMLEndpoint(::StringW endpointName);

  /// @brief Method IsProfileKnown, addr 0x220c768, size 0x18, virtual false, abstract: false, final false
  static inline bool IsProfileKnown(::StringW profileName);

  /// @brief Method ListProfileNames, addr 0x220bf5c, size 0x208, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListProfileNames();

  /// @brief Method ListProfiles, addr 0x220c164, size 0x5c4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::ProfileSettingsBase*>* ListProfiles();

  /// @brief Method ReadProfileSettings, addr 0x220c780, size 0x120, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* ReadProfileSettings(::StringW profileName);

  /// @brief Method ReadProfileSettings, addr 0x220be88, size 0xd4, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* ReadProfileSettings(::Amazon::Runtime::Internal::Settings::SettingsCollection* settings,
                                                                                                                 ::StringW profileName);

  /// @brief Method ReadSettings, addr 0x220d5a4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* ReadSettings(::Amazon::Runtime::Internal::Settings::SettingsCollection* settings, ::StringW settingsKey);

  /// @brief Method RegisterProfile, addr 0x220b09c, size 0x4, virtual false, abstract: false, final false
  static inline void RegisterProfile(::StringW profileName, ::StringW accessKeyId, ::StringW secretKey);

  /// @brief Method RegisterSAMLEndpoint, addr 0x220b860, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW RegisterSAMLEndpoint(::StringW endpointName, ::System::Uri* endpoint, ::StringW authenticationType);

  /// @brief Method RegisterSAMLRoleProfile, addr 0x220b3a8, size 0xc, virtual false, abstract: false, final false
  static inline void RegisterSAMLRoleProfile(::StringW profileName, ::StringW endpointName, ::StringW roleArn, ::StringW userIdentity);

  /// @brief Method RegisterSAMLRoleProfile, addr 0x220b3b4, size 0xc, virtual false, abstract: false, final false
  static inline void RegisterSAMLRoleProfile(::StringW profileName, ::StringW endpointName, ::StringW roleArn, ::StringW userIdentity, ::StringW stsRegion);

  /// @brief Method TryGetAWSCredentials, addr 0x220ced0, size 0x1e4, virtual false, abstract: false, final false
  static inline bool TryGetAWSCredentials(::StringW profileName, ByRef<::Amazon::Runtime::AWSCredentials*> credentials);

  /// @brief Method TryGetProfile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryGetProfile(::StringW profileName, ByRef<T> profile);

  /// @brief Method TryGetSAMLEndpoint, addr 0x220d2cc, size 0x1cc, virtual false, abstract: false, final false
  static inline bool TryGetSAMLEndpoint(::StringW endpointName, ByRef<::Amazon::Util::SAMLEndpointSettings*> endpointSettings);

  /// @brief Method UnregisterProfile, addr 0x220bc74, size 0x214, virtual false, abstract: false, final false
  static inline void UnregisterProfile(::StringW profileName);

  /// @brief Method get_IsAvailable, addr 0x220b094, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvailable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfileManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfileManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfileManager(ProfileManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfileManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfileManager(ProfileManager const&) = delete;

  /// @brief Field AWSCredentialsProfileType offset 0xffffffff size 0x8
  static constexpr ::ConstString AWSCredentialsProfileType{ u"AWS" };

  /// @brief Field SAMLRoleProfileType offset 0xffffffff size 0x8
  static constexpr ::ConstString SAMLRoleProfileType{ u"SAML" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::ProfileManager, 0x10>, "Size mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::ProfileManager);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::ProfileManager*, "Amazon.Util", "ProfileManager");
NEED_NO_BOX(::Amazon::Util::__ProfileManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__ProfileManager____c*, "Amazon.Util", "ProfileManager/<>c");
NEED_NO_BOX(::Amazon::Util::__ProfileManager____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__ProfileManager____c__DisplayClass22_0*, "Amazon.Util", "ProfileManager/<>c__DisplayClass22_0");
NEED_NO_BOX(::Amazon::Util::__ProfileManager____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__ProfileManager____c__DisplayClass23_0*, "Amazon.Util", "ProfileManager/<>c__DisplayClass23_0");
