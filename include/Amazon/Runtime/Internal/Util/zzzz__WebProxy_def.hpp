#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebProxy)
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class WebProxy;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::WebProxy);
// Type: Amazon.Runtime.Internal.Util::WebProxy
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::WebProxy*
class CORDL_TYPE WebProxy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Credentials, put = set_Credentials))::System::Net::ICredentials* Credentials;

  __declspec(property(get = get_ProxyUri, put = set_ProxyUri))::System::Uri* ProxyUri;

  /// @brief Field <Credentials>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Credentials_k__BackingField, put = __cordl_internal_set__Credentials_k__BackingField))::System::Net::ICredentials* _Credentials_k__BackingField;

  /// @brief Field <ProxyUri>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ProxyUri_k__BackingField, put = __cordl_internal_set__ProxyUri_k__BackingField))::System::Uri* _ProxyUri_k__BackingField;

  /// @brief Convert operator to "::System::Net::IWebProxy"
  constexpr operator ::System::Net::IWebProxy*() noexcept;

  /// @brief Method GetProxy, addr 0x2448cd4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Uri* GetProxy(::System::Uri* destination);

  /// @brief Method IsBypassed, addr 0x2448cdc, size 0x8, virtual true, abstract: false, final true
  inline bool IsBypassed(::System::Uri* host);

  static inline ::Amazon::Runtime::Internal::Util::WebProxy* New_ctor(::StringW proxyHost, int32_t proxyPort);

  static inline ::Amazon::Runtime::Internal::Util::WebProxy* New_ctor(::StringW proxyUri);

  static inline ::Amazon::Runtime::Internal::Util::WebProxy* New_ctor(::System::Uri* proxyUri);

  constexpr ::System::Net::ICredentials*& __cordl_internal_get__Credentials_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& __cordl_internal_get__Credentials_k__BackingField() const;

  constexpr ::System::Uri*& __cordl_internal_get__ProxyUri_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get__ProxyUri_k__BackingField() const;

  constexpr void __cordl_internal_set__Credentials_k__BackingField(::System::Net::ICredentials* value);

  constexpr void __cordl_internal_set__ProxyUri_k__BackingField(::System::Uri* value);

  /// @brief Method .ctor, addr 0x2448bd4, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::StringW proxyHost, int32_t proxyPort);

  /// @brief Method .ctor, addr 0x2448b30, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW proxyUri);

  /// @brief Method .ctor, addr 0x2448bac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* proxyUri);

  /// @brief Method get_Credentials, addr 0x2448cc4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Net::ICredentials* get_Credentials();

  /// @brief Method get_ProxyUri, addr 0x2448cb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_ProxyUri();

  /// @brief Convert to "::System::Net::IWebProxy"
  constexpr ::System::Net::IWebProxy* i___System__Net__IWebProxy() noexcept;

  /// @brief Method set_Credentials, addr 0x2448ccc, size 0x8, virtual true, abstract: false, final true
  inline void set_Credentials(::System::Net::ICredentials* value);

  /// @brief Method set_ProxyUri, addr 0x2448cbc, size 0x8, virtual false, abstract: false, final false
  inline void set_ProxyUri(::System::Uri* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebProxy(WebProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebProxy(WebProxy const&) = delete;

  /// @brief Field <ProxyUri>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Uri* ____ProxyUri_k__BackingField;

  /// @brief Field <Credentials>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Net::ICredentials* ____Credentials_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::WebProxy, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::WebProxy, ____ProxyUri_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::WebProxy, ____Credentials_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::WebProxy);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::WebProxy*, "Amazon.Runtime.Internal.Util", "WebProxy");
