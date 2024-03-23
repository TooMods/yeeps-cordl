#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FallbackEndpointDiscoveryEnabledFactory)
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileStoreChain;
}
namespace Amazon::Runtime {
class __FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator;
}
namespace Amazon::Runtime {
class __FallbackEndpointDiscoveryEnabledFactory____c;
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
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class FallbackEndpointDiscoveryEnabledFactory;
}
namespace Amazon::Runtime {
class __FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator;
}
namespace Amazon::Runtime {
class __FallbackEndpointDiscoveryEnabledFactory____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::FallbackEndpointDiscoveryEnabledFactory);
MARK_REF_PTR_T(::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator);
MARK_REF_PTR_T(::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory____c);
// Type: ::ConfigGenerator
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::FallbackEndpointDiscoveryEnabledFactory::ConfigGenerator*
class CORDL_TYPE __FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2019c54, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2019c74, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2019c40, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x20196d8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator(__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator(__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::FallbackEndpointDiscoveryEnabledFactory::<>c*
class CORDL_TYPE __FallbackEndpointDiscoveryEnabledFactory____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator* __9__8_0;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_1, put = setStaticF___9__8_1))::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator* __9__8_1;

  static inline ::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory____c* New_ctor();

  /// @brief Method <Reset>b__8_0, addr 0x2019d08, size 0x5c, virtual false, abstract: false, final false
  inline bool _Reset_b__8_0();

  /// @brief Method <Reset>b__8_1, addr 0x2019d64, size 0x90, virtual false, abstract: false, final false
  inline bool _Reset_b__8_1();

  /// @brief Method .ctor, addr 0x2019d00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory____c* getStaticF___9();

  static inline ::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator* getStaticF___9__8_0();

  static inline ::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator* getStaticF___9__8_1();

  static inline void setStaticF___9(::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory____c* value);

  static inline void setStaticF___9__8_0(::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator* value);

  static inline void setStaticF___9__8_1(::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackEndpointDiscoveryEnabledFactory____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FallbackEndpointDiscoveryEnabledFactory____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FallbackEndpointDiscoveryEnabledFactory____c(__FallbackEndpointDiscoveryEnabledFactory____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FallbackEndpointDiscoveryEnabledFactory____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FallbackEndpointDiscoveryEnabledFactory____c(__FallbackEndpointDiscoveryEnabledFactory____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::FallbackEndpointDiscoveryEnabledFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::FallbackEndpointDiscoveryEnabledFactory*
class CORDL_TYPE FallbackEndpointDiscoveryEnabledFactory : public ::System::Object {
public:
  // Declarations
  using ConfigGenerator = ::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator;

  using __c = ::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory____c;

  /// @brief Field <EnabledGenerators>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__EnabledGenerators_k__BackingField, put = setStaticF__EnabledGenerators_k__BackingField))::System::Collections::Generic::List_1<
      ::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator*>* _EnabledGenerators_k__BackingField;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lock, put = setStaticF__lock))::System::Object* _lock;

  /// @brief Field credentialProfileChain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_credentialProfileChain,
                             put = setStaticF_credentialProfileChain))::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* credentialProfileChain;

  /// @brief Field endpointDiscoveryEnabled, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_endpointDiscoveryEnabled, put = setStaticF_endpointDiscoveryEnabled))::System::Nullable_1<bool> endpointDiscoveryEnabled;

  /// @brief Method GetEnabled, addr 0x2019794, size 0x4ac, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<bool> GetEnabled();

  /// @brief Method Reset, addr 0x2019358, size 0x2cc, virtual false, abstract: false, final false
  static inline void Reset();

  static inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator*>* getStaticF__EnabledGenerators_k__BackingField();

  static inline ::System::Object* getStaticF__lock();

  static inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* getStaticF_credentialProfileChain();

  static inline ::System::Nullable_1<bool> getStaticF_endpointDiscoveryEnabled();

  /// @brief Method get_EnabledGenerators, addr 0x2019624, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator*>* get_EnabledGenerators();

  static inline void setStaticF__EnabledGenerators_k__BackingField(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator*>* value);

  static inline void setStaticF__lock(::System::Object* value);

  static inline void setStaticF_credentialProfileChain(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* value);

  static inline void setStaticF_endpointDiscoveryEnabled(::System::Nullable_1<bool> value);

  /// @brief Method set_EnabledGenerators, addr 0x201967c, size 0x5c, virtual false, abstract: false, final false
  static inline void set_EnabledGenerators(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FallbackEndpointDiscoveryEnabledFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FallbackEndpointDiscoveryEnabledFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FallbackEndpointDiscoveryEnabledFactory(FallbackEndpointDiscoveryEnabledFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FallbackEndpointDiscoveryEnabledFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FallbackEndpointDiscoveryEnabledFactory(FallbackEndpointDiscoveryEnabledFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::FallbackEndpointDiscoveryEnabledFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::FallbackEndpointDiscoveryEnabledFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::FallbackEndpointDiscoveryEnabledFactory*, "Amazon.Runtime", "FallbackEndpointDiscoveryEnabledFactory");
NEED_NO_BOX(::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory__ConfigGenerator*, "Amazon.Runtime", "FallbackEndpointDiscoveryEnabledFactory/ConfigGenerator");
NEED_NO_BOX(::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__FallbackEndpointDiscoveryEnabledFactory____c*, "Amazon.Runtime", "FallbackEndpointDiscoveryEnabledFactory/<>c");
