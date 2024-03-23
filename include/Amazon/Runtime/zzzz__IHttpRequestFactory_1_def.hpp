#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHttpRequestFactory_1)
namespace Amazon::Runtime {
template <typename TRequestContent> class IHttpRequest_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime {
template <typename TRequestContent> class IHttpRequestFactory_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::IHttpRequestFactory_1);
// Type: Amazon.Runtime::IHttpRequestFactory`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// cpp template
template <typename TRequestContent>
// Is value type: false
// CS Name: ::Amazon.Runtime::IHttpRequestFactory`1<TRequestContent>*
class CORDL_TYPE IHttpRequestFactory_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateHttpRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* CreateHttpRequest(::System::Uri* requestUri);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IHttpRequestFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHttpRequestFactory_1(IHttpRequestFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHttpRequestFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHttpRequestFactory_1(IHttpRequestFactory_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::IHttpRequestFactory_1, "Amazon.Runtime", "IHttpRequestFactory`1");
