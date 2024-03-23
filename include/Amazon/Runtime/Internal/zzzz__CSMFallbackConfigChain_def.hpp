#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CSMFallbackConfigChain)
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileStoreChain;
}
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
namespace Amazon::Runtime::Internal {
class CSMConfiguration;
}
namespace Amazon::Runtime::Internal {
class __CSMFallbackConfigChain__ConfigurationSource;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class CSMFallbackConfigChain;
}
namespace Amazon::Runtime::Internal {
class __CSMFallbackConfigChain__ConfigurationSource;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::CSMFallbackConfigChain);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource);
// Type: ::ConfigurationSource
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::CSMFallbackConfigChain::ConfigurationSource*
class CORDL_TYPE __CSMFallbackConfigChain__ConfigurationSource : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2035ae0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2035b00, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2035acc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2035398, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CSMFallbackConfigChain__ConfigurationSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CSMFallbackConfigChain__ConfigurationSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CSMFallbackConfigChain__ConfigurationSource(__CSMFallbackConfigChain__ConfigurationSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CSMFallbackConfigChain__ConfigurationSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CSMFallbackConfigChain__ConfigurationSource(__CSMFallbackConfigChain__ConfigurationSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::CSMFallbackConfigChain
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::CSMFallbackConfigChain*
class CORDL_TYPE CSMFallbackConfigChain : public ::System::Object {
public:
  // Declarations
  using ConfigurationSource = ::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource;

  __declspec(property(get = get_AllGenerators,
                      put = set_AllGenerators))::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>* AllGenerators;

  __declspec(property(get = get_CSMConfiguration, put = set_CSMConfiguration))::Amazon::Runtime::Internal::CSMConfiguration* CSMConfiguration;

  __declspec(property(get = get_ConfigSource, put = set_ConfigSource))::StringW ConfigSource;

  __declspec(property(get = get_IsConfigSet, put = set_IsConfigSet)) bool IsConfigSet;

  /// @brief Field LOGGER, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_LOGGER, put = __cordl_internal_set_LOGGER))::Amazon::Runtime::Internal::Util::ILogger* LOGGER;

  /// @brief Field <AllGenerators>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__AllGenerators_k__BackingField, put = __cordl_internal_set__AllGenerators_k__BackingField))::System::Collections::Generic::List_1<
      ::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>* _AllGenerators_k__BackingField;

  /// @brief Field <CSMConfiguration>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__CSMConfiguration_k__BackingField,
                      put = __cordl_internal_set__CSMConfiguration_k__BackingField))::Amazon::Runtime::Internal::CSMConfiguration* _CSMConfiguration_k__BackingField;

  /// @brief Field <ConfigSource>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ConfigSource_k__BackingField, put = __cordl_internal_set__ConfigSource_k__BackingField))::StringW _ConfigSource_k__BackingField;

  /// @brief Field <IsConfigSet>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsConfigSet_k__BackingField, put = __cordl_internal_set__IsConfigSet_k__BackingField)) bool _IsConfigSet_k__BackingField;

  /// @brief Field credentialProfileChain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_credentialProfileChain,
                             put = setStaticF_credentialProfileChain))::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* credentialProfileChain;

  /// @brief Method GetCSMConfig, addr 0x2035454, size 0x314, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::CSMConfiguration* GetCSMConfig();

  static inline ::Amazon::Runtime::Internal::CSMFallbackConfigChain* New_ctor();

  constexpr ::Amazon::Runtime::Internal::Util::ILogger*& __cordl_internal_get_LOGGER();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ILogger*> const& __cordl_internal_get_LOGGER() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>*& __cordl_internal_get__AllGenerators_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>*> const&
  __cordl_internal_get__AllGenerators_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::CSMConfiguration*& __cordl_internal_get__CSMConfiguration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::CSMConfiguration*> const& __cordl_internal_get__CSMConfiguration_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__ConfigSource_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ConfigSource_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsConfigSet_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsConfigSet_k__BackingField();

  constexpr void __cordl_internal_set_LOGGER(::Amazon::Runtime::Internal::Util::ILogger* value);

  constexpr void __cordl_internal_set__AllGenerators_k__BackingField(::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>* value);

  constexpr void __cordl_internal_set__CSMConfiguration_k__BackingField(::Amazon::Runtime::Internal::CSMConfiguration* value);

  constexpr void __cordl_internal_set__ConfigSource_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IsConfigSet_k__BackingField(bool value);

  /// @brief Method <.ctor>b__19_0, addr 0x2035818, size 0x58, virtual false, abstract: false, final false
  inline void __ctor_b__19_0();

  /// @brief Method <.ctor>b__19_1, addr 0x2035870, size 0x58, virtual false, abstract: false, final false
  inline void __ctor_b__19_1();

  /// @brief Method <.ctor>b__19_2, addr 0x20358c8, size 0x88, virtual false, abstract: false, final false
  inline void __ctor_b__19_2();

  /// @brief Method .ctor, addr 0x20350a0, size 0x2f8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* getStaticF_credentialProfileChain();

  /// @brief Method get_AllGenerators, addr 0x203505c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>* get_AllGenerators();

  /// @brief Method get_CSMConfiguration, addr 0x2035090, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::CSMConfiguration* get_CSMConfiguration();

  /// @brief Method get_ConfigSource, addr 0x2035080, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ConfigSource();

  /// @brief Method get_IsConfigSet, addr 0x203506c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsConfigSet();

  static inline void setStaticF_credentialProfileChain(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* value);

  /// @brief Method set_AllGenerators, addr 0x2035064, size 0x8, virtual false, abstract: false, final false
  inline void set_AllGenerators(::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>* value);

  /// @brief Method set_CSMConfiguration, addr 0x2035098, size 0x8, virtual false, abstract: false, final false
  inline void set_CSMConfiguration(::Amazon::Runtime::Internal::CSMConfiguration* value);

  /// @brief Method set_ConfigSource, addr 0x2035088, size 0x8, virtual false, abstract: false, final false
  inline void set_ConfigSource(::StringW value);

  /// @brief Method set_IsConfigSet, addr 0x2035074, size 0xc, virtual false, abstract: false, final false
  inline void set_IsConfigSet(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CSMFallbackConfigChain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CSMFallbackConfigChain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CSMFallbackConfigChain(CSMFallbackConfigChain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CSMFallbackConfigChain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CSMFallbackConfigChain(CSMFallbackConfigChain const&) = delete;

  /// @brief Field LOGGER, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::ILogger* ___LOGGER;

  /// @brief Field <AllGenerators>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*>* ____AllGenerators_k__BackingField;

  /// @brief Field <IsConfigSet>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsConfigSet_k__BackingField;

  /// @brief Field <ConfigSource>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____ConfigSource_k__BackingField;

  /// @brief Field <CSMConfiguration>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::CSMConfiguration* ____CSMConfiguration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::CSMFallbackConfigChain, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CSMFallbackConfigChain, ___LOGGER) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CSMFallbackConfigChain, ____AllGenerators_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CSMFallbackConfigChain, ____IsConfigSet_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CSMFallbackConfigChain, ____ConfigSource_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CSMFallbackConfigChain, ____CSMConfiguration_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::CSMFallbackConfigChain);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::CSMFallbackConfigChain*, "Amazon.Runtime.Internal", "CSMFallbackConfigChain");
NEED_NO_BOX(::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__CSMFallbackConfigChain__ConfigurationSource*, "Amazon.Runtime.Internal", "CSMFallbackConfigChain/ConfigurationSource");
