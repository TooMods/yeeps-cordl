#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FallbackInternalConfigurationFactory)
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileStoreChain;
}
namespace Amazon::Runtime::Internal {
class InternalConfiguration;
}
namespace Amazon::Runtime::Internal {
class __FallbackInternalConfigurationFactory__ConfigGenerator;
}
namespace Amazon::Runtime::Internal {
class __FallbackInternalConfigurationFactory____c;
}
namespace Amazon::Runtime::Internal {
class __FallbackInternalConfigurationFactory____c__DisplayClass4_0;
}
namespace Amazon::Runtime {
struct RequestRetryMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class FallbackInternalConfigurationFactory;
}
namespace Amazon::Runtime::Internal {
class __FallbackInternalConfigurationFactory__ConfigGenerator;
}
namespace Amazon::Runtime::Internal {
class __FallbackInternalConfigurationFactory____c;
}
namespace Amazon::Runtime::Internal {
class __FallbackInternalConfigurationFactory____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0);
// Type: ::ConfigGenerator
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::FallbackInternalConfigurationFactory::ConfigGenerator*
class CORDL_TYPE __FallbackInternalConfigurationFactory__ConfigGenerator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x23d8dd8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x23d8df8, size 0xc, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::InternalConfiguration* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x23d8dc4, size 0x14, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::InternalConfiguration* Invoke();

  static inline ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23d8bdc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackInternalConfigurationFactory__ConfigGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FallbackInternalConfigurationFactory__ConfigGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FallbackInternalConfigurationFactory__ConfigGenerator(__FallbackInternalConfigurationFactory__ConfigGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FallbackInternalConfigurationFactory__ConfigGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FallbackInternalConfigurationFactory__ConfigGenerator(__FallbackInternalConfigurationFactory__ConfigGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::FallbackInternalConfigurationFactory::<>c__DisplayClass4_0*
class CORDL_TYPE __FallbackInternalConfigurationFactory____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field environmentVariablesConfiguration, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentVariablesConfiguration,
                      put = __cordl_internal_set_environmentVariablesConfiguration))::Amazon::Runtime::Internal::InternalConfiguration* environmentVariablesConfiguration;

  /// @brief Field profileConfiguration, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_profileConfiguration, put = __cordl_internal_set_profileConfiguration))::Amazon::Runtime::Internal::InternalConfiguration* profileConfiguration;

  static inline ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0* New_ctor();

  /// @brief Method <Reset>b__3, addr 0x23d8e04, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::InternalConfiguration* _Reset_b__3();

  /// @brief Method <Reset>b__4, addr 0x23d8e0c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::InternalConfiguration* _Reset_b__4();

  constexpr ::Amazon::Runtime::Internal::InternalConfiguration*& __cordl_internal_get_environmentVariablesConfiguration();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::InternalConfiguration*> const& __cordl_internal_get_environmentVariablesConfiguration() const;

  constexpr ::Amazon::Runtime::Internal::InternalConfiguration*& __cordl_internal_get_profileConfiguration();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::InternalConfiguration*> const& __cordl_internal_get_profileConfiguration() const;

  constexpr void __cordl_internal_set_environmentVariablesConfiguration(::Amazon::Runtime::Internal::InternalConfiguration* value);

  constexpr void __cordl_internal_set_profileConfiguration(::Amazon::Runtime::Internal::InternalConfiguration* value);

  /// @brief Method .ctor, addr 0x23d8bd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackInternalConfigurationFactory____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FallbackInternalConfigurationFactory____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FallbackInternalConfigurationFactory____c__DisplayClass4_0(__FallbackInternalConfigurationFactory____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FallbackInternalConfigurationFactory____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FallbackInternalConfigurationFactory____c__DisplayClass4_0(__FallbackInternalConfigurationFactory____c__DisplayClass4_0 const&) = delete;

  /// @brief Field environmentVariablesConfiguration, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::InternalConfiguration* ___environmentVariablesConfiguration;

  /// @brief Field profileConfiguration, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::InternalConfiguration* ___profileConfiguration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0, ___environmentVariablesConfiguration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0, ___profileConfiguration) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::FallbackInternalConfigurationFactory::<>c*
