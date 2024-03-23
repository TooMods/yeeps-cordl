#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FallbackCredentialsFactory)
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileStoreChain;
}
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace Amazon::Runtime {
class __FallbackCredentialsFactory__CredentialsGenerator;
}
namespace Amazon::Runtime {
class __FallbackCredentialsFactory____c;
}
namespace Amazon::Runtime {
class __FallbackCredentialsFactory____c__DisplayClass10_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net {
class IWebProxy;
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
namespace Amazon::Runtime {
class FallbackCredentialsFactory;
}
namespace Amazon::Runtime {
class __FallbackCredentialsFactory__CredentialsGenerator;
}
namespace Amazon::Runtime {
class __FallbackCredentialsFactory____c;
}
namespace Amazon::Runtime {
class __FallbackCredentialsFactory____c__DisplayClass10_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::FallbackCredentialsFactory);
MARK_REF_PTR_T(::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator);
MARK_REF_PTR_T(::Amazon::Runtime::__FallbackCredentialsFactory____c);
MARK_REF_PTR_T(::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0);
// Type: ::CredentialsGenerator
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::FallbackCredentialsFactory::CredentialsGenerator*
class CORDL_TYPE __FallbackCredentialsFactory__CredentialsGenerator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1feac90, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1feacb0, size 0xc, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1feac7c, size 0x14, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* Invoke();

  static inline ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1fe9fb0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackCredentialsFactory__CredentialsGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FallbackCredentialsFactory__CredentialsGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FallbackCredentialsFactory__CredentialsGenerator(__FallbackCredentialsFactory__CredentialsGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FallbackCredentialsFactory__CredentialsGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FallbackCredentialsFactory__CredentialsGenerator(__FallbackCredentialsFactory__CredentialsGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::FallbackCredentialsFactory::<>c__DisplayClass10_0*
class CORDL_TYPE __FallbackCredentialsFactory____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field proxy, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_proxy, put = __cordl_internal_set_proxy))::System::Net::IWebProxy* proxy;

  static inline ::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0* New_ctor();

  /// @brief Method <Reset>b__3, addr 0x1feacbc, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* _Reset_b__3();

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get_proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get_proxy() const;

  constexpr void __cordl_internal_set_proxy(::System::Net::IWebProxy* value);

  /// @brief Method .ctor, addr 0x1fe9fa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackCredentialsFactory____c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FallbackCredentialsFactory____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FallbackCredentialsFactory____c__DisplayClass10_0(__FallbackCredentialsFactory____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FallbackCredentialsFactory____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FallbackCredentialsFactory____c__DisplayClass10_0(__FallbackCredentialsFactory____c__DisplayClass10_0 const&) = delete;

  /// @brief Field proxy, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IWebProxy* ___proxy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0, ___proxy) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::FallbackCredentialsFactory::<>c*
class CORDL_TYPE __FallbackCredentialsFactory____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::__FallbackCredentialsFactory____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* __9__10_0;

  /// @brief Field <>9__10_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_1, put = setStaticF___9__10_1))::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* __9__10_1;

  /// @brief Field <>9__10_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_2, put = setStaticF___9__10_2))::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* __9__10_2;

  static inline ::Amazon::Runtime::__FallbackCredentialsFactory____c* New_ctor();

  /// @brief Method <Reset>b__10_0, addr 0x1fead80, size 0x4c, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* _Reset_b__10_0();

  /// @brief Method <Reset>b__10_1, addr 0x1feadcc, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* _Reset_b__10_1();

  /// @brief Method <Reset>b__10_2, addr 0x1feae24, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* _Reset_b__10_2();

  /// @brief Method .ctor, addr 0x1fead78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::__FallbackCredentialsFactory____c* getStaticF___9();

  static inline ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* getStaticF___9__10_0();

  static inline ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* getStaticF___9__10_1();

  static inline ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* getStaticF___9__10_2();

  static inline void setStaticF___9(::Amazon::Runtime::__FallbackCredentialsFactory____c* value);

  static inline void setStaticF___9__10_0(::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* value);

  static inline void setStaticF___9__10_1(::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* value);

