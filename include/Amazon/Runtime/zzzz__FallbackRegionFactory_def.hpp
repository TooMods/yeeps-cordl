#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FallbackRegionFactory)
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileStoreChain;
}
namespace Amazon::Runtime {
class AWSRegion;
}
namespace Amazon::Runtime {
class __FallbackRegionFactory__RegionGenerator;
}
namespace Amazon::Runtime {
class __FallbackRegionFactory____c;
}
namespace Amazon {
class RegionEndpoint;
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
namespace Amazon::Runtime {
class FallbackRegionFactory;
}
namespace Amazon::Runtime {
class __FallbackRegionFactory__RegionGenerator;
}
namespace Amazon::Runtime {
class __FallbackRegionFactory____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::FallbackRegionFactory);
MARK_REF_PTR_T(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator);
MARK_REF_PTR_T(::Amazon::Runtime::__FallbackRegionFactory____c);
// Type: ::RegionGenerator
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::FallbackRegionFactory::RegionGenerator*
class CORDL_TYPE __FallbackRegionFactory__RegionGenerator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1fe11c8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1fe11e8, size 0xc, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AWSRegion* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1fe11b4, size 0x14, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::AWSRegion* Invoke();

  static inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1fe09c4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackRegionFactory__RegionGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FallbackRegionFactory__RegionGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FallbackRegionFactory__RegionGenerator(__FallbackRegionFactory__RegionGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FallbackRegionFactory__RegionGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FallbackRegionFactory__RegionGenerator(__FallbackRegionFactory__RegionGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::FallbackRegionFactory::<>c*
class CORDL_TYPE __FallbackRegionFactory____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::__FallbackRegionFactory____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* __9__12_0;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1))::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* __9__12_1;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2))::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* __9__12_2;

  /// @brief Field <>9__12_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_3, put = setStaticF___9__12_3))::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* __9__12_3;

  /// @brief Field <>9__12_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_4, put = setStaticF___9__12_4))::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* __9__12_4;

  /// @brief Field <>9__12_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_5, put = setStaticF___9__12_5))::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* __9__12_5;

  /// @brief Field <>9__12_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_6, put = setStaticF___9__12_6))::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* __9__12_6;

  static inline ::Amazon::Runtime::__FallbackRegionFactory____c* New_ctor();

  /// @brief Method <Reset>b__12_0, addr 0x1fe1260, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSRegion* _Reset_b__12_0();

  /// @brief Method <Reset>b__12_1, addr 0x1fe12b8, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSRegion* _Reset_b__12_1();

  /// @brief Method <Reset>b__12_2, addr 0x1fe1310, size 0x8c, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSRegion* _Reset_b__12_2();

  /// @brief Method <Reset>b__12_3, addr 0x1fe139c, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSRegion* _Reset_b__12_3();

  /// @brief Method <Reset>b__12_4, addr 0x1fe13f4, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSRegion* _Reset_b__12_4();

  /// @brief Method <Reset>b__12_5, addr 0x1fe144c, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSRegion* _Reset_b__12_5();

  /// @brief Method <Reset>b__12_6, addr 0x1fe14a4, size 0x8c, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSRegion* _Reset_b__12_6();

  /// @brief Method .ctor, addr 0x1fe1258, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::__FallbackRegionFactory____c* getStaticF___9();

  static inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* getStaticF___9__12_0();

  static inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* getStaticF___9__12_1();

  static inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* getStaticF___9__12_2();

  static inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* getStaticF___9__12_3();

  static inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* getStaticF___9__12_4();

  static inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* getStaticF___9__12_5();

  static inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* getStaticF___9__12_6();

  static inline void setStaticF___9(::Amazon::Runtime::__FallbackRegionFactory____c* value);

  static inline void setStaticF___9__12_0(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value);

  static inline void setStaticF___9__12_1(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value);

  static inline void setStaticF___9__12_2(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value);

  static inline void setStaticF___9__12_3(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value);

  static inline void setStaticF___9__12_4(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value);

  static inline void setStaticF___9__12_5(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value);

  static inline void setStaticF___9__12_6(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackRegionFactory____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FallbackRegionFactory____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FallbackRegionFactory____c(__FallbackRegionFactory____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FallbackRegionFactory____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FallbackRegionFactory____c(__FallbackRegionFactory____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__FallbackRegionFactory____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::FallbackRegionFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::FallbackRegionFactory*
class CORDL_TYPE FallbackRegionFactory : public ::System::Object {
public:
  // Declarations
  using RegionGenerator = ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator;

  using __c = ::Amazon::Runtime::__FallbackRegionFactory____c;

  /// @brief Field <AllGenerators>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF__AllGenerators_k__BackingField,
               put = setStaticF__AllGenerators_k__BackingField))::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* _AllGenerators_k__BackingField;

  /// @brief Field <NonMetadataGenerators>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__NonMetadataGenerators_k__BackingField, put = setStaticF__NonMetadataGenerators_k__BackingField))::System::Collections::Generic::List_1<
      ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* _NonMetadataGenerators_k__BackingField;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lock, put = setStaticF__lock))::System::Object* _lock;

  /// @brief Field cachedRegion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedRegion, put = setStaticF_cachedRegion))::Amazon::Runtime::AWSRegion* cachedRegion;

  /// @brief Field credentialProfileChain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_credentialProfileChain,
                             put = setStaticF_credentialProfileChain))::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* credentialProfileChain;

  /// @brief Method GetRegionEndpoint, addr 0x1fe0a80, size 0x50, virtual false, abstract: false, final false
  static inline ::Amazon::RegionEndpoint* GetRegionEndpoint();

  /// @brief Method GetRegionEndpoint, addr 0x1fe0ad0, size 0x6e4, virtual false, abstract: false, final false
  static inline ::Amazon::RegionEndpoint* GetRegionEndpoint(bool includeInstanceMetadata);

  /// @brief Method Reset, addr 0x1fe0128, size 0x734, virtual false, abstract: false, final false
  static inline void Reset();

  static inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* getStaticF__AllGenerators_k__BackingField();

  static inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* getStaticF__NonMetadataGenerators_k__BackingField();

  static inline ::System::Object* getStaticF__lock();

  static inline ::Amazon::Runtime::AWSRegion* getStaticF_cachedRegion();

  static inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* getStaticF_credentialProfileChain();

  /// @brief Method get_AllGenerators, addr 0x1fe085c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* get_AllGenerators();

  /// @brief Method get_NonMetadataGenerators, addr 0x1fe0910, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* get_NonMetadataGenerators();

  static inline void setStaticF__AllGenerators_k__BackingField(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* value);

  static inline void setStaticF__NonMetadataGenerators_k__BackingField(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* value);

  static inline void setStaticF__lock(::System::Object* value);

  static inline void setStaticF_cachedRegion(::Amazon::Runtime::AWSRegion* value);

  static inline void setStaticF_credentialProfileChain(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* value);

  /// @brief Method set_AllGenerators, addr 0x1fe08b4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_AllGenerators(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* value);

  /// @brief Method set_NonMetadataGenerators, addr 0x1fe0968, size 0x5c, virtual false, abstract: false, final false
  static inline void set_NonMetadataGenerators(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FallbackRegionFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FallbackRegionFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FallbackRegionFactory(FallbackRegionFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FallbackRegionFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FallbackRegionFactory(FallbackRegionFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::FallbackRegionFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::FallbackRegionFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::FallbackRegionFactory*, "Amazon.Runtime", "FallbackRegionFactory");
NEED_NO_BOX(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "Amazon.Runtime", "FallbackRegionFactory/RegionGenerator");
NEED_NO_BOX(::Amazon::Runtime::__FallbackRegionFactory____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__FallbackRegionFactory____c*, "Amazon.Runtime", "FallbackRegionFactory/<>c");
