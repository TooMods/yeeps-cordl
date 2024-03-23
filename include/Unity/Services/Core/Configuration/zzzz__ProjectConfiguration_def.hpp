#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectConfiguration)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
namespace Unity::Services::Core::Configuration {
class ConfigurationEntry;
}
namespace Unity::Services::Core::Configuration {
class __ProjectConfiguration____c;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class ProjectConfiguration;
}
namespace Unity::Services::Core::Configuration {
class __ProjectConfiguration____c;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::ProjectConfiguration);
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::__ProjectConfiguration____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: ::ProjectConfiguration::<>c*
class CORDL_TYPE __ProjectConfiguration____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Unity::Services::Core::Configuration::__ProjectConfiguration____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__7_0,
               put = setStaticF___9__7_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>, ::StringW>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__7_1,
               put = setStaticF___9__7_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>, ::StringW>* __9__7_1;

  static inline ::Unity::Services::Core::Configuration::__ProjectConfiguration____c* New_ctor();

  /// @brief Method <ToJson>b__7_0, addr 0x264b164, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _ToJson_b__7_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*> pair);

  /// @brief Method <ToJson>b__7_1, addr 0x264b1a0, size 0x44, virtual false, abstract: false, final false
  inline ::StringW _ToJson_b__7_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*> pair);

  /// @brief Method .ctor, addr 0x264b15c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Services::Core::Configuration::__ProjectConfiguration____c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>, ::StringW>* getStaticF___9__7_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>, ::StringW>* getStaticF___9__7_1();

  static inline void setStaticF___9(::Unity::Services::Core::Configuration::__ProjectConfiguration____c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>, ::StringW>* value);

  static inline void setStaticF___9__7_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProjectConfiguration____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProjectConfiguration____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProjectConfiguration____c(__ProjectConfiguration____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProjectConfiguration____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProjectConfiguration____c(__ProjectConfiguration____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::__ProjectConfiguration____c, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Configuration
// Type: Unity.Services.Core.Configuration::ProjectConfiguration
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: ::Unity.Services.Core.Configuration::ProjectConfiguration*
class CORDL_TYPE ProjectConfiguration : public ::System::Object {
public:
  // Declarations
  using __c = ::Unity::Services::Core::Configuration::__ProjectConfiguration____c;

  /// @brief Field m_ConfigValues, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_ConfigValues,
               put = __cordl_internal_set_m_ConfigValues))::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>* m_ConfigValues;

  /// @brief Field m_JsonCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_JsonCache, put = __cordl_internal_set_m_JsonCache))::StringW m_JsonCache;

  /// @brief Convert operator to "::Unity::Services::Core::Configuration::Internal::IProjectConfiguration"
  constexpr operator ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method GetBool, addr 0x264acbc, size 0xac, virtual true, abstract: false, final true
  inline bool GetBool(::StringW key, bool defaultValue);

  /// @brief Method GetFloat, addr 0x264ae7c, size 0xb8, virtual true, abstract: false, final true
  inline float_t GetFloat(::StringW key, float_t defaultValue);

  /// @brief Method GetInt, addr 0x264ae40, size 0x3c, virtual true, abstract: false, final true
  inline int32_t GetInt(::StringW key, int32_t defaultValue);

  /// @brief Method GetString, addr 0x264ad68, size 0xd8, virtual true, abstract: false, final true
  inline ::StringW GetString(::StringW key, ::StringW defaultValue);

  static inline ::Unity::Services::Core::Configuration::ProjectConfiguration*
  New_ctor(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>* configValues);

  /// @brief Method ToJson, addr 0x264af34, size 0x1c4, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*& __cordl_internal_get_m_ConfigValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*> const&
  __cordl_internal_get_m_ConfigValues() const;

  constexpr ::StringW const& __cordl_internal_get_m_JsonCache() const;

  constexpr ::StringW& __cordl_internal_get_m_JsonCache();

  constexpr void __cordl_internal_set_m_ConfigValues(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>* value);

  constexpr void __cordl_internal_set_m_JsonCache(::StringW value);

  /// @brief Method .ctor, addr 0x264ac94, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>* configValues);

  /// @brief Convert to "::Unity::Services::Core::Configuration::Internal::IProjectConfiguration"
  constexpr ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* i___Unity__Services__Core__Configuration__Internal__IProjectConfiguration() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProjectConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProjectConfiguration(ProjectConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProjectConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProjectConfiguration(ProjectConfiguration const&) = delete;

  /// @brief Field m_JsonCache, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_JsonCache;

  /// @brief Field m_ConfigValues, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>* ___m_ConfigValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::ProjectConfiguration, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::ProjectConfiguration, ___m_JsonCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::ProjectConfiguration, ___m_ConfigValues) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::ProjectConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::ProjectConfiguration*, "Unity.Services.Core.Configuration", "ProjectConfiguration");
NEED_NO_BOX(::Unity::Services::Core::Configuration::__ProjectConfiguration____c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::__ProjectConfiguration____c*, "Unity.Services.Core.Configuration", "ProjectConfiguration/<>c");