  static inline void setStaticF___9__10_2(::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackCredentialsFactory____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FallbackCredentialsFactory____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FallbackCredentialsFactory____c(__FallbackCredentialsFactory____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FallbackCredentialsFactory____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FallbackCredentialsFactory____c(__FallbackCredentialsFactory____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__FallbackCredentialsFactory____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::FallbackCredentialsFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::FallbackCredentialsFactory*
class CORDL_TYPE FallbackCredentialsFactory : public ::System::Object {
public:
  // Declarations
  using CredentialsGenerator = ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator;

  using __c = ::Amazon::Runtime::__FallbackCredentialsFactory____c;

  using __c__DisplayClass10_0 = ::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0;

  /// @brief Field <CredentialsGenerators>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__CredentialsGenerators_k__BackingField, put = setStaticF__CredentialsGenerators_k__BackingField))::System::Collections::Generic::List_1<
      ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>* _CredentialsGenerators_k__BackingField;

  /// @brief Field cachedCredentials, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedCredentials, put = setStaticF_cachedCredentials))::Amazon::Runtime::AWSCredentials* cachedCredentials;

  /// @brief Field credentialProfileChain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_credentialProfileChain,
                             put = setStaticF_credentialProfileChain))::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* credentialProfileChain;

  /// @brief Method ECSEC2CredentialsWrapper, addr 0x1fea1ec, size 0x50, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* ECSEC2CredentialsWrapper();

  /// @brief Method ECSEC2CredentialsWrapper, addr 0x1fea23c, size 0x270, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* ECSEC2CredentialsWrapper(::System::Net::IWebProxy* proxy);

  /// @brief Method GetAWSCredentials, addr 0x1fea06c, size 0x180, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetAWSCredentials(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source);

  /// @brief Method GetCredentials, addr 0x1fea4ac, size 0x50, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetCredentials();

  /// @brief Method GetCredentials, addr 0x1fea4fc, size 0x780, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetCredentials(bool fallbackToAnonymous);

  /// @brief Method Reset, addr 0x1fe9a48, size 0x50, virtual false, abstract: false, final false
  static inline void Reset();

  /// @brief Method Reset, addr 0x1fe9b4c, size 0x45c, virtual false, abstract: false, final false
  static inline void Reset(::System::Net::IWebProxy* proxy);

  static inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>* getStaticF__CredentialsGenerators_k__BackingField();

  static inline ::Amazon::Runtime::AWSCredentials* getStaticF_cachedCredentials();

  static inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* getStaticF_credentialProfileChain();

  /// @brief Method get_CredentialsGenerators, addr 0x1fe9a98, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>* get_CredentialsGenerators();

  static inline void setStaticF__CredentialsGenerators_k__BackingField(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>* value);

  static inline void setStaticF_cachedCredentials(::Amazon::Runtime::AWSCredentials* value);

  static inline void setStaticF_credentialProfileChain(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* value);

  /// @brief Method set_CredentialsGenerators, addr 0x1fe9af0, size 0x5c, virtual false, abstract: false, final false
  static inline void set_CredentialsGenerators(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FallbackCredentialsFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FallbackCredentialsFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FallbackCredentialsFactory(FallbackCredentialsFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FallbackCredentialsFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FallbackCredentialsFactory(FallbackCredentialsFactory const&) = delete;

  /// @brief Field AWS_PROFILE_ENVIRONMENT_VARIABLE offset 0xffffffff size 0x8
  static constexpr ::ConstString AWS_PROFILE_ENVIRONMENT_VARIABLE{ u"AWS_PROFILE" };

  /// @brief Field DefaultProfileName offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultProfileName{ u"default" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::FallbackCredentialsFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::FallbackCredentialsFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::FallbackCredentialsFactory*, "Amazon.Runtime", "FallbackCredentialsFactory");
NEED_NO_BOX(::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*, "Amazon.Runtime", "FallbackCredentialsFactory/CredentialsGenerator");
NEED_NO_BOX(::Amazon::Runtime::__FallbackCredentialsFactory____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__FallbackCredentialsFactory____c*, "Amazon.Runtime", "FallbackCredentialsFactory/<>c");
NEED_NO_BOX(::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0*, "Amazon.Runtime", "FallbackCredentialsFactory/<>c__DisplayClass10_0");