class CORDL_TYPE __FallbackInternalConfigurationFactory____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<bool>>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_1,
                             put = setStaticF___9__4_1))::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>>* __9__4_1;

  /// @brief Field <>9__4_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_2, put = setStaticF___9__4_2))::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<int32_t>>* __9__4_2;

  static inline ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c* New_ctor();

  /// @brief Method <Reset>b__4_0, addr 0x23d8e80, size 0x18, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> _Reset_b__4_0(::Amazon::Runtime::Internal::InternalConfiguration* c);

  /// @brief Method <Reset>b__4_1, addr 0x23d8e98, size 0x18, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> _Reset_b__4_1(::Amazon::Runtime::Internal::InternalConfiguration* c);

  /// @brief Method <Reset>b__4_2, addr 0x23d8eb0, size 0x18, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> _Reset_b__4_2(::Amazon::Runtime::Internal::InternalConfiguration* c);

  /// @brief Method .ctor, addr 0x23d8e78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<bool>>* getStaticF___9__4_0();

  static inline ::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>>* getStaticF___9__4_1();

  static inline ::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<int32_t>>* getStaticF___9__4_2();

  static inline void setStaticF___9(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<bool>>* value);

  static inline void setStaticF___9__4_1(::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>>* value);

  static inline void setStaticF___9__4_2(::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<int32_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackInternalConfigurationFactory____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FallbackInternalConfigurationFactory____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FallbackInternalConfigurationFactory____c(__FallbackInternalConfigurationFactory____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FallbackInternalConfigurationFactory____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FallbackInternalConfigurationFactory____c(__FallbackInternalConfigurationFactory____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::FallbackInternalConfigurationFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::FallbackInternalConfigurationFactory*
class CORDL_TYPE FallbackInternalConfigurationFactory : public ::System::Object {
public:
  // Declarations
  using ConfigGenerator = ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator;

  using __c = ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c;

  using __c__DisplayClass4_0 = ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0;

  /// @brief Field _cachedConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cachedConfiguration, put = setStaticF__cachedConfiguration))::Amazon::Runtime::Internal::InternalConfiguration* _cachedConfiguration;

  /// @brief Field _credentialProfileChain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__credentialProfileChain,
                             put = setStaticF__credentialProfileChain))::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* _credentialProfileChain;

  /// @brief Method Reset, addr 0x23d86a0, size 0x534, virtual false, abstract: false, final false
  static inline void Reset();

  /// @brief Method SeekValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Nullable_1<T> SeekValue(::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>* generators,
                                                  ::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<T>>* getValue);

  static inline ::Amazon::Runtime::Internal::InternalConfiguration* getStaticF__cachedConfiguration();

  static inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* getStaticF__credentialProfileChain();

  /// @brief Method get_EndpointDiscoveryEnabled, addr 0x23d8c98, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<bool> get_EndpointDiscoveryEnabled();

  /// @brief Method get_MaxAttempts, addr 0x23d8d60, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int32_t> get_MaxAttempts();

  /// @brief Method get_RetryMode, addr 0x23d8cfc, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> get_RetryMode();

  static inline void setStaticF__cachedConfiguration(::Amazon::Runtime::Internal::InternalConfiguration* value);

  static inline void setStaticF__credentialProfileChain(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FallbackInternalConfigurationFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FallbackInternalConfigurationFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FallbackInternalConfigurationFactory(FallbackInternalConfigurationFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FallbackInternalConfigurationFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FallbackInternalConfigurationFactory(FallbackInternalConfigurationFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*, "Amazon.Runtime.Internal", "FallbackInternalConfigurationFactory");
NEED_NO_BOX(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*, "Amazon.Runtime.Internal", "FallbackInternalConfigurationFactory/ConfigGenerator");
NEED_NO_BOX(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*, "Amazon.Runtime.Internal", "FallbackInternalConfigurationFactory/<>c");
NEED_NO_BOX(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0*, "Amazon.Runtime.Internal",
                       "FallbackInternalConfigurationFactory/<>c__DisplayClass4_0");
