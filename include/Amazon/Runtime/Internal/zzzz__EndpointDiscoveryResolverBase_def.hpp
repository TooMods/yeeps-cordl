#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EndpointDiscoveryResolverBase)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class LruCache_2;
}
namespace Amazon::Runtime::Internal {
class DiscoveryEndpointBase;
}
namespace Amazon::Runtime::Internal {
class EndpointOperationContextBase;
}
namespace Amazon::Runtime::Internal {
class __EndpointDiscoveryResolverBase____c__DisplayClass6_0;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class EndpointDiscoveryResolverBase;
}
namespace Amazon::Runtime::Internal {
class __EndpointDiscoveryResolverBase____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0);
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::EndpointDiscoveryResolverBase::<>c__DisplayClass6_0*
class CORDL_TYPE __EndpointDiscoveryResolverBase____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvokeEndpointOperation, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_InvokeEndpointOperation,
      put = __cordl_internal_set_InvokeEndpointOperation))::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* InvokeEndpointOperation;

  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* __4__this;

  /// @brief Field cacheKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cacheKey, put = __cordl_internal_set_cacheKey))::StringW cacheKey;

  static inline ::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0* New_ctor();

  /// @brief Method <ResolveEndpoints>b__0, addr 0x23d7afc, size 0x24, virtual false, abstract: false, final false
  inline void _ResolveEndpoints_b__0();

  /// @brief Method <ResolveEndpoints>b__1, addr 0x23d7b20, size 0x24, virtual false, abstract: false, final false
  inline void _ResolveEndpoints_b__1();

  constexpr ::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*& __cordl_internal_get_InvokeEndpointOperation();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*> const&
  __cordl_internal_get_InvokeEndpointOperation() const;

  constexpr ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*> const& __cordl_internal_get___4__this() const;

  constexpr ::StringW const& __cordl_internal_get_cacheKey() const;

  constexpr ::StringW& __cordl_internal_get_cacheKey();

  constexpr void __cordl_internal_set_InvokeEndpointOperation(::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* value);

  constexpr void __cordl_internal_set___4__this(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* value);

  constexpr void __cordl_internal_set_cacheKey(::StringW value);

  /// @brief Method .ctor, addr 0x23d6d2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EndpointDiscoveryResolverBase____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EndpointDiscoveryResolverBase____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EndpointDiscoveryResolverBase____c__DisplayClass6_0(__EndpointDiscoveryResolverBase____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EndpointDiscoveryResolverBase____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EndpointDiscoveryResolverBase____c__DisplayClass6_0(__EndpointDiscoveryResolverBase____c__DisplayClass6_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* _____4__this;

  /// @brief Field cacheKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___cacheKey;

  /// @brief Field InvokeEndpointOperation, offset: 0x20, size: 0x8, def value: None
  ::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* ___InvokeEndpointOperation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0, ___cacheKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0, ___InvokeEndpointOperation) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::EndpointDiscoveryResolverBase
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EndpointDiscoveryResolverBase*
class CORDL_TYPE EndpointDiscoveryResolverBase : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0;

  __declspec(property(get = get_CacheCount)) int32_t CacheCount;

  /// @brief Field _cache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cache, put = __cordl_internal_set__cache))::Amazon::Runtime::Internal::Util::LruCache_2<
      ::StringW, ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* _cache;

  /// @brief Field _config, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__config, put = __cordl_internal_set__config))::Amazon::Runtime::IClientConfig* _config;

  /// @brief Field _logger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Field objectCacheLock, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_objectCacheLock, put = __cordl_internal_set_objectCacheLock))::System::Object* objectCacheLock;

  /// @brief Method BuildEndpointDiscoveryCacheKey, addr 0x23d6d34, size 0x2d4, virtual false, abstract: false, final false
  static inline ::StringW BuildEndpointDiscoveryCacheKey(::Amazon::Runtime::Internal::EndpointOperationContextBase* context);

  /// @brief Method GetDiscoveryEndpointsFromCache, addr 0x23d7a34, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* GetDiscoveryEndpointsFromCache(::StringW cacheKey);

  static inline ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* New_ctor(::Amazon::Runtime::IClientConfig* config, ::Amazon::Runtime::Internal::Util::Logger* logger);

  /// @brief Method ProcessEndpointCache, addr 0x23d7008, size 0x614, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* ProcessEndpointCache(::StringW cacheKey, bool evictCacheKey, ::System::Uri* evictUri,
                                                                                                                                  ByRef<bool> refreshCache);

  /// @brief Method ProcessInvokeEndpointOperation, addr 0x23d761c, size 0x418, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*
  ProcessInvokeEndpointOperation(::StringW cacheKey, ::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* InvokeEndpointOperation,
                                 bool endpointRequired);

  /// @brief Method ResolveEndpoints, addr 0x23d6a74, size 0x2b8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*
  ResolveEndpoints(::Amazon::Runtime::Internal::EndpointOperationContextBase* context,
                   ::System::Func_1<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* InvokeEndpointOperation);

  constexpr ::Amazon::Runtime::Internal::Util::LruCache_2<::StringW, ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*& __cordl_internal_get__cache();

  constexpr ::cordl_internals::to_const_pointer<
      ::Amazon::Runtime::Internal::Util::LruCache_2<::StringW, ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>*> const&
  __cordl_internal_get__cache() const;

  constexpr ::Amazon::Runtime::IClientConfig*& __cordl_internal_get__config();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IClientConfig*> const& __cordl_internal_get__config() const;

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr ::System::Object*& __cordl_internal_get_objectCacheLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_objectCacheLock() const;

  constexpr void
  __cordl_internal_set__cache(::Amazon::Runtime::Internal::Util::LruCache_2<::StringW, ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* value);

  constexpr void __cordl_internal_set__config(::Amazon::Runtime::IClientConfig* value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  constexpr void __cordl_internal_set_objectCacheLock(::System::Object* value);

  /// @brief Method .ctor, addr 0x23d6930, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IClientConfig* config, ::Amazon::Runtime::Internal::Util::Logger* logger);

  /// @brief Method get_CacheCount, addr 0x23d7aac, size 0x50, virtual true, abstract: false, final false
  inline int32_t get_CacheCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndpointDiscoveryResolverBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndpointDiscoveryResolverBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndpointDiscoveryResolverBase(EndpointDiscoveryResolverBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndpointDiscoveryResolverBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndpointDiscoveryResolverBase(EndpointDiscoveryResolverBase const&) = delete;

  /// @brief Field _config, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::IClientConfig* ____config;

  /// @brief Field _logger, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field _cache, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::LruCache_2<::StringW, ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*>* ____cache;

  /// @brief Field objectCacheLock, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___objectCacheLock;

  /// @brief Field _cacheKeyValidityInSeconds offset 0xffffffff size 0x4
  static constexpr int32_t _cacheKeyValidityInSeconds{ static_cast<int32_t>(0xe10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase, ____config) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase, ____logger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase, ____cache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase, ___objectCacheLock) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*, "Amazon.Runtime.Internal", "EndpointDiscoveryResolverBase");
NEED_NO_BOX(::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__EndpointDiscoveryResolverBase____c__DisplayClass6_0*, "Amazon.Runtime.Internal", "EndpointDiscoveryResolverBase/<>c__DisplayClass6_0");
