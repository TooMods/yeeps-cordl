#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ResponseContext)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime {
class AmazonWebServiceResponse;
}
namespace Amazon::Runtime {
class IResponseContext;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class ResponseContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ResponseContext);
// Type: Amazon.Runtime.Internal::ResponseContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ResponseContext*
class CORDL_TYPE ResponseContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HttpResponse, put = set_HttpResponse))::Amazon::Runtime::Internal::Transform::IWebResponseData* HttpResponse;

  __declspec(property(get = get_Response, put = set_Response))::Amazon::Runtime::AmazonWebServiceResponse* Response;

  /// @brief Field <HttpResponse>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__HttpResponse_k__BackingField,
                      put = __cordl_internal_set__HttpResponse_k__BackingField))::Amazon::Runtime::Internal::Transform::IWebResponseData* _HttpResponse_k__BackingField;

  /// @brief Field <Response>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Response_k__BackingField,
                      put = __cordl_internal_set__Response_k__BackingField))::Amazon::Runtime::AmazonWebServiceResponse* _Response_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::IResponseContext"
  constexpr operator ::Amazon::Runtime::IResponseContext*() noexcept;

  static inline ::Amazon::Runtime::Internal::ResponseContext* New_ctor();

  constexpr ::Amazon::Runtime::Internal::Transform::IWebResponseData*& __cordl_internal_get__HttpResponse_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::IWebResponseData*> const& __cordl_internal_get__HttpResponse_k__BackingField() const;

  constexpr ::Amazon::Runtime::AmazonWebServiceResponse*& __cordl_internal_get__Response_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonWebServiceResponse*> const& __cordl_internal_get__Response_k__BackingField() const;

  constexpr void __cordl_internal_set__HttpResponse_k__BackingField(::Amazon::Runtime::Internal::Transform::IWebResponseData* value);

  constexpr void __cordl_internal_set__Response_k__BackingField(::Amazon::Runtime::AmazonWebServiceResponse* value);

  /// @brief Method .ctor, addr 0x23dcd98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HttpResponse, addr 0x23dcd88, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* get_HttpResponse();

  /// @brief Method get_Response, addr 0x23dcd78, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::AmazonWebServiceResponse* get_Response();

  /// @brief Convert to "::Amazon::Runtime::IResponseContext"
  constexpr ::Amazon::Runtime::IResponseContext* i___Amazon__Runtime__IResponseContext() noexcept;

  /// @brief Method set_HttpResponse, addr 0x23dcd90, size 0x8, virtual true, abstract: false, final true
  inline void set_HttpResponse(::Amazon::Runtime::Internal::Transform::IWebResponseData* value);

  /// @brief Method set_Response, addr 0x23dcd80, size 0x8, virtual true, abstract: false, final true
  inline void set_Response(::Amazon::Runtime::AmazonWebServiceResponse* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseContext(ResponseContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseContext(ResponseContext const&) = delete;

  /// @brief Field <Response>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::AmazonWebServiceResponse* ____Response_k__BackingField;

  /// @brief Field <HttpResponse>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::IWebResponseData* ____HttpResponse_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ResponseContext, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ResponseContext, ____Response_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ResponseContext, ____HttpResponse_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ResponseContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ResponseContext*, "Amazon.Runtime.Internal", "ResponseContext");
