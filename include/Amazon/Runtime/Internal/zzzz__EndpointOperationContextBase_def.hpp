#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EndpointOperationContextBase)
namespace Amazon::Runtime::Internal {
class EndpointDiscoveryDataBase;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class EndpointOperationContextBase;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EndpointOperationContextBase);
// Type: Amazon.Runtime.Internal::EndpointOperationContextBase
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EndpointOperationContextBase*
class CORDL_TYPE EndpointOperationContextBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CustomerCredentials, put = set_CustomerCredentials))::StringW CustomerCredentials;

  __declspec(property(get = get_EndpointDiscoveryData, put = set_EndpointDiscoveryData))::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* EndpointDiscoveryData;

  __declspec(property(get = get_EvictCacheKey, put = set_EvictCacheKey)) bool EvictCacheKey;

  __declspec(property(get = get_EvictUri, put = set_EvictUri))::System::Uri* EvictUri;

  __declspec(property(get = get_OperationName, put = set_OperationName))::StringW OperationName;

  /// @brief Field _customerCredentials, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__customerCredentials, put = __cordl_internal_set__customerCredentials))::StringW _customerCredentials;

  /// @brief Field _endpointDiscoveryData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__endpointDiscoveryData,
                      put = __cordl_internal_set__endpointDiscoveryData))::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* _endpointDiscoveryData;

  /// @brief Field _evictCacheKey, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__evictCacheKey, put = __cordl_internal_set__evictCacheKey)) bool _evictCacheKey;

  /// @brief Field _evictUri, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__evictUri, put = __cordl_internal_set__evictUri))::System::Uri* _evictUri;

  /// @brief Field _operationName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__operationName, put = __cordl_internal_set__operationName))::StringW _operationName;

  static inline ::Amazon::Runtime::Internal::EndpointOperationContextBase*
  New_ctor(::StringW customerCredentials, ::StringW operationName, ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* endpointDiscoveryData, bool evictCacheKey, ::System::Uri* evictUri);

  constexpr ::StringW const& __cordl_internal_get__customerCredentials() const;

  constexpr ::StringW& __cordl_internal_get__customerCredentials();

  constexpr ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*& __cordl_internal_get__endpointDiscoveryData();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*> const& __cordl_internal_get__endpointDiscoveryData() const;

  constexpr bool const& __cordl_internal_get__evictCacheKey() const;

  constexpr bool& __cordl_internal_get__evictCacheKey();

  constexpr ::System::Uri*& __cordl_internal_get__evictUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get__evictUri() const;

  constexpr ::StringW const& __cordl_internal_get__operationName() const;

  constexpr ::StringW& __cordl_internal_get__operationName();

  constexpr void __cordl_internal_set__customerCredentials(::StringW value);

  constexpr void __cordl_internal_set__endpointDiscoveryData(::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* value);

  constexpr void __cordl_internal_set__evictCacheKey(bool value);

  constexpr void __cordl_internal_set__evictUri(::System::Uri* value);

  constexpr void __cordl_internal_set__operationName(::StringW value);

  /// @brief Method .ctor, addr 0x23d7b48, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::StringW customerCredentials, ::StringW operationName, ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* endpointDiscoveryData, bool evictCacheKey, ::System::Uri* evictUri);

  /// @brief Method get_CustomerCredentials, addr 0x23d7bfc, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CustomerCredentials();

  /// @brief Method get_EndpointDiscoveryData, addr 0x23d7c1c, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* get_EndpointDiscoveryData();

  /// @brief Method get_EvictCacheKey, addr 0x23d7c2c, size 0x8, virtual true, abstract: false, final false
  inline bool get_EvictCacheKey();

  /// @brief Method get_EvictUri, addr 0x23d7c40, size 0x8, virtual true, abstract: false, final false
  inline ::System::Uri* get_EvictUri();

  /// @brief Method get_OperationName, addr 0x23d7c0c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_OperationName();

  /// @brief Method set_CustomerCredentials, addr 0x23d7c04, size 0x8, virtual true, abstract: false, final false
  inline void set_CustomerCredentials(::StringW value);

  /// @brief Method set_EndpointDiscoveryData, addr 0x23d7c24, size 0x8, virtual true, abstract: false, final false
  inline void set_EndpointDiscoveryData(::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* value);

  /// @brief Method set_EvictCacheKey, addr 0x23d7c34, size 0xc, virtual true, abstract: false, final false
  inline void set_EvictCacheKey(bool value);

  /// @brief Method set_EvictUri, addr 0x23d7c48, size 0x8, virtual true, abstract: false, final false
  inline void set_EvictUri(::System::Uri* value);

  /// @brief Method set_OperationName, addr 0x23d7c14, size 0x8, virtual true, abstract: false, final false
  inline void set_OperationName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndpointOperationContextBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndpointOperationContextBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndpointOperationContextBase(EndpointOperationContextBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndpointOperationContextBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndpointOperationContextBase(EndpointOperationContextBase const&) = delete;

  /// @brief Field _customerCredentials, offset: 0x10, size: 0x8, def value: None
  ::StringW ____customerCredentials;

  /// @brief Field _operationName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____operationName;

  /// @brief Field _endpointDiscoveryData, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* ____endpointDiscoveryData;

  /// @brief Field _evictCacheKey, offset: 0x28, size: 0x1, def value: None
  bool ____evictCacheKey;

  /// @brief Field _evictUri, offset: 0x30, size: 0x8, def value: None
  ::System::Uri* ____evictUri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EndpointOperationContextBase, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointOperationContextBase, ____customerCredentials) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointOperationContextBase, ____operationName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointOperationContextBase, ____endpointDiscoveryData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointOperationContextBase, ____evictCacheKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointOperationContextBase, ____evictUri) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EndpointOperationContextBase);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EndpointOperationContextBase*, "Amazon.Runtime.Internal", "EndpointOperationContextBase");
